#include<bits/stdc++.h>
using namespace std;

#define ll long long int


int binarySearch(vector<int>& nums, int start, int end, const int target){

	if(start>end)return -1;

	int mid=start+(end-start)/2;

	if(nums[mid]==target)return mid;
	else if(nums[mid]<target){
		return binarySearch(nums,mid+1,end,target);
	}
	else{
		return binarySearch(nums,start,mid-1,target);
	}
	return -1;

}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
  
  
   freopen("input.txt", "r", stdin);
   //freopen("error.txt", "w", stderr);
   freopen("output.txt", "w", stdout);
 
  int t;cin>>t;
  vector<int> v(t);
  for(int i=0;i<t;i++)cin>>v[i];
 int target;cin>>target;
	int pos=binarySearch(v,0,t,target);
  	if(pos!=-1){
  			cout<<"Found: "<<pos;
  	}
  	else cout<<"Not Found: ";

  return 0;
}
  