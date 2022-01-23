#include<bits/stdc++.h>
using namespace std;


void mergeSort(vector<int>& v)
{

   if(v.size()>1){
      int s=0,e=v.size()-1;
      int mid=s + (e-s)/2;
      vector<int> a(v.begin(),v.begin()+mid+1); //its crucial to pass 0,mid and mid=1, end
      //else it will not work. as we don't pass anything in a if size=2. 
      //as end=begin and therefore stl ingnores slicing.
      vector<int> b(v.begin()+mid+1,v.end());
      
      mergeSort(a);
      mergeSort(b);

      int i=0,j=0,k=0;

   

      while(i<a.size() && j<b.size()){
         if(a[i]<=b[j]){
            v[k++]=a[i++];
         }
         else{
            v[k++]=b[j++];
         }
      }

      while(i<a.size()){
         v[k++]=a[i++];
      }

      while(j<b.size()){
         v[k++]=b[j++];
      }

   }

}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
  
  
   freopen("input.txt", "r", stdin);
   //freopen("error.txt", "w", stderr);
   freopen("output.txt", "w", stdout);
 
  
   int n;cin>>n;
   vector<int> v(n);
   
   for(int i=0;i<n;i++)cin>>v[i];

   cout<<"start ";

   mergeSort(v);
   cout<<"\n";
   for(auto x:v)cout<<x<<" ";
   
   cout<<" end";
   return 0;
}
