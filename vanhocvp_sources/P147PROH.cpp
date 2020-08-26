#include<iostream>
#include<string>
 
using namespace std;
 
int main(){
	int t=1;
	while(1){
		
		string a,b;
		cin>>a>>b;
		if(a=="END"&&b=="END") return 0;
		cout<<"Case "<<t++<<": ";
		if(a.size()!=b.size()) cout<<"different"<<endl;
		else{
			int flag=1;
			for(int i=0;i<a.size();i++){
				for(int j=0;j<b.size();j++){
					if(a[i]==b[j]){
						b[j]=' ';
						break;
					}
					else if(j==b.size()-1&&a[i]!=b[j]){
						cout<<"different"<<endl;
						flag=0;
						break;
					}
				}
				if(flag==0) break;
			}
			if(flag==1) cout<<"same"<<endl;
		}
	}
} 
