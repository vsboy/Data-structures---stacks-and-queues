//LinkStack.cpp
#include "LinkStack.h"
//功    能：栈的初始化
template <class T>
LinkStack<T>::LinkStack( )
{
	top=NULL; 
}
// 功    能：销毁栈
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
//功    能：在栈顶插入该节点
template<class T> 
void LinkStack<T>::Push(T x)
{
    Node<T> *s;
	s=new Node<T>;    
    s->data = x;     //申请一个数据域为x的结点s
    s->next = top; 
	top=s;           //将结点s插在栈顶
}
//功    能：删除栈顶元素。如果删除成功，返回被删元素值，否则，抛出异常
template <class T> T LinkStack<T>::Pop( )
{   
    Node<T> *p;
	int x; 
    if (top==NULL) throw "下溢";
    x=top->data;            //暂存栈顶元素
    p=top; 
	top=top->next;         //将栈顶结点摘链
    delete p;
    return x;
}
//功    能：读取当前的栈顶元素。若栈不空，返回当前的栈顶元素值
template <class T> 
T LinkStack<T>::GetTop( )
{
    if (top!=NULL) 
		return top->data;
}
// 功    能：判断栈是否为空
template <class T> bool LinkStack<T>::Empty( )
{
    if(top==NULL) 
		return 1;
	else 
		return 0;
}