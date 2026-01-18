#include<stdio.h> 
#include<string.h>
int main()
{
    char str[100];
    char ch=' ';
    printf("enter a string \n");
    scanf("%[^\n]",str);

    int l = strlen(str);
    int j=l-1;
    for(int i=0;i<l/2;i++)
    { ch=str[i];
     str[i]=str[j];
     str[j]=ch;
     j--;
     }
printf("the new string after reversing is %s",str);

  
 return 0;
}