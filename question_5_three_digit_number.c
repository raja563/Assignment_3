//5. WAP to check whether a given number is a three digit number or not.
#include<stdio.h>
main()
{
    int num;
    printf("enter a number\n");
    scanf("%d",&num);
    if(num>99&&num<1000)
    printf("%d is the three digit number\n",num);
    else
    printf("%d is the greater than three number\n",num);
    getch();
    return 0;
}