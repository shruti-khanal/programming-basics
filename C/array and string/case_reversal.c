#include<stdio.h> 
#include<string.h>
int main()
{ char str[100];
   printf("enter string \n");
   fgets(str,sizeof(str),stdin);
   printf("\n%s",str);
   int l = strlen(str);
   for(int i=0;i<l;i++)
   {if(str[i]>='a'&&str[i]<='z')
    {
      str[i]=str[i]-32;
    }
   else if(str[i]>='A'&&str[i]<='Z')
   {
    str[i]=str[i]+32;
   }
   }
   printf("The string after case reversal is \n");
   puts(str);
    
 return 0;
}