#include<bits/stdc++.h>
using namespace std;
bool can_reach_end(const vector<int>& max_advance_steps ){
	int further_reach_so_far=0;//tracks the maximum steps we can able to reach
	int last_index=(int)max_advance_steps.size();
	for(int i=0;i<=further_reach_so_far && further_reach_so_far<last_index ; i++){
		further_reach_so_far=max(further_reach_so_far,(max_advance_steps[i]+i));
		//max_advance_steps[i]+i | This gives the maximum steps we can go from one point
	}
	return further_reach_so_far >= (last_index-1); // to check if we are able to reach end 
}
//Time Complexity O(n) 
//Space Complexity O(1)
int main()
{
	vector<int> input{3,3,1,0,2,0,1};
	vector<int> input2{3,2,0,0,2,0,1};
	bool result=can_reach_end(input2);
	if(result){
		cout<<"Yeah We Reached The End"<<endl;
	}else{
	cout<<"We Were Not Able To Make Out\n";}
	
	return 0;
}

