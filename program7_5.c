    #include<stdio.h>
#include<stdlib.h>


void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    
     if(iNo<0)
    {
        iNo = -iNo;         
    } 
    
    for(iCnt = 1; iCnt <= 5 ; iCnt++)
    {
        
        printf("%d\n",iCnt * iNo);
        
    }
}
int main()  
{
    int iValue = 0;
    
    printf("Enter the number:\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}