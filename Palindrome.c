#include<stdio.h>
int main()
{
    int i,r,n,rev=0;
    scanf("%d",&n);
    i=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==i)
    printf("True");
    else
    printf("False");
}