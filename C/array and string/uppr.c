#include<stdio.h> 
#include<string.h>
int main()
{
    char str[100];
    gets(str);
    int l = strlen(str);
    for(int i = 0;i<l;i++)
    {str[i]=str[i]-32;
    }
    printf("%s",str);
 return 0;
}