#include<stdio.h>
void swap(char str[],int start,int end);
int main()
{
    char str[20]="My name is Gaurav";
    int start=0,end=0,i=0,flag=0;
    while(str[i]!='\0')
    {
        while(str[i]!=' ')
        {
            if(str[i]=='\0')
            {
                flag=1;
                break;
            }
            end++;
            i++;
        }
        swap(str,start,end-1);
        if(flag==1)
            break;
        start=end++;
        i++;
    }
    swap(str,0,i-1);
    printf("%s",str);
    return 0;
}
void swap(char str[],int start,int end)
{
    char temp;
    while(start<=end)
    {
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}