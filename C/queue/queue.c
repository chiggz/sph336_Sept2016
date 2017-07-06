#include<stdio.h>
struct queue
{
	int data[8];
	int front;
	int rear;
};

int add(int item,struct queue *q)
{
	int r = q->rear + 1;
	if (r > 7)
	{
	printf("Queue tafadhali imejaa\n");
	return 0; //nothing can be added
	}
	else
	{
	q->rear = r;
	q->data[q->rear] = item;
	return 1; //addition was succesful
	}
}

void delete_then_shift(struct queue *q, int next)
{
	while (next < q->rear)
	{
	q->data[next] = q->data[next+1];
	++next;
	}
	q->data[q->rear] = 0;
	--q->rear; 
}

int size(struct queue *q)
{
	return q->rear - q->front + 1;
}

int peek(struct queue *q )
{
	return q->data[q->front];
}

int main(int argc, char const *argv[])
{
	struct queue q;
	q.front= 0;
	q.rear= -1;
	printf("Adding 8 items to the queue\n");
	add(23, &q);
	add(24, &q);
	add(25, &q);
	add(26, &q);
	add(27, &q);
	add(28, &q);
	add(29, &q);
	add(30, &q);
	printf("Adding a ninth item\n\t");
	add(57, &q);

	printf("Peek: \t%d\n", peek(&q));
	printf("Rear b4 deleting and shifting: %d\n", q.data[q.rear]);
	delete_then_shift(&q,q.rear);
	printf("Peek: \t%d\n", peek(&q));
	printf("Rear after deleting and shifting: %d\n", q.data[q.rear]);
	printf("Front: \t%d\n", q.front);
	printf("Size: \t%d\n", size(&q));
	return 0;
}
