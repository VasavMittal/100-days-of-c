#include <conio.h>
#include <stdio.h>
int maxProfit(int* prices, int pricessize){
     int i,sum,profit = 0;
    int Buy = 0; 
    for(i=0;i<pricessize;i++)
	{
        if(prices[Buy] > prices[i]) 
		{
			Buy = i;
		}
		sum=prices[i] - prices[Buy];
		if(profit < sum)
		{
			profit = sum;
		}
        
    }
        return profit;
}
void main()
{
	int prices[] = {7,6,4,3,1};
	int profit;
	profit= maxProfit(prices,6);
	printf("Max profit is :- %d",profit);
}
