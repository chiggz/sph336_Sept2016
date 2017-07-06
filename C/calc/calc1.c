
#include<stdio.h>
int a, b;
void sum()
{
printf("The sum is: %d\n",a+b);
}

void subtract()
{
printf("The diffrence: %d\n",a-b);
}
void divide()
{
printf("The quotient is: %d\n",a/b);
}
void multiple()
{
printf("The multiple is: %d\n",a*b);
}
int main()
{
printf("Enter the first number: \n");
scanf("%d",&a);
printf("Enter the second number: \n");
scanf("%d",&b);
sum();
subtract();
multiple();
divide();
return 0;
}



