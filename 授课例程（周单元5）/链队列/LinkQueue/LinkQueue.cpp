//LinkQueue.cpp
#include "LinkQueue.h"
// ��    �ܣ���ʼ������
template <class T>
LinkQueue<T>::LinkQueue( )
{
	Node <T> *s;
	s=new Node<T>;
	s->next=NULL;
	front=rear=s;
}
// ��    �ܣ����ٶ��У� �����������ͷŶ�����ռ�õĴ洢�ռ�
template <class T>
LinkQueue<T>::~LinkQueue( )
{
	while(front)
	{
		Node <T> *p;
		p=front->next;
        delete front;
	    front=p;
	}
}
// ��    �ܣ��ڶ�β����һ��Ԫ��
template <class T> 
void LinkQueue<T>::EnQueue(T x)
{
	Node<T> *s;
    s=new Node<T>; 
    s->data=x;          //����һ��������Ϊx�Ľ��s
    s->next=NULL;
    rear->next=s;       //�����s���뵽��β
    rear=s;
}
// ��    �ܣ�ɾ����ͷԪ�أ����ɾ���ɹ������ر�ɾԪ��ֵ�������׳�ɾ���쳣
template <class T>
T LinkQueue<T>::DeQueue()
{    
	Node <T> *p; int x;
    if (rear==front) throw "����";
    p=front->next; 
	x=p->data;                       //�ݴ��ͷԪ��
    front->next=p->next;             //����ͷԪ�����ڽ��ժ��
    if (p->next==NULL) rear=front;   //�жϳ���ǰ���г����Ƿ�Ϊ1
    delete p;
    return x;
}
// ��    �ܣ���ȡ��ͷԪ�أ������в��գ����ض�ͷԪ��
template <class T> 
T LinkQueue<T>::GetQueue()
{
    if (front!=rear) 
		return front->next->data;
}
// ��    �ܣ��ж϶����Ƿ�Ϊ�գ��������Ϊ�գ�����1�����򣬷���0
template <class T> 
bool LinkQueue<T>::Empty( )
{
    if(front==rear) 
		return 1;
    else 
		return 0;
}