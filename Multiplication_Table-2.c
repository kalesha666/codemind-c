#include<stdio.h>
int main()
{
    int i,a,b,k;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        k=a*i;
        printf("%d x %d = %d
",a,i,k);
    }
}