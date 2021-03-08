#include<stdio.h>
int main()
{
    int i,j,k=0,l,m,n;
    int num[10][10];
    scanf("%d" ,&n);
    scanf("%d" ,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d" ,&num[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            num[i][j]+=k;
            k=num[i][j];
        }
    }
    printf("%d " ,k);
    return 0;
}
