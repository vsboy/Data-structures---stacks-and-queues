#include<iostream>
#include<string>
using namespace std;
#include"SeqStack.cpp"
void main()
{
	char str[50];
	cout<<"请输入一个字符串";
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
				cout<<str<<"不是回文串"<<endl;
				break;
			}
	}
	if(i==len)
		cout<<str<<"是回文串"<<endl;
}


