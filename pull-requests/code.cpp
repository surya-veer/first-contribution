#include <bits/stdc++.h>
using namespace std;
int main(){
	 int a,b;
	cin >> a>>b;
	int ans;
	int a1,b1;
	 if(b==1&&a==9){
	 	a1=999;
	 	b1=1000;
		cout << a1 << " "<< b1 << endl;
		return 0;
	}
	if(b-a>1 || b-a<0){
		ans=-1;
	}
	
	if(b-a==1){
		a1=a*100 +99;
		b1=b*100;
		cout << a1 <<" " << b1 << endl;
	}
	if(b==a){
		a1=a*100 + 12;
		b1=b*100 + 13;	
		cout << a1 <<" "  << b1<< endl ;
	}
	if(ans==-1){
		cout << ans<< endl;
	}
	return 0;
}