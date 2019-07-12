#include<stdio.h>
int main(){
int rows, columns;
printf("Enter number of rows:\n");
scanf("%d",&rows);
printf("\nEnter the number of columns:");
scanf("%d",&columns);
int a[rows][columns];
int i,j,sum=0;
for(i = 0;i < rows; i++)
{
    for(j = 0; j< columns; j++)
    {
        scanf("%d",&a[i][j]);
        if((i == 0)||(i == rows - 1))
        {
            sum += a[i][j];
            //printf(" elt = %d \n",a[i][j]);
        }
        if (((i > 0)&&(i < rows - 1)) && j == columns - i - 1)
        {
            sum += a[i][j];
            //printf(" elt = %d \n",a[i][j]);
        }
    }
}

printf("The sum is: %d",sum);
return 0;
}
