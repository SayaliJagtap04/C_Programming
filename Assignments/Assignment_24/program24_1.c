#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool ChkCh(char *str, char  ch)
{
    while(*str !='\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }   
        str++;
    }
    return FALSE;

}


int main()
{

    char arr[20];
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter string:\n");
    scanf("%[^'\n']s",arr);

    printf("Enter character:\n");
    scanf(" %c",&cValue);

    bRet = ChkCh(arr,cValue);

    if(bRet == true)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return EXIT_SUCCESS;
}

