#include <stdio.h>
int main()
{
    char str[100], ch;
    int i;
    gets(str);
    scanf("%c",&ch);
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]==ch)
        {
            printf("First Occurrence at Position %d", i+1);
            return 0;
        }
    }
    printf("Character Not Found");
    return 0;
}
