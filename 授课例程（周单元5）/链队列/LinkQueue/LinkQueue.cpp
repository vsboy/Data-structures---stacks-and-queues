//LinkQueue.cpp
#include "LinkQueue.h"
// 功    能：初始化队列
template <class T>
LinkQueue<T>::LinkQueue( )
{
	Node <T> *s;
	s=new Node<T>;
	s->next=NULL;
	front=rear=s;
}
// 功    能：销毁队列， 后置条件：释放队列所占用的存储空间
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
// 功    能：在队尾插入一个元素
template <class T> 
void LinkQueue<T>::EnQueue(T x)
{
	Node<T> *s;
    s=new Node<T>; 
    s->data=x;          //申请一个数据域为x的结点s
    s->next=NULL;
    rear->next=s;       //将结点s插入到队尾
    rear=s;
}
// 功    能：删除队头元素，如果删除成功，返回被删元素值，否则，抛出删除异常
template <class T>
T LinkQueue<T>::DeQueue()
{    
	Node <T> *p; int x;
    if (rear==front) throw "下溢";
    p=front->next; 
	x=p->data;                       //暂存队头元素
    front->next=p->next;             //将队头元素所在结点摘链
    if (p->next==NULL) rear=front;   //判断出队前队列长度是否为1
    delete p;
    return x;
}
// 功    能：读取队头元素，若队列不空，返回队头元素
template <class T> 
T LinkQueue<T>::GetQueue()
{
    if (front!=rear) 
		return front->next->data;
}
// 功    能：判断队列是否为空，如果队列为空，返回1，否则，返回0
template <class T> 
bool LinkQueue<T>::Empty( )
{
    if(front==rear) 
		return 1;
    else 
		return 0;
}