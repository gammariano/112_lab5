#include<stdio.h>
int main()
{
    int i,j,k,l,n,m;
    scanf("%d" ,&n);
    m=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m-1;j++)
        {
            printf("_");
        }
        for(k=0;k<=2*i-2;k++)
        {
            printf("*");
        }
        for(l=1;l<m;l++)
        {
            printf("_");
        }
        m--;
        printf("\n");
    }
    return 0;
}
