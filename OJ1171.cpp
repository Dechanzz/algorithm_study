#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n=0,num=0,win=0,tempn=0;
	int map[101]={0};
	while(cin>>n,n){//n为0推出程序 
	    tempn=n;
		for(int i=0;i<n;i++){
			cin>>num;
			if(num==0) tempn--;
			//输入的石子数量为0是错误输入,将总堆数减去0石子的堆数 
			map[num]++;
		}
		if(tempn&1){//只要堆数为奇数就可以赢 
			win=1;
		}
		else{
			for(int i=1;i<101;i++){
			    if(map[i]&1) {
			        win=1; 
			        break;
			    }//只要相同石子数的堆数为奇数则可以赢 
		    }
		}
		if(win) cout<<"Win";
		else cout<<"Lose";
		cout<<endl;
		memset(map,0,sizeof(map));
		win=0;
	}
} 






