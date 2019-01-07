//SeqStack.cpp
#include "SeqStack.h"
// ��    �ܣ�ջ�ĳ�ʼ��
template <class T>
SeqStack<T>::SeqStack( )
{
	top=-1;
}
// ��    �ܣ�����ջ
template <class T>
SeqStack<T>::~SeqStack( )
{
	top=-1;
} 
// ��    �ܣ���ջ������һ��Ԫ��x
template <class T> 
void SeqStack<T>::Push(T x)
{
    if (top== StackSize-1) throw "����";
    top++;
    data[top]=x;
}
//��    �ܣ�ɾ��ջ��Ԫ��
template <class T>
T SeqStack<T>::Pop( )
{ 
    T x;
    if (top==-1) throw "����";
    x=data[top--];
    return x;
}
//��    �ܣ���ȡ��ǰ��ջ��Ԫ��
template <class T> 
T SeqStack<T>::GetTop( )
{
	if (top!=-1)  
    return data[top];
}
// ��    �ܣ��ж�ջ�Ƿ�Ϊ��
template <class T> 
bool SeqStack<T>::Empty( )
{
	if(top==-1) return true;
	else return false;
} 
// ��    �ܣ��ж�ջ�Ƿ�����
template <class T> 
bool SeqStack<T>::Full( )
{
	if(top==StackSize-1) return true;
	else return false;
} 