#include<stdio.h>
int UglyNumber(int n)
{

}
int main()
{
    int n,i,j,k,m,c;
    scanf("%d" ,&n);
    int num[10000]={0};
    num[0]=1;
    m=1;
    for(i=2;i<n*n*2;i++)
    {
        c=UglyNumber(i);
        if(c==0)
        {
            num[m]=i;
            m++;
        }
        else if(c==1)
        {

        }
    }
    printf("%d" ,num[n-1]);
    return 0;
}
