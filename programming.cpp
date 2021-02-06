#include <stdio.h>

int main()
{
    int i,j,k,n,temp;
    printf("please enter the input \n");
    scanf("%d",&n);
    n=5;
    temp=n;
    for(i=0;i<=n;i++)
    {
        
        for(j=1;j<=n-i;j++)
        {
         printf("%d",n);
        }
        printf("\n");
        for(k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        
    }

    return 0;
}
