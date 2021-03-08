#include<stdio.h>
int main()
{
    int i,j,k,l,n,m=0;
    scanf("%d" ,&n);
    if(n%2==0)
    {
        n--;
        m++;
        k=((n+m)/2)-1;
    }
    else
    {
        k=((n+m)/2);
    }
    for(i=0;i<(n+m)/2;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==(n/2)-i||j==(n/2)+i)
            {
                printf("*");
            }
            else
            {
                printf("_");
            }
        }
        for(k=0;k<=2*i-2;k++)
        {
            printf("*");
        }
        for(l=1;l<m;l++)
        {

        }
        m--;
        printf("\n");
    }
    return 0;
}
