#include <stdio.h>

int main()
{
    int i,j,k,n,temp;
    printf("please enter the input \n");
    scanf("%d",&n);
    n=5;
    temp=n;
    for(k=1;k<=n;k++)
    {
        int dif=n-temp;
        if(dif==0)
        {
        for(i=1;i<=n;i++)
        {
        printf("%d",n);
        }
        
         temp=temp-1;
        }
        else
        {
            printf("%d",n);
            
           for(j=2;j<=n;j++)
           {
                           printf("%d",temp);
               
           }
           temp=temp-1;
          
        }
        printf("\n");
}

    return 0;
}
