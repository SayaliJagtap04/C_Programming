#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{

    int iValue = 0;
    BOOL bRet = FALSE;


    printf("Enter number:\n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == TRUE)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }

    return EXIT_SUCCESS;
}