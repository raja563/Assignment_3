//3. WAP to check whether a given number is an even number or an odd number.
#include<stdio.h>
main()
{
    int num;
    printf("enter a number\n");
    scanf("%d",&num);
    if(num%2==0)
    printf("%d  is even\n",num);
    else
    printf("%d is odd\n",num);
    getch();
    return 0;

}