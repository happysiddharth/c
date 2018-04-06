#include<stdio.h>
int main()
{
    int a,count=0,g,r=0,i=0;
    printf("Enter the number");
    scanf("%d",&a);
    g=a;
    while(a!=0)
    {
        a=a/10;
        ++count;
    }
    if(count%2!=0)
    {
        while(g!=0)
        {
            if(i==(count/2))
            {
                g=g/10;
                i++;
                continue;

            }else
            {
                r=(r*10)+(g%10);
                g=g/10;
                i++;
            }

        }
        g/=10;
    }

    printf("\n%d",r);

}
