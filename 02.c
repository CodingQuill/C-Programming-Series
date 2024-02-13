#include<stdio.h>
main()
{
char name[20];
int age;

printf("Enter your name:");
scanf("%s",&name);
printf("Enter your age:");
scanf("%d",&age);

printf("Hello %s. You are %d years old and Welcome to Coding Quill.",name,age);
return 0;
}
