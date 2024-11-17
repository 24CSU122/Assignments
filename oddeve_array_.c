#include <stdio.h> 
int main() 
{ 
int marks[5]; int i=0;
printf("Enter the marks: ");
for(i=0;i<5;i++)
{
    scanf("%d", &marks[i]);
}
int n = 5; 
for (int i = 0; i < n; i++) 
{ 
   if (marks[i] % 2 == 0) 
    { 
      printf("%d is even\n", marks[i]); 
    } else 
    { 
      printf("%d is odd\n", marks[i]); 
    } 
 } 
return 0; 
} 