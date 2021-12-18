#include <stdio.h>

typedef unsigned int UINT;

UINT strlenX(char *str)      // strlen
{
    int iCnt = 0;
    
    if(str == NULL)
    {
        return 0;
    }
    
    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    UINT iRet = 0;
    
    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);
    // char * ptr = NULL;
    iRet = strlenX(Arr);        // strlenX(NULL);   strlenX(ptr);
    printf("Length of string is : %u\n",iRet);
    
    return 0;
}
