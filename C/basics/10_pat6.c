#include<stdio.h> 
int main(){
printf("SHRUTI KHANAL\n");
for(int i = 1;i<=5;i++)
    {
        for(int j =5;j>=1;j--)
        {
            if(j==i||j<=i)
            printf("%C",'*');
            else
            printf(" ");
        }
        printf("\n");
    }
    
 return 0;
}