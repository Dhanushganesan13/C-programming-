#include <stdio.h>
int main()
{
    char str[100];
    int i, count = 0;
    gets(str);
    for(i = 0; str[i] != '\0'; i++)
    {
        if(!((str[i] >= 'A' && str[i] <= 'Z') ||
             (str[i] >= 'a' && str[i] <= 'z') ||
             (str[i] >= '0' && str[i] <= '9') ||
             str[i] == ' '))
        {
            count++;
        }
    }
    printf("Special Characters = %d", count);
    return 0;
}
