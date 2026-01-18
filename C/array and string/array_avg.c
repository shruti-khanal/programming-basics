#include<stdio.h> 
int main()
{
    int arr[5];
    float average=0.0;
    printf("enter marks of 5 subject");
    for(int i = 0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        average=average + arr[i];
    }
    printf("marks of 5 subject = \n");
        for(int i = 0;i<5;i++)
        {
            printf("%d\n",arr[i]);
        }
        printf("average = %f\n ",average/5);


 return 0;
}