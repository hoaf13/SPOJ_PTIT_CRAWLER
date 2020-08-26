#include<iostream>
#include<string>
using namespace std;
string chuan(string s){
	for(int i=1;i<=500;i++){
		string tmp="";
		int k=i;
		while(k){
			tmp=char(k%10+'0')+tmp;
			k/=10;
		}
		s+=tmp;
		if(s.size()>=1003) return s;
	}
}
int main(){
	string s="";
	s=chuan(s);
//	cout<<s;
	int n;
	cin>>n;
	cout<<s[n-1];
}
 
