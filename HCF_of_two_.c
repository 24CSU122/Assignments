#include <stdio.h>
int hcf(int,int);
int main()
{
    int num1,num2,result;
    printf("Enter the nummbers: ");
    scanf("%d%d", &num1,&num2);
    result=hcf(num1,num2);
    printf("The hcf is: %d",result);
    return 0;
}
int hcf(int a,int b)
{
    int greater,factor,i;
    if(a>b)
    greater=a;
    else
    greater=b;
    //applying for loop to check till the greater number and checking the highest common factor
    for(i=1;i<=greater;i++) 
    {
        if(a%i==0 && b%i==0)
        {
         factor=i;
        }
    }
    return factor;
}