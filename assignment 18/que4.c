//4. Write a function to transform string into uppercase.
#include<stdio.h>
void upper(char[]);
int main()
{
    char str[20];
    printf("Enter a string:");
    fgets(str,20,stdin);
    printf("Transform string into Upper case:");
    upper(str);
    return 0;
}
void upper(char s[])
{
    int i;
    for(i=0;s[i];i++)
    {
        if(s[i]>='a'&&s[i]<'z')
            s[i]=s[i]-32;
    }
    printf("%s",s);
}