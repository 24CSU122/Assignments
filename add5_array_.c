#include <stdio.h> 
int main() 
{ 
int marks[5];int i=0;
 printf("\nEnter the numbers: \n");
 for(i=0;i<5;i++)
 {
    scanf("%d", &marks[i]);
 } 
int n = 5; 
  for (int i = 0; i < n; i++) 
{ 
    marks[i] += 5; 
} 
for (int i = 0; i < n; i++) 
{ 
    printf("%d ", marks[i]); 
} 
return 0; 
}