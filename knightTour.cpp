#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define N 8

int ans[N][N];


int moveX[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int moveY[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };


bool isSafe(int x, int y){
	return (x<N && y<N && x>=0 && y>=0 && ans[x][y]==-1);	
}

void printAns(){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++)cout<<ans[i][j]<<" ";
			cout<<"\n";
	}
}
int tour(int curX, int curY, int pos){

	if(pos==64)return 1;

	for(int i=0;i<N;i++){

		int nextX=curX+moveX[i];
		int nextY=curY+moveY[i];

		if(isSafe(nextX,nextY)){
			ans[nextX][nextY]=pos;
			 if(tour(nextX,nextY,pos+1)==1)return 1;
			 else {
			 		ans[nextX][nextY]=-1;
			 }
			
		}

	}

   return 0;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
  
  
   freopen("input.txt", "r", stdin);
   //freopen("error.txt", "w", stderr);
   freopen("output.txt", "w", stdout);
 
   
   for(int i=0;i<N;i++){
   	for(int j=0;j<N;j++)ans[i][j]=-1;
   }
	ans[0][0]=0;
   tour(0,0,1);
   printAns();
  return 0;
}
  