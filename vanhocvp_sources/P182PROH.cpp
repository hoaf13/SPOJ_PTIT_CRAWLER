#include<iostream>
#include<string>
 
using namespace std;
 
int main(){
	string s;
	cin>>s;
	if(s[s.size()-2]=='A'){
		if(s[0]=='1'&&s[1]=='2'){
			cout<<"00";
			for(int i=2;i<s.size()-2;i++) cout<<s[i];
		}
	else 	for(int i=0;i<s.size()-2;i++) cout<<s[i];
	}
	else{
		string tmp="";
		tmp=tmp+s[0]+s[1];
		if(tmp=="01") cout<<"13";
		if(tmp=="02") cout<<"14";
		if(tmp=="03") cout<<"15";
		if(tmp=="04") cout<<"16";
		if(tmp=="05") cout<<"17";
		if(tmp=="06") cout<<"18";
		if(tmp=="07") cout<<"19";
		if(tmp=="08") cout<<"20";
		if(tmp=="09") cout<<"21";
		if(tmp=="10") cout<<"22";		
		if(tmp=="11") cout<<"23";
		if(tmp=="12") cout<<"12";		
		for(int i=2;i<s.size()-2;i++) cout<<s[i];
	}
} 
