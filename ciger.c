#include <stdio.h>
void main()
{
    int weekend;
    int ciger;
    printf("enter the value of weekend and ciger\n");
    scanf("%d %d",&weekend,&ciger);
    if (weekend==1)
{
    if (ciger>=40)
{
printf("true");
}
else
{
    printf("false");
}
}
else
{
    if (ciger>=40&& ciger<=60)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}
}  


