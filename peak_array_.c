#include <stdio.h>
int main()
{
    int i=0;
    int marks[10];
    printf("Enter the marks:");
    for(;i<10;i++)
    {
        scanf("%d", &marks[i]);
         
    }
    for(i=0;i<10;i++)
    {
         printf("\nMarks of student %d is: %d", i+1,marks[i]);
          }
          for(i=0;i<10;i++)
          {
              if(marks[i]>marks[i+1] && marks[i]>marks[i-1])
        {
            printf("\n %d is the peak element.", marks[i]);
        }
    }
    return 0;
}