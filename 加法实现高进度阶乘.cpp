//利用高精度加法实现 
#include <iostream>
#include <cstring>
using namespace std;
int factorial[3001];
int _factorial[3001];
void copyary(int a[],int b[],int n){//实现数组的复制 
	for(int i=0;i<n;i++){
		a[i]=b[i];
	}
}
void ary_add(int a[],int b[],int &lena,int lenb){//实现数组的相加 
	//adding eles in a and b
	int max=lena>lenb?lena:lenb;
	for(int i=0;i<max;i++){
		a[i]+=b[i];
		a[i+1]+=a[i]/10;
		a[i]%=10;
	}
	if(a[max]!=0) lena++;
}
void ary_mtpl(int a[],int b,int &loc){//realize the mutiple of array and num
	//by adding array a[0:loc] for b times
	copyary(_factorial,a,loc);
	for(int i=1;i<b;i++){
//		cout<<"begin"<<i<<"st ary_mtpl"<<endl;
		ary_add(a,_factorial,loc,loc);
//		for(int j=0;j<loc;j++) cout<<a[j]<<ends;
//		cout<<endl;
	}
}
int main(){
	int n=0,loc=0,temp_n=0;
	memset(factorial,0,sizeof(factorial));
	while(cin>>n){
		temp_n=n;
		loc=0;
		while(temp_n!=0){
			factorial[loc]=temp_n%10;
			loc++;//current actual length of factorial[]
			temp_n/=10;
		}	
		while(n--){
			ary_mtpl(factorial,n,loc);
//			cout<<"turn"<<n<<endl;
//			for(int i=0;i<loc;i++) cout<<factorial[i]<<ends;
//			cout<<endl;
		}
///		
//		cout<<endl<<"final loc="<<loc<<endl;
///
		for(int i=loc-1;i>=0;i--) cout<<factorial[i];
		cout<<endl;
//		cout<<loc<<endl;//the length of n
//		for(int i=0;i<loc;i++) cout<<factorial[i]<<ends;
//		cout<<endl;				
		memset(factorial,0,sizeof(factorial));
		memset(_factorial,0,sizeof(_factorial));
	}
	return 0;
}
