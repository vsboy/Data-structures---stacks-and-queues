//SeqStackMain.cpp
#include <iostream>      //�������������
using namespace std;
#include "SeqStack.cpp"  //�����Ա�����ļ�
void main()
{    
    SeqStack<int> a;      //����ģ�����ʵ��
    cout<<"��15��10ִ����ջ����:"<<endl;
	a.Push(15);
	a.Push(10);   
	cout<<"ջ��Ԫ��Ϊ:"<<a.GetTop( )<<endl;   //ȡջ��Ԫ��
	cout<<"ִ�г�ջ����:"<<endl;
	cout<<a.Pop( )<<endl;          //ִ�г�ջ����
    cout<<"ջ��Ԫ��Ϊ:"<<a.GetTop( )<<endl;
}

