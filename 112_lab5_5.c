#include<stdio.h>
int main()
{
    int i,j,k,n;
    int num[10][10];
    scanf("%d" ,&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d" ,&num[i][j]);
        }
    }

    return 0;
}
