#include<stdio.h>
main()
{
    int num;
    printf("enter a number:\n");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("%d is even\n",num);
        if(num%3==0)
        {
            printf("%d and also divisible by 2 and 3",num);
        }
        else
            printf("%d is not divisible by 2 and 3",num);
    }
    else
        printf("%d  is odd and also not divisible by 2 and 3",num);
    getch();
    return 0;
}
