#include<iostream>
#include<string>
using namespace std;
#include"SeqStack.cpp"
void main()
{
	char str[50];
	cout<<"������һ���ַ���";
	gets(str);
	SeqStack<char> S;
	int len,i;
	len=strlen(str);
	for(i=0;i<len;i++)
		S.Push(str[i]);
	i=0;
	while(!S.Empty() && i<len )
	{
		if(S.Pop()==str[i])
			i++;
		else
			{
				cout<<str<<"���ǻ��Ĵ�"<<endl;
				break;
			}
	}
	if(i==len)
		cout<<str<<"�ǻ��Ĵ�"<<endl;
}


