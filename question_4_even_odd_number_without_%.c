//4. WAP to check whether a given is an an even or an odd number without using % operator.
#include<stdio.h>
#include<conio.h>
main()
{
    int num;
    printf("enter a number\n");
    scanf("%d",&num);
    if(num&1==1)
    printf("%d is odd\n",num);
    else
    printf("%d is even\n",num);
    getch();
    return 0;
    
}