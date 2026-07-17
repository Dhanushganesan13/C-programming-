#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=16;i++)
    {
        printf("%dx%d=%d\n",i,n,n*i);
    }
    return 0;
}
