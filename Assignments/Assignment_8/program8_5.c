
#include<stdio.h>
#include<stdlib.h>

void TableRev(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    
    for(iCnt = 10 ; iCnt >= 1; iCnt--)
    {
        printf("%d\n",iNo*iCnt);
    }
}

int main()  
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    TableRev(iValue);

    return EXIT_SUCCESS;
}