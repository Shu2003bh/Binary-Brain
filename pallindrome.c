#include<stdio.h>
int main()
{
    int x,num,sum=0,temp;
    printf("enter an no.");
    scanf("%d",&x);
    temp=x;

    while(x!=0)
    {
        num = x%10;
        sum = sum*10+temp;
        x = x/10;
    }
    if (temp == num)
    printf("TRUE");
    else
    printf("FALSE");


    return 0;

}