#include<bits\stdc++.h>
using namespace std;

int longestPeak(vector<int> array) {
  // Write your code here.
	int n=(int)array.size();
	int max=INT_MIN;int curr_peak_len=0;
	if(n<3){return 0;}
	for(int i=1;i<n;i++){
		curr_peak_len=0;
		int left=i,right=i;bool l_p=false,r_p=false;
		while(left>0 && array[left]>array[left-1]){
			--left;
			++curr_peak_len;
			l_p=true;
		}
		while((right<(n-1)) && array[right]>array[right+1]){
			++right;
			++curr_peak_len;
			r_p=true;
		}
		if(l_p && r_p){
		++curr_peak_len;}
		if((l_p && r_p) && max<curr_peak_len){max=curr_peak_len;curr_peak_len=0;}
	}
	
	if(max==INT_MIN) {max=0;}
  return max;
}
int main(){
	vector<int> input{1,2,3,4,5,1};
	cout<<"The Longest Length of Peak is : "<<longestPeak(input)<<endl;
	return 0;
}
