#include<stdio.h>
#include<stdlib.h>


void Number(int iNo)
{
    int iCnt = 0;
    
    if(iNo<0)
    {
        iNo = -iNo;
    }

    if(iNo <= 50)
    {
        printf("Small\n");
    }
    else if((iNo>50) && (iNo <=100) )
    {
        printf("medium\n");
    }
    else
    {
        printf("High\n");
    }
    
}
int main()  
{
    int iValue = 0;
    
    printf("Enter the number:\n");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}