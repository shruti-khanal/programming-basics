#include<stdio.h> 
    int prime (int);
    int prime(int num)
      { int flag =0;
        if (num==1||num==0)
        {
            flag=1;
        }
        else 
        for(int i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {flag =1;
            }
        }
    
       return flag;
    }
    int main()
    {
        int num , k;
        printf("enter number\n ");
        scanf("%d",&num);
        k=prime(num);
        if(k==1)
        {printf("not prime ");
        }
        else 
        printf("prime");
    }
