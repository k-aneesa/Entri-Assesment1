#include<stdio.h>
//#include<stdlib.h>
void Dec2Bin(int num);
void Bitset(int num, int pos);
void Bitclear(int num, int  pos);
void Bittoggle(int num, int pos);

int main()
{
    int num,pos;
    printf("Enter the decimal number:");
    scanf("%d",&num); 
    Dec2Bin(num);
    
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
//void bitset(int num)