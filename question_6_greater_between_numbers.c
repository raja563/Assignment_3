//. 6. Write a program to print greater between two numbers. Print one number if both are the same.
#include<stdio.h>
main()
{
    int a,b;
    printf("enter first number\n");
    scanf("%d",&a);
    printf("enter secound number\n");
    scanf("%d",&b);
    if(a>b)
    printf("%d is greater than %d\n",a,b);
    else if(a==b)
    printf("%d and %d both  are the same\n",a,b);
    else
    printf("%d is greater than %d",b,a);
    getch();
    return 0;
}