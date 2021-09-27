#include<bits/stdc++.h>
using namespace std;
int BuyandSellStockOnce(vector<int> prices){
	int c_min=INT_MAX,max_profit=0,c_profit=0;
	for(auto price:prices){
		c_min=min(c_min,price);
		c_profit=price-c_min;
		max_profit=max(max_profit,c_profit);
		
	}
	return max_profit;
}
int main()
{
	vector<int> input{310,315,275,295,260,270,290,230,255,250};
	cout<<"The Best Profit We can Make is : "<<BuyandSellStockOnce(input)<<endl;
	return 0;
}

