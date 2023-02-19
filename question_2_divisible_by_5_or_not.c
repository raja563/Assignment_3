//2. WAP to check whether a given number is divisible by 5 or not .
#include<stdio.h>
main()
{
    int number;
    printf("enter a numbere\n");
    scanf("%d",&number);
    if(number%5==0)
    printf("%d is divisible by 5\n ",number);
    else
    printf("%d is not  divisible by 5\n",number);
    getch();
    return 0;
}