//1. Write a function to calculate length of the string.
#include<stdio.h>
int length(char s[],int);
int main()
{
    char str[20];
    int l;
    l=length(str,20);
    printf("Length is %d\n",l);
    return 0;
}
int length(char s[],int n)
{
    int i;
    printf("Enter a string:");
    fgets(s,n,stdin);
    for(i=0;s[i]!='\n';i++);
    return i;
}