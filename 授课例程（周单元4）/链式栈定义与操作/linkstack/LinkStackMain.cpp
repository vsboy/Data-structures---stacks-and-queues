//LinkStackMain.cpp
#include <iostream>       //�������������
using namespace std;
#include "LinkStack.cpp"  //�����Ա�����ļ�

void main( )
{ 
    LinkStack<int>a;             //����ģ�����ʵ��
	cout<<"��10����ѹջ����:"<<endl;    //��ջ����
    a.Push(10);
	cout<<"��ȡջ��Ԫ��:"<<a.GetTop( )<<endl;       //��ջ��Ԫ��
	cout<<"��15ջ����ѹջ����:"<<endl;
	a.Push(15);
	cout<<"��ȡջ��Ԫ��:"<<a.GetTop( )<<endl;
	cout<<"���г�ջ����:"<<endl;    //��ջ����   
	a.Pop( );
	cout<<"��ȡջ��Ԫ��:"<<a.GetTop( )<<endl;
}