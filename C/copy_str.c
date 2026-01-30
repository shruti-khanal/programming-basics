#include<stdio.h> 
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    int i;
    printf("enter string 1 \n");
    scanf("%[^\n]",str1);
    printf("enter string 2 \n");
    scanf(" %[^\n]",str2);
    int l1=strlen(str1);
    int l2=strlen(str2);
    //strcpy(str2,str1);
    //printf("%s\n%s",str2,str1);
    //printf("%d",l);
    //strcpy(str1,str2);
    //printf("%s",str1);
    int j=0; 
    for(i=l1;j<l2;i++)
    {
        str1[i]=str2[j];
        j++;
    }
    str1[i]='\0';
    printf("%s",str1);




 return 0;
}