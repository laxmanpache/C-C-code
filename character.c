#include<stdio.h>

int main(){

 char c,ch;
do{
    printf("Enter your char");
    scanf("%c",&c);

    printf("Do you want to continue\t");
    scanf("%c",&ch);
}while(ch!="y");
}
