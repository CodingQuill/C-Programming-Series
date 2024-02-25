#include<stdio.h>
int isPrime(int num)
{
    if(num<=1)return 0;
for(int i=2;i*i<=num;++i)
{
if(num%i==0)return 0;
}
return 1;
}
int main()
{
int n;

printf("Enter a Number:");
scanf("%d",&n);
if(isPrime(n))
    printf("%d is a Prime Number\n",n);
else
    printf("%d is not a Prime Number\n",n);
return 0;
}
