#include<stdio.h>
int main()
{

    int n;
    char ch[12];
    printf("Enter the number \n");
    scanf("%d",&n);
    while(n!=0)
    {
        printf("%c",n%10+65);
        n=n/10;

    }
}
