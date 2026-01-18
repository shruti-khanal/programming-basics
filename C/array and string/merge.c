#include<stdio.h> 
#include<string.h>
int main()
{char str1[100];
    char str2[100];
    int flag =0;
    printf("enter string 1\n");
    scanf("%[^\n]",str1);
     printf("enter string 2\n");
     scanf(" %[^\n]",str2);
     
    int l1=strlen(str1);
    int l2=strlen(str2);
    for(int i=0;str1[i]!='\0';i++)
    {
        if(str1[i]!=str2[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("equal \n");

    }
    else
    printf("not equal ");
 return 0;
}