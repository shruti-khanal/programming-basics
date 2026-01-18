#include<stdio.h> 
void swap(int*num1,int*num2)
{
    int temp=*num1;
    *num1=*num2;
    *num2=temp;
    printf("the values after swapping are :\n a = %d. \n b = %d\n .",*num1,*num2);
}
int main()
{int a,b;
    printf("enter a and b ");
    scanf("%d%d",&a,&b);
    printf("original values of a and b are : \na= %d\nb=%d \n",a,b);
    swap(&a,&b);
    
 return 0;
}