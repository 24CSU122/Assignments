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
if(marks[i]==99)
{
printf("\nStudent %d scored 99 marks", i);
break;
}
}
return 0;
}