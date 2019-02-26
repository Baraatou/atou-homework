#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main (void)
{
    long long number;
    int count=0;
    do
    {
        number=get long_long("please your card number");
    }
    while(number<0);
    long long codit=number;
    while(codit>0)
    {
        codit=codit/10;
        count++;
    }
    if(count!=13 &&count!=15 &&count!=16)
    {
        printf("this is an invalid card number");
    }
 codit=number;
 int sum=0;
 for(int i=1, i<count, i++)
 {
     int codig=codit%10;
     if(i%2==0)
     {
       codig=codig*2;
     }
     if(i%2!=0)
     {
         codig=codig*1;
     }
     if(codig>9)
     {
         codig=codig-9;
     }
    ssum=sum+codig
    codit=codit/10;
 }
 if(sum%10!=0)
 {
     printf("invalid card");
 }
 else
 {
     printf("this card is valid")
 }
 codit=number;
 while(codit>100)
 {
     codit=codit/10;
 }
 int a=codit;
 if((a==34 \\ a==37)&&(count==15))
 {
     printf("from amex");
 }
 else if((a>50 &&a<56 && count==16))
 {
     printf("mastercard");
 }
 else if((a/10==4)&&(count==13 \\ count==16 ))
 {
     printf("from visa");
 }
 else
 {
     printf("card number from another bank");
 }
}
