#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n=0,num=0,win=0,tempn=0;
	int map[101]={0};
	while(cin>>n,n){//nΪ0�Ƴ����� 
	    tempn=n;
		for(int i=0;i<n;i++){
			cin>>num;
			if(num==0) tempn--;
			//�����ʯ������Ϊ0�Ǵ�������,���ܶ�����ȥ0ʯ�ӵĶ��� 
			map[num]++;
		}
		if(tempn&1){//ֻҪ����Ϊ�����Ϳ���Ӯ 
			win=1;
		}
		else{
			for(int i=1;i<101;i++){
			    if(map[i]&1) {
			        win=1; 
			        break;
			    }//ֻҪ��ͬʯ�����Ķ���Ϊ���������Ӯ 
		    }
		}
		if(win) cout<<"Win";
		else cout<<"Lose";
		cout<<endl;
		memset(map,0,sizeof(map));
		win=0;
	}
} 






