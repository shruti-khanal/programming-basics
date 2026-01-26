#include<stdio.h>
int main()
{ int n;
int c=0;
    printf("enter a number \n");
    scanf("%d",&n);
    for (int i =1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
if(c==2||n==2)
printf("the number %d is a prime number. ",n);
else 
printf("the number %d is  not a prime number. ",n);
}
