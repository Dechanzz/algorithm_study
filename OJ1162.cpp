#include<iostream>
#include<stack>
using namespace std;
stack<int> s;
int main(){
	int n=0;
	int temp=0;
	int max=0;
	int flag=0;
	while(cin>>n){
		max=0;
		flag=0;
		while(n--){
			cin>>temp;
			if(temp>max){
				for(int i=max+1;i<=temp;i++){
					s.push(i);
				}
				s.pop();
				max=temp;
			}
			else if(temp==max) flag=1;
			else if(temp<max){
				if(s.empty()) flag=1;
				else if(temp==s.top()) s.pop();
				else flag=1;
			}
		}
		if(flag==0){
			cout<<"Yes"<<endl;
		}
		else cout<<"No"<<endl;
		while(!s.empty()){
			s.pop();
		}
	}
    return 0;
}
