#include<stdio.h> 
int main()
{
    int n1,n2,c=0;
    printf("enter a range ");
    scanf("%d%d",&n1,&n2);
    for (int i=n1;i<=n2;i++)
    { c=0;
        for (int j=2;j<i;j++)
       { if (i%j==0)
        {c=1;
        break;
       }
    }
     if(c==0)
     printf("%d\n",i);
    }

 return 0;
}