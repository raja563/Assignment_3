/*18. Write a program which takes the month number as an input and display number of
days in that month.
logic:
1.jan =31,2.feb=28/29,3.mar=31,4.april=30,5.may=31,6.june=30,7.july=31,8.aug=30,9.sep=31,10.oct=31
,11.nov=30,12.dec=31
*/

#include<stdio.h>
main()
{
    int n;
    printf("enter month number\n");
    scanf("%d",&n);
    if(n==1||n==3||n==5||n==7||n==9||n==10||n==12)
    printf("it's have 31 days only ");
    else if(n==2)
    printf("it's have only 28/29 days only");
    else 
    printf("it's have only 30 days only");
    getch();
    return 0;

}