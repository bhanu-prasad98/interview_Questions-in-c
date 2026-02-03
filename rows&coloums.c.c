#include <stdio.h>
void main()
{
    int row;
    int col;
    printf("enter  number of rows \n");
    scanf("%d",&row);
    printf("enter number of coloums;\n");
    scanf("%d",&col);
    for(int i=1; i<=row;i++)
{
    for (int j=1;j<=col;j++)
    {
    printf("*");
}
printf("\n");
}
}
