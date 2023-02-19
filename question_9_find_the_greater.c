//9. Write a program to find the greatest among three given numbers. Print number once
//if the greatest number appears two or three times.
#include<stdio.h>
main()
{
    int a,b,c;
    printf("enter three number\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    printf("%d is greater than other\n",a);
    else if(b>a&&b>c)
    printf("%d is greater than other\n",b);
    else
    printf("%d is greater than other\n",c);
}