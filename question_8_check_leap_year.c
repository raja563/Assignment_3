//8. Write a program to check whether a given year is a leap year or not.
#include<stdio.h>
main()
{
    int year;
    printf("enter the year\n");
    scanf("%d",&year);
    if((year%4==0)&&(year!=0)||(year%400==0))
    printf("%d is a leap year\n",year);
    else
    printf("%d is not a leap year\n",year);
    getch();
    return 0;
}