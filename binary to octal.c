#include<stdio.h>
void main()
{

    int n, sum = 0, pow = 1;
    scanf("%d",&n);
    while(n!=0)
    {
        sum += (n % 10) * (pow);
        pow = pow * 2;
        n = n / 10;
    }
    int oct = sum, rem = 0;
    while(oct!=0)
    {
        rem = (rem * 10) + (oct % 8);
        oct = oct / 8;
    }
   // printf("%d\n",rem);
    int rev = 0;
    while(rem != 0)
    {
        rev = (rev * 10) + (rem % 10);
        rem = rem / 10;
    }

    printf("%d",rev);

}
