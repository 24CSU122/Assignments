#include <stdio.h>
#include <math.h>
int armstrong(int);
int main()
{
    int num1,result;
    printf("Enter the number: ");
    scanf("%d", &num1);
    result=armstrong(num1);
    if(result==num1)
    {
        printf("It is an armstrong number");
    }
    else
    {
        printf("It is not an armstrong number ");
    }
    return 0;
}
// function armstrong created to return the sum of the digits each having power equal to the no. of digits in the number. 
int armstrong(int a) 
{
    int rem,value=0,value1=0,rev,count;
    while(a!=0)
    {
        rem=a%10;
        value=(value*10)+rem;
        a=a/10;
        count++; //variable count to check the no. of digits 
    }
    while(value!=0)
    {
        rev=value%10;
        value1+=pow(rev,count);
        value=value/10;
    }
    return value1;
}