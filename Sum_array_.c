#include <stdio.h>
int main()
{
    int i=0;
    int marks[10];int sum=0;
    printf("Enter the marks:");
    for(;i<10;i++)
    {
        scanf("%d", &marks[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("\nMarks of student %d is: %d", i+1,marks[i]);
        sum=sum+marks[i];
    }
    printf("\nSum of all marks is: %d", sum);
   
    return 0;
}