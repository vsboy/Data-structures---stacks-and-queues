//SeqStack.cpp
#include "SeqStack.h"
// 功    能：栈的初始化
template <class T>
SeqStack<T>::SeqStack( )
{
	top=-1;
}
// 功    能：销毁栈
template <class T>
SeqStack<T>::~SeqStack( )
{
	top=-1;
} 
// 功    能：在栈顶插入一个元素x
template <class T> 
void SeqStack<T>::Push(T x)
{
    if (top== StackSize-1) throw "上溢";
    top++;
    data[top]=x;
}
//功    能：删除栈顶元素
template <class T>
T SeqStack<T>::Pop( )
{ 
    T x;
    if (top==-1) throw "下溢";
    x=data[top--];
    return x;
}
//功    能：读取当前的栈顶元素
template <class T> 
T SeqStack<T>::GetTop( )
{
	if (top!=-1)  
    return data[top];
}
// 功    能：判断栈是否为空
template <class T> 
bool SeqStack<T>::Empty( )
{
	if(top==-1) return true;
	else return false;
} 
// 功    能：判断栈是否已满
template <class T> 
bool SeqStack<T>::Full( )
{
	if(top==StackSize-1) return true;
	else return false;
} 