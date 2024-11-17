#include <stdio.h>
int main()
{
int i=0;
int marks[10];

printf("\nEnter the numbers: \n");
for(i=0;i<=9;i++)
{
scanf("%d", &marks[i]);
}
for(i=0;i<=9;i++)
{
printf("\n index=%d , marks[%d]=%d ", i,i,marks[i]);
if(marks[i]>=75)
printf("A Grade");
else if(marks[i]<=74 && marks[i]>=60)
printf("B Grade");
else if(marks[i]<=59 && marks[i]>=40)
printf("C grade");
else
printf("D Grade");
}
return 0;
}