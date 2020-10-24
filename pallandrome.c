#include<stdio.h>
#include<string.h>
int main()
{

    char s[20];
    printf("Enter string ");
    scanf("%s",s);
    printf("%s\n",s);
    int len=strlen(s);
    printf("%d\n",len);
    int flag=0;

    for(int i=0;i<len;i++)
    {
        if(s[i]!=s[len-i-1]){
            flag=1;
            break;
     }


    }
    if(flag==1)
        printf("\nGiven string is not palindrome");
     else
        printf("\nabove string is palindrome");

    return 1;
}
