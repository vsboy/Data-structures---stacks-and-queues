#include<iostream>
using namespace std;
#include"SeqStack.cpp"
void main()
{
	int digit,m,n,k;
	cout<<"������Ҫת���Ľ���"<<endl;
	cin>>digit;
	cout<<"������Ҫת����ʮ������"<<endl;
	cin>>m;
	n=m;
	SeqStack<int> S;
	while(n!=0)
	{
		k=n%digit;
		S.Push(k);
		n=n/digit;
	}
	cout<<"ʮ����"<<m<<"��Ӧ��"<<digit<<"������Ϊ��";
	S.print();
}

