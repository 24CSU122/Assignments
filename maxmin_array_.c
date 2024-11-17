#include <stdio.h>
int main()
{
    int i=0;
    int marks[10];int max;int min;
    printf("Enter the marks:");
    for(;i<10;i++)
    {
        scanf("%d", &marks[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("\nMarks of student %d is: %d", i+1,marks[i]);
        if(marks[i]>=max)
        {
            max=marks[i];
        }
        if(marks[i]<=min)
        {
            min=marks[i];
        }
    }
    printf("\n Maximum marks are: %d", max);
    printf("\n Minimum of all marks is: %d", min);
   
    return 0;
}