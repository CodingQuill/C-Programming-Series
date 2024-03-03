#include<stdio.h>
void ChangeValue(int x)
{
x=10;
}
int main()
{
int num=5;
ChangeValue(num);
printf("The value of num: %d\n",num);
return 0;
}
