#include<stdio.h>
#include<stdlib.h>

int CountWhite(char *str)
{
    int iCount = 0;
    while(*str!='\0')
    {
        if(*str == ' ') 
        {
          iCount = iCount+1;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char arr[20];

    int iRet = 0;

    printf("Enter String:\n");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);


    return EXIT_SUCCESS;
}