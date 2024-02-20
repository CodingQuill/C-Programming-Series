#include<stdio.h>
int main()
    //Initialization of array without size
{
int numbers[]={1,2,3};
printf("Auto size array:");
for(int i=0;i<sizeof(numbers)/sizeof(numbers[0]);i++)
{
printf("%d ",numbers[i]);
}
return 0;
}
