#include<stdio.h> 
int fact (int*);
int fact(int *n)
{
    int fact=1;
    for(int i =1;i<=*n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{int n;
    printf("enter a number ");
    scanf("%d",&n);
    int k=fact(&n);
    printf("the factorial of %d is %d . ",n,k);


 return 0;
}