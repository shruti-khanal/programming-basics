    #include<stdio.h> 
    #include <string.h>
    int main()
    {
      char ch ;
      printf("enter a character \n");
      scanf("%c",&ch); 
      char word[50];
      printf("enter a word \n");
      scanf("%s",word);
      printf("enter a sentence\n");
      char sen[50];
      getchar();
      fgets(sen,sizeof(sen),stdin);
      printf("%c\n",ch);  
      puts(word);
      puts(sen);

    
     return 0;
    }