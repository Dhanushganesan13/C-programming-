#include <stdio.h>
int main()
{
    char str[100];
    int i, alpha=0, digit=0, space=0, special=0;
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
            alpha++;
        else if(str[i]>='0'&&str[i]<='9')
            digit++;
        else if(str[i]==' ')
            space++;
        else
            special++;
    }
    printf("Alphabets = %d\n", alpha);
    printf("Digits = %d\n", digit);
    printf("Spaces = %d\n", space);
    printf("Special Characters = %d\n", special);
    return 0;
}
