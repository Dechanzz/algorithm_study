#include <iostream>
#include <cmath>
using namespace std;
int plist[10001]={0};
int isprime(int n){
	if(n==1||n==2||n==3) return 1;
	if(!(n&1)) return 0;
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
//	cout<<endl<<" i="<<i<<"sqrt(n)="<<sqrt(n)<<endl;
	return 1;
}
int main(){
	int n=0,i=0,j;
	int temp;
	while(cin>>n){
//		cout<<"@@@su"<<isprime(n)<<endl;
//		cout<<"###ji"<<(n&1)<<endl;
		for(i=n;i>=5;i--){
			if(!(i&1)) {//ż������ 
				continue;
			}
			//������������� 
			if(plist[i]==0){//������Ϊ��ֵ 
				plist[i]=isprime(i);	
			}
			if(plist[i-2]==0){//������-2δ��ֵ 
				plist[i-2]=isprime(i-2);
			}
			//�ո���ֵ�����Ѿ���ֵ�� 
			if(plist[i]==1&&plist[i-2]==1){//i��i-1��Ϊ������־ 
				cout<<i-2<<" "<<i<<endl;
				break; 
			}
		}
	}
	
}
