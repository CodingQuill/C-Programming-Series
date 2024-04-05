#include<stdio.h>
    //Function with parameters and return value
int add(int a , int b)
{
 return a+b; //return the sum of parameters
}

int main()
{
    int num1=5, num2=3;
    int sum=add(num1,num2);

printf("The sum of %d and %d is:%d",num1,num2,sum);
return 0;
}
