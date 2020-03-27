#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
using namespace std; 
int main(){
	int n,k,len;
	char s1[100];
	char s2[100];
	cin>>k;
	cin.ignore(1024,'\n');
	gets(s1);
	len=strlen(s1);
	if(len<=10||k<=1||k>=len){
		return 0;
	}
	for(int i=0;i<len;i++){
		s2[i]=s1[(i+len+k)%len];
	}
	cout<<s2;	
	return 0;
}
