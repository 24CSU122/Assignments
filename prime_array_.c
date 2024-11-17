#include <stdio.h> 
int main() { 
int arr[5]; int i=0;
printf("Enter the array: ");
for (i=0;i<5;i++)
{
    scanf("%d",&arr[i]);
}
int size = 5; 
int count = 0; 
for (int i = 0; i < size; i++) { 
int n = arr[i], isPrime = 1; 
if (n <= 1) isPrime = 0; 
for (int j = 2; j < n; j++) { 
if (n % j == 0) { 
isPrime = 0; 
break; 
} 
} 
if (isPrime) count++; 
} 
printf("The no of prime is:%d\n", count); 
return 0;
}