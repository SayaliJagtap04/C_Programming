#include<stdio.h>
#include<stdlib.h>

int Display(int iNo, int iFrequency)
{
    int iCnt = 0;
    if(iNo / 2 == 0)
    {
        printf("Even Number\n");
        return ;
    }
}

int main()
{

    int iValue = 0;
    int iCount = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    printf("Enter Frequency:\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return EXIT_SUCCESS;
}