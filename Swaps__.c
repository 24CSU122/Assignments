#include <stdio.h> 
 int main() 
 { 
    int a,b;
    printf("Enter the numbers: ");
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    //Using a third variable 
    int temp=0; 
 
    temp = a; 
    a = b; 
    b = temp; 
 
    printf("After swapping a = %d, b = %d\n",a,b); 
 
    //Without using a third variable
    int c,d;
    printf("Enter the numbers: ");
    scanf("%d\n", &c);
    scanf("%d\n", &d);
 
    c = c + d; 
    d = c - d; 
    c = c - d;
    
    printf("\nAfter swapping c = %d, d = %d\n",c,d); 
 
    //Using bitwise XOR operator 
    int e,f;
    printf("Enter the numbers: ");
    scanf("%d\n", &e);
    scanf("%d\n", &f);
 
    e = e ^ f; 
    f = e ^ f; 
    e = e ^ f; 
 
    printf("After swapping e = %d, f = %d\n",e,f); 
    
    //Using pointer 
    int g, h;
    int *ptr1, *ptr2;
    printf("Enter the numbers: ");
    scanf("%d\n", &g);
    scanf("%d\n", &h);
    ptr1 = &g;
    ptr2 = &h;
    
    int tem = *ptr1;  // Store the value at the address of g
    *ptr1 = *ptr2;    // Assign the value at the address of h to g
    *ptr2 = tem;     // Assign the stored value (tem) to h
     printf("After swapping: g = %d, h = %d\n", *ptr1, *ptr2);
    return 0; 
} 