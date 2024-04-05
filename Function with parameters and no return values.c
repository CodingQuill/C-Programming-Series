#include<stdio.h>
    //Function with parameters and no return values
void greet(char name[])
{
    printf("Hello, %s!\n",name);
}
int main()
{
char userName[]="Rohan";
greet(userName);
return 0;
}
