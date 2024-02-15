#include<stdio.h>
int main()
{
    //Logical Operator
int x=1,y=0;

if(x&&y)
{
printf("Both x & y are true\n");
}

if(x||y)
{
printf("Atleast one of x or y is true\n");
}

if(!y)
{
printf("y is false\n");
}

return 0;
}
