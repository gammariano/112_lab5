#include<stdio.h>
int main()
{
    int i,j,k,n,m;
    scanf("%d" ,&n);
    m=n;
    for(i=1;i<n;i++)
    {
        for(j=1;j<m-1;j++)
        {
            printf("_");
        }
        for(k=0;k<=2*i-1;k++)
        {
            printf("*");
        }
        m--;
        printf("\n");
    }
    return 0;
}
