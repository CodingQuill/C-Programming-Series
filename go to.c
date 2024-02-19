#include<stdio.h>
int main()
    //Go-to statement
{
int i=0;
    loop:
if(i<=10)
{
printf("%d ",i);
i++;
 goto loop;
}
return 0;
}
