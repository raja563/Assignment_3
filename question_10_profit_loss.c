/*10. Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage.*/
#include<stdio.h>
main()
{
    int sell,cost,profit;
    float percent;
    printf("enter your selling\n");
    scanf("%d",&sell);
    printf("enter your cost\n");
    scanf("%d",&cost);
    profit=sell-cost;
    percent=(cost*100)/sell;
    printf("profit=%dand percent profit =%.3f \n",profit,percent);
    

}