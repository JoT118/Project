#include<bits/stdc++.h> 
using namespace std; 
int main (){
	int a,b,c,d;
	cin >> a>>b>>c>>d; 
	int tu=((a*d)+(b*c));
	int mau=(b*d);
	if (tu>0&&mau<0){
	tu*=(-1);
	mau*=(-1);}
	int i=mau;
	for (i=mau;i>0;i--){
		if (mau%i==0&&tu%i==0){
			mau/=i;
			tu/=i; 
		} 
	} if (tu%mau==0){
		int x=tu/mau; 
		cout << x; 
	} else cout << tu << "/"<<mau; 
	
} 
