#include<stdio.h>
int LCM(int num1, int num2)
{

    int great, small;
    if(num1 > num2)
    {
        great = num1;
        small = num2;
    }
    else
    {
        great = num2;
        small = num1;
    }
    //Euclids algorithm
    int temp;
    while(small!=0)
    {
        temp = small;
        small = great % small;
        great = temp;
    }
    //Formula for lcm using gcd and two numbers
    return (num1 * num2)/great;
}
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int a[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int lcm = a[0];
    for (i = 0; i < n; i++)
    {
        lcm = LCM(lcm, a[i]);
    }
    printf("The lcm is %d",lcm);

}
