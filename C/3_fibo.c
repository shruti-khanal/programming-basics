#include<stdio.h> 
int main()
{
    int t1=0,t2=1,c=0,n=0;
    printf("enter the upper range ");
    scanf("%d",&n);
    printf("THE FIBONACCI SERIES IS AS FOLLOWS : \n");
    printf("%d , %d ,",t1,t2);
    for (int i=2;i<=n;i++)
    { c=t1+t2;
      t1=t2;
      t2=c;
      printf("%d,",c);  
        
    } 

 return 0;
}