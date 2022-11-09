//2. Write a function to reverse a string.
#include<stdio.h>
void reverse(char[]);
int main()
{
    char str[20];
    printf("Enter a string:");
    fgets(str,20,stdin);
    printf("Reverse a string:");
    reverse(str);
    return 0;
}
void reverse(char s[])
{
    int l,i;
    char temp;
    for(l=0;s[l];l++);
    for(i=0;i<l/2;i++)
    {
        temp=s[i];
        s[i]=s[l-i-1];
        s[l-i-1]=temp;
    }
    printf("%s",s);
}