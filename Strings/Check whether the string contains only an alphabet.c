#include <stdio.h>
int main()
{
    char str[100];
    int i, flag = 1;
    printf("Enter a string: ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++)
    {
        if(!((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')))
        {
            flag = 0;
            break;
        }
    }
    if(flag)
        printf("Only Alphabets");
    else
        printf("Contains Other Characters");
    return 0;
}
