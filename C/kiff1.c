#include<stdio.h>
void world(char string_[]){
printf("The string: ");
fgets(string_, 50, stdin);
printf(" %s\n ", string_);

}
int main(void)
{
char string_[100];
world(string_);
return 0;
} 
