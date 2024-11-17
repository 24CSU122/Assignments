#include <stdio.h> 
int main() 
{ 
    int pt1,pt2;  
    printf("Enter the co-ordinate points : ");
    scanf("%d",&pt1);
    scanf("%d",&pt2);
    if(pt1>0 && pt2>0)
    {
    printf("The co-ordinate point (%d,%d) lies in the first quadrant.",pt1,pt2);
    }
    else if(pt1<0 && pt2>0)
    {
    printf("The co-ordinate point (%d,%d) lies in the second quadrant.",pt1,pt2);
    }
    else if(pt1<0 && pt2<0)
    {
    printf("The co-ordinate point (%d,%d) lies in the third quadrant.",pt1,pt2);
    }
    else if(pt1<0 && pt2>0)
    {
    printf("The co-ordinate point (%d,%d) lies in the fourth quadrant.",pt1,pt2);
    }
    else
    printf("The co-ordinate point is origin.");
return 0; 
}