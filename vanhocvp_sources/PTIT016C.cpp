#include<iostream>
#include<string>
using namespace std;
void check(string s){
	int flag=1;
	for(int i=0;i<s.size();i++){
		if((i%2==0&&int(s[i]-'0')%2==0)||(i%2!=0)&&int(s[i]-'0')%2!=0){
			flag=0;
			cout<<"NO"<<endl;
			break;
		}
	}
	if(flag==1) cout<<"YES"<<endl;
}
int main(){
	int T;
	cin>>T;
	while(T--){
		string s;
		cin>>s;
		check(s);
		
	}
}
 
