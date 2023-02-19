//15. Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
main()
{
    int num;
    printf("enter a number:\n");
    scanf("%d",&num);
    if(num>0)
    printf("%d is positive number",num);
    else if(num==0)
    printf("%d is zero",num);
    else
    printf("%d is negative ",num);
    getch();
    return 0;
}