#include<stdio.h> 
int main()
{
    int num,sum=0;
    int r=0;
    printf("enter num\n");
    scanf("%d",&num);
    while (num!=0)
    { r=num%10;
    sum=sum+r;
     num/=10;
    }
printf("the sum of digit is %d\n",sum);
 return 0;
}