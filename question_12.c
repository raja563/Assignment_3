//12. Write a program to check whether a given alphabet is in uppercase or lowercase.

 
 #include<stdio.h>
int main()
{
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
    {
        printf("%c is an uppercase alphabet.",ch);
    }
    else if(ch>=77&&ch<=122)
    {
        printf("%c is a lowercase alphabet.",ch);
    }
}