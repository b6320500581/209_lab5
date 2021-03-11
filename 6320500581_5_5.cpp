#include<stdio.h>
int main()
{
     int i,j,a,b,n,m,max,sum;
    scanf ("%d",&n);
    scanf ("%d",&m);
    int num[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    for(i=0;i<n-m+1;i++)
    {
        for(j=0;j<n-m+1;j++)
        {

            sum=0;
            for (a=i;a<m+i;a++)
            {
                for (b=j;b<m+j;b++)
                {
                    sum+=num[a][b];
                }

            }
            if (i==0&&j==0)
            {
                max=sum;
            }
            if (sum>max)
            {
                max=sum;
            }
        }

    }
    printf ("%d",max);
    return 0;

}
