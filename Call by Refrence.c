#include<stdio.h>
void ChangeValue(int *ptr)
{
*ptr=10;
}
int main()
{
int num=5;
ChangeValue(&num);
printf("The updated value of num:%d\n",num);
return 0;
}
