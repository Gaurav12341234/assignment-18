//3. Write a function to compare two strings.
#include<stdio.h>
int compare(char [],char []);
int main()
{
    char str1[20];
    char str2[20];
    int c;
    printf("Enter first string:");
    fgets(str1,20,stdin);
    printf("Enter second string:");
    fgets(str2,20,stdin);
    printf("Compare this two strings:\n");
    printf("strings are in :");
    c=compare(str1,str2);
    if(c>0)
        printf("Opposite of Dictionary Order");
    else if(c<0)
        printf("Dictionary order");
    else
        printf("Equal strings");
    return 0;
}
int compare(char s1[],char s2[])
{
    int r=0,i;
    for(i=0;s1[i];i++)
    {
        if(s1[i]!=s2[i])
        {
            r=s1[i]-s2[i];
            break;
        }
    }
    return r;
}