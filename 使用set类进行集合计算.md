例1：给出两个整数集合 A, B，求出 A - A ∩ B
-------
	每组数据包含四行：
	第一行为一个整数 n，表示集合 A 中的元素个数。
	第二行有 n 个互不相同的用空格隔开的整数，表示集合 A 中的元素。
	第三行为一个整数 m，表示集合 B 中的元素个数。
	第四行有 m 个互不相同的用空格隔开的整数，表示集合 B 中的元素。
	每组数据的结果占一行，从小到大的顺序输出 A - A ∩ B 中的所有元素。
****

	集合中的所有元素均为 int 范围内的整数，n, m <= 1000。
	对于初学者可以使用数组的方式对输入的数组元素进行统计来实现集合运算
	但是STL库中包含了set类的使用方法，本身就是集合类
	同时有集合的各种运算api
	使用set_intersection函数来计算两个集合的交集
	set_difference实现两个集合相减
	集合操作的函数参数可以是set类型也可以是vector
	对于set的对象进行插入元素使用insert()操作，自动对元素进行排序后插入
	集合运算的结果均为排序的（默认升序），可以在函数中写排序函数的参数实现降序或自定义顺序
	代码如下：
	#include <iostream>
	#include <vector>
	#include <set>
	#include <algorithm>
	using namespace std;
	int main(){
		int n1,n2,temp;
		set<int> s1;
		set<int> s2;
		vector<int> vv;
		vector<int> diff;
		while(cin>>n1){
			while(n1--){
				cin>>temp;
				s1.insert(temp);
			}
			cin>>n2;
			while(n2--){
				cin>>temp;
				s2.insert(temp);
			}
			set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),back_inserter(vv));
			set_difference(s1.begin(),s1.end(),vv.begin(),vv.end(),back_inserter(diff));
			for(int n:diff) cout<<n<<' ';
			cout<<endl;
			s1.clear();
			s2.clear();
			vv.clear();
			diff.clear();
		}
		return 0;
	}
