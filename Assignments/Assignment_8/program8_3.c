
#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    int iMulti = 1;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iMulti = iMulti * iCnt;
    }

    return iMulti;
}

int main()  
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial of number is :%d",iRet);


    return EXIT_SUCCESS;
}