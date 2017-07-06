#include<stdio.h>

struct queue{
 char data[50];
int front;
int rear;
};
int main()
{
struct queue q;
q.front=0;
int a[5]; //declare and initialize a variable
int *p; //declare a pointer
p=&a;   //store the address of variable a in point p
int i=0;

printf("The address of variable a is 0x%x \n",&a);
}
