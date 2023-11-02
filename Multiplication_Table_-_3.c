#include<stdio.h>
int main()
{
    int i,n,a,b,k;
    scanf("%d%d%d",&n,&a,&b);
    for(i=a;i<=b;i++)
    {
      k=n*i;
      printf("%d x %d = %d
",n,i,k);
    }
}