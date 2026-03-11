

#include<stdio.h>

void Dec2Bin(int num);
void Bitset(int num, int pos);
void Bitclear(int num, int  pos);
void Bittoggle(int num, int pos);

int main()
{
    int num,pos;
    printf("Enter the decimal number:");
    scanf("%d",&num); 
    printf("Enter the bit position to set");
    scanf("%d",&pos);
    printf("Binary value of the no is=");
    Dec2Bin(num);
    printf("\n");
    printf("Value of the number after setting the Bit");
    Bitset(num,pos);
    printf("\n");
    printf("Enter the bit position to clear\n");
    scanf("%d",&pos);
    printf("Value of the number after clearing the Bit");
    Bitclear(num,pos);
    printf("\n");
    printf("enter the bit position to toggle");
    scanf("%d",&pos);
    printf("Value of the number after toggling the Bit");
    Bittoggle(num,pos);
    
    
}
void  Dec2Bin(int num)
{
    if(num==0)
    {
        printf("Binary : 0\n");
        return;

    }
    else
    {
       for(int i=7; i>=0;i--)
       {
        if(num & (1<<i))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
       }
    }
}

void Bitset(int num, int pos)
{
    num=num | (1<<pos) ;
    Dec2Bin(num);
}
void Bitclear(int num, int  pos)
{
    num = num & ~ (1<<pos);
    Dec2Bin(num);
}

void Bittoggle(int num, int pos)
{
    num = num ^(1<<pos);
    Dec2Bin(num);
}