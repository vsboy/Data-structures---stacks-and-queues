//LinkStack.cpp
#include "LinkStack.h"
//��    �ܣ�ջ�ĳ�ʼ��
template <class T>
LinkStack<T>::LinkStack( )
{
	top=NULL; 
}
// ��    �ܣ�����ջ
template <class T>
LinkStack<T>::~LinkStack( )
{
	while (top)
	{
		Node<T> *p;
		p=top->next;
        delete top;
        top=p;
	}
}
//��    �ܣ���ջ������ýڵ�
template<class T> 
void LinkStack<T>::Push(T x)
{
    Node<T> *s;
	s=new Node<T>;    
    s->data = x;     //����һ��������Ϊx�Ľ��s
    s->next = top; 
	top=s;           //�����s����ջ��
}
//��    �ܣ�ɾ��ջ��Ԫ�ء����ɾ���ɹ������ر�ɾԪ��ֵ�������׳��쳣
template <class T> T LinkStack<T>::Pop( )
{   
    Node<T> *p;
	int x; 
    if (top==NULL) throw "����";
    x=top->data;            //�ݴ�ջ��Ԫ��
    p=top; 
	top=top->next;         //��ջ�����ժ��
    delete p;
    return x;
}
//��    �ܣ���ȡ��ǰ��ջ��Ԫ�ء���ջ���գ����ص�ǰ��ջ��Ԫ��ֵ
template <class T> 
T LinkStack<T>::GetTop( )
{
    if (top!=NULL) 
		return top->data;
}
// ��    �ܣ��ж�ջ�Ƿ�Ϊ��
template <class T> bool LinkStack<T>::Empty( )
{
    if(top==NULL) 
		return 1;
	else 
		return 0;
}