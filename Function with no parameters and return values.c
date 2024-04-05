#include<stdio.h>
#include<stdlib.h>

    //Function with no parameters and return values
int generateRandomNumber()
{
    return rand()%100; //Returning a random number b/w 0 to 99 using stdlib() library which is rand()

}

int main()
{
int randomNumber=generateRandomNumber();
printf("Random number:%d\n", randomNumber);

return 0;
}
