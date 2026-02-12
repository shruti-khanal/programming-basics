#include<stdio.h> 
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int *)calloc(10,sizeof(int));
    printf("enter values \n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("the values are : \n ");
    for(int i=0;i<10;i++)
    {
        printf("%d\n",ptr[i]);
    }
 free(ptr);
 return 0;
}