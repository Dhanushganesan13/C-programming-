#include <stdio.h>
int main()
{
    char str[100];
    int i, count = 0;
    gets(str);
    for(i = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            if(!(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||
                 str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'))
            {
                count++;
            }
        }
    }
    printf("Number of Consonants = %d", count);
    return 0;
}
