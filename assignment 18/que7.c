//7. Write a function to check whether a given string is palindrome or not.
#include<stdio.h>
int palindrome(char[]);
int main()
{
    char s1[20];
    printf("Enter a string:");
    fgets(s1,20,stdin);
    if(palindrome(s1))
        printf("String is Palindrome");
    else
        printf("String is not palindrome");
    return 0;
}
int palindrome(char str[])
{
    int i,l;
    for(l=0;str[l]!='\n';l++);
    for(i=0;i<l/2;i++)
    {
        if(str[i]!=str[l-i-1])
            return 0;
    }
    return 1;
}
