#include<stdio.h> 
#include<string.h>
int main()
{
    int n;
    printf("enter size of string \n");
    scanf("%d",&n);
    char str[n+1];
    printf("enter string ");
    for(int i = 0;i<n;i++)
    {scanf("%c",&str[i]);
    }
    printf("the string is : ");
    printf(str);
    int i=0;
    int j = n-1;
    while (i<j)
    {
        char ch = str[i];
        str[i]=str[j];
        str[j]=ch;
    }
    printf("the reversed string is \n");
    printf(str);
    
 return 0;
}