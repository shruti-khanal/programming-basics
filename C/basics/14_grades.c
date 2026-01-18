#include<stdio.h> 
int main()
{
    int marks=0;
    printf("enter marks ");
    scanf("%d",&marks);
    if (marks >=90&&marks <=100)
     printf("MARKS = %d \n GRADE = A ",marks);
     else if (marks >=80&&marks <90)
     printf("MARKS = %d \n GRADE = B ",marks);
    else  if (marks >=70&&marks<80)
     printf("MARKS = %d \n GRADE = C",marks);
    else if (marks >= 60&& marks <70)
     printf("MARKS = %d \n GRADE = D",marks);
     else 
     printf("MARKS = %d \n GRADE = E",marks);
 return 0;
}