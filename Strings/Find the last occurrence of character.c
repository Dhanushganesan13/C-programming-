#include <stdio.h>
int main()
{
    char str[100], ch;
    int i, pos=-1;
    gets(str);
    scanf("%c",&ch);
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]==ch)
            pos=i;
    }
    if(pos==-1)
        printf("Character Not Found");
    else
        printf("Last Occurrence at Position %d", pos+1);
    return 0;
}
