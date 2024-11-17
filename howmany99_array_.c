#include <stdio.h>
int main()
{
int i=0;
int marks[10];int count=0;
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
count++;
}
else
continue;
}
printf("\n%d students scored 99 marks", count);
return 0;
}