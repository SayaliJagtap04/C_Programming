#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = iNo;
    while(iCnt >0)
    {
        printf("*\t");
        iCnt--;
    }
}
int main()
{

    int iValue = 0;
    printf("Enter number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}