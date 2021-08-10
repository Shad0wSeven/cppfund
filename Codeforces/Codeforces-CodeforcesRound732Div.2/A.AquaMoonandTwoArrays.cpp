// time-limit: 1000
// problem-url: https://codeforces.com/contest/1546/problem/A
#include<bits/stdc++.h>
using namespace std;
#define O(x) cout<<#x<<" "<<(x)<<"\n"
inline int read(){
	int x=0,f=1,c=getchar();
	while(!isdigit(c)){if(c=='-')f=-1;c=getchar();}
	while(isdigit(c)){x=(x<<1)+(x<<3)+(c^48);c=getchar();}
	return f==1?x:-x;
}
const int N=104;
int n,sum,a[N];
vector<pair<int,int> >ans;
inline void solve(){
	n=read();
	sum=0;
	ans.clear();
	for(int i=1;i<=n;i++)a[i]=read();
	for(int i=1;i<=n;i++){
		a[i]-=read();
		sum+=a[i];
	}
	if(sum){puts("-1");return;}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			for(int k=1;k<=n;k++)if(a[k]<0){
				ans.push_back(make_pair(i,k));
				++a[k];
				break;
			}
		}
	}
	cout<<ans.size()<<"\n";
	for(auto v:ans)cout<<v.first<<" "<<v.second<<"\n";
}
int main(){
	for(int T=read();T--;)solve(); 
	return 0;
}
