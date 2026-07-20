#include <stdio.h>
int main()
{
    char str[100], small, large;
    int i = 0;
    printf("Enter a string: ");
    gets(str);
    small = large = str[0];
    while(str[i] != '\0')
    {
        if(str[i] < small)
            small = str[i];

        if(str[i] > large)
            large = str[i];
        i++;
    }
    printf("Smallest Character = %c\n", small);
    printf("Largest Character = %c\n", large);
    return 0;
}
