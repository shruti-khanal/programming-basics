// S = 1+2+3+.....+n
#include<stdio.h> 
int main()
{ int n,S=0;
printf("enter n ");
    scanf("%d",&n);
    for(int i =1;i<=n;i++)
    {
      S = S+i; 
    }
    printf("%d",S);
 return 0;
}