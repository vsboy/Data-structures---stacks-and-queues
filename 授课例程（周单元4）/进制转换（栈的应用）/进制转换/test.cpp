#include<iostream>
using namespace std;
#include"SeqStack.cpp"
void main()
{
	int digit,m,n,k;
	cout<<"请输入要转换的进制"<<endl;
	cin>>digit;
	cout<<"请输入要转换的十进制数"<<endl;
	cin>>m;
	n=m;
	SeqStack<int> S;
	while(n!=0)
	{
		k=n%digit;
		S.Push(k);
		n=n/digit;
	}
	cout<<"十进制"<<m<<"对应的"<<digit<<"进制数为：";
	S.print();
}

