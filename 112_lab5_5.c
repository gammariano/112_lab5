#include<stdio.h>
int main()
{
    int i,j,k,m,n;
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

    return 0;
}
