#include<stdio.h>
int num, num1;
void sum(void)
{
printf("Enter the first digit \n");
scanf("%d",&num);
printf("Enter the second digit \n");
scanf("%d",&num1);
printf("THE SUM IS:  %d\n",num+num1);

}
int main()
{
sum();
return 0;
}
