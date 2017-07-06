#include<stdio.h>
int a, b;
int sum()
{
printf("The sum is: %d\n", a+b);
}

int subtract()
{
printf("The diffrence is: %d\n", a-b);
}
int divide()
{
printf("The quotient is: %d\n", a/b);
}
int multiple()
{
printf("The product is: %d\n", a*b);
}
int main()
{
a=8;
b=4;
sum();
subtract();
multiple();
divide( );
return 0;
}
