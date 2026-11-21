#include<stdio.h>
#include<stdlib.h>

int FirstChar(char *str, char ch)
{
    int iIndex =  -1;

   while(*str!='\0')
   {
        iIndex = iIndex + 1;
        if(*str == ch)
        {   
            return iIndex;
            break;
        }
        *str++;
   }

    return -1;
}


int main()
{

    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^'\n']s",arr);

    printf("Enter character:\n");
    scanf(" %c",&cValue);

    iRet = FirstChar(arr,cValue);

    printf("Character location  is:%d\n",iRet);

    return EXIT_SUCCESS;
}

