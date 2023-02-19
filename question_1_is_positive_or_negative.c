//1. WAP to check whether a given number is positive or non positive.
#include<stdio.h>
main()
{
    int number;
    printf("enter a number\n");
    scanf("%d",&number);
    if(number<0)
    printf("%d is negative\n",number);
    else if(number>0)
    printf("%d is positive\n",number);
    else
    printf("%d is non positive or non negative\n",number);
    getch();
    return 0;
}