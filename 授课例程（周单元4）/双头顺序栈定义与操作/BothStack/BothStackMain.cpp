//BothStackMain.cpp
#include <iostream>     //�������������
using namespace std;
#include "BothStack.cpp"  //�����Ա�����ļ�
void main( )
{ 
    BothStack<int> a;             //����ģ�����ʵ��
	cout<<"��ջ1����ѹջ����:"<<endl;
	a.Push(1,10);
	a.Push(1,12);
	cout<<"ջ1��ջ��Ԫ��Ϊ:"<<a.GetTop(1)<<endl;   //��ȡջ��Ԫ��
	cout<<"��ջ1ִ�г�ջ����:"<<endl;             //��ջ����
	a.Pop(1);                     
    cout<<"ջ1��ջ��Ԫ��Ϊ:"<<a.GetTop(1)<<endl;   //��ȡջ��Ԫ��
	cout<<"��ջ2����ѹջ����:"<<endl;
	a.Push(2,20);
	a.Push(2,32);
	cout<<"ջ2��ջ��Ԫ��Ϊ:"<<a.GetTop(2)<<endl;   //��ȡջ��Ԫ��
	cout<<"��ջ2ִ�г�ջ����:"<<endl;             //��ջ����
	a.Pop(2);                     
    cout<<"ջ2��ջ��Ԫ��Ϊ:"<<a.GetTop(2)<<endl;   //��ȡջ��Ԫ��
} 