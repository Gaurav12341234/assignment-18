//9. Write a function to reverse a string word wise. (For example if the given string is 
//   “Mysirg Education Services” then the resulting string should be “Services Education Mysirg” )
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    char temp[50];
    char flag;
    int count=0,i,j,l,k;
    printf("Enter a string:");
    fgets(str,50,stdin);
    for(i=0;str[i];i++)
    {
        temp[i]=str[i];
    }
    str[i-1]=' ';
    l=i;
    for(i=0;str[i];i++)
    {
        if(str[i]!=' ')
            count++;
        if(str[i]==' ')
        {
            k=0;
            for(j=i-count;j<=i-1;j++)
            {
                temp[j]=str[i-k-1];
                k++;
            }
            count=0;
        }
    }
    for(i=0;i<l/2;i++)
    {
        flag=temp[i];
        temp[i]=temp[l-i-1];
        temp[l-i-1]=flag;
    }
    printf("Reverse of a string word wise is: %s",temp);
    return 0;
}