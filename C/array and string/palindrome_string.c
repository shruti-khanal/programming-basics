#include<stdio.h> 
int main()
{
    int n , flag=0;
    printf("enter the size of the string \n");
    scanf("%d",&n);
    char str[n+1];
    printf("enter the string \n");
   scanf("%s",&str);
    int j=n-1;
    for(int i =0;i<n;i++)
    {
        if (str[i]!=str[j])
        {flag=1;
            break;
        } 
        j--;
    }

if(flag ==0)
printf("palindrome \n");
if(flag==1)
printf("not palindrome ");
 return 0;
}