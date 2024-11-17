#include <stdio.h> 
int main() 
{ 
int marks[5]; int i=0;
printf("Enter the marks: ");
for(i=0;i<5;i++)
{
    scanf("%d", &marks[i]);
}
int n = 5, sum = 0; 
for (int i = 0; i < n; i++) 
{ 
sum += marks[i]; 
} 
float average = sum / (float)n; 
printf("Average score: %.2f", average); 
return 0; 
}