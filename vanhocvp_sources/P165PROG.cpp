#include<iostream>
#include<string>
using namespace std;
int chartosum(char s){
	int x;
	x=int(s)-48;
	return x;
}
long long check(int n,char s){
	int a=chartosum(s);
	long long sum=a;
	for(int i=1;i<n;i++) sum*=10;
	return sum;
}
int main(){
	string s;
	cin>>s;
	long long sum=0;
	int tmp=1;
	if(s.size()>19&&s[0]!='-') cout<<"BigInteger";
	else if(s.size()>20&&s[0]=='-') cout<<"BigInteger";
	else{
		for(int i=0;i<s.size();i++){
			if(i==0&&s[0]=='-') tmp = -1;
			else{
				sum+=check(s.size()-i,s[i]);
			}
		}
		sum*=tmp;
	//	cout<<tmp<<"     "<<sum;
	//
	if(sum<=127&&sum>=-128) cout<<"byte";
	else if(sum<=32767&&sum>=-2147483648) cout<<"short";
	else if(sum<=2147483647&&sum>=-2147483648) cout<<"int";
	else if(sum<=9223372036854775808&&sum>=-9223372036854775808) cout<<"long";
	else cout<<"BigInteger";
	}
	
}
 
