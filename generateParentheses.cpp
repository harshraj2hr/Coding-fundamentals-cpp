#include<bits/stdc++.h>
using namespace std;

#define ll long long int



void generateParentheses(vector<string>& ans, string &s, int open, int close){

   if(open==0 && close==0){
      ans.push_back(s);
      return;
   }

   if(open>0){
      s.append("(");
      generateParentheses(ans,s,open-1,close);
      s.pop_back();
   }
   if(open<close){
      s.append(")");
      generateParentheses(ans,s,open,close-1);
      s.pop_back();
   }
   return;

}




int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
  
   freopen("input.txt", "r", stdin);
   //freopen("error.txt", "w", stderr);
   freopen("output.txt", "w", stdout);
 
  
   int t=1;
   cin>>t;
   vector<string> ans;
   string s="";
   generateParentheses(ans,s,t,t);
   for(auto x:ans)cout<<x<<" ";
  
  return 0;
}