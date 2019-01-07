//BothStack.cpp
#include "BothStack.h"
// 功    能：栈的初始化
template <class T>
BothStack<T>::BothStack( )
{
	top1= -1;  
	top2=StackSize;
} 
// 功    能：销毁两栈共享的数组空间
template <class T>
BothStack<T>::~BothStack( ) 
{

}
// 功    能：在栈i顶插入一个元素x
template <class T> 
void BothStack<T>::Push(int i, T x )
{
    if (top1==top2-1) 
		throw "上溢";
    if (i==1) 
		data[++top1]=x;
    if (i==2) 
		data[--top2]=x;
}
// 功    能：在栈i中删除栈顶元素，若删除成功，则栈i中删除了栈顶元素
template <class T>
T BothStack<T>::Pop(int i)
{
    if (i==1) //将栈1的栈顶元素出栈
	{   
        if (top1== -1) 
			throw "下溢";
        return data[top1--];
	}
    if (i==2)  //将栈2的栈顶元素出栈
	{                           
        if (top2==StackSize) 
			throw "下溢";
        return data[top2++]; 
	}
}
// 功    能：读取栈i当前的栈顶元素
template <class T> 
T BothStack<T>::GetTop(int i)
{
    if(i==1)
	{
        if (top1!=-1) 
			return data[top1];
	}
    if(i==2)
	{
	    if(top2!=StackSize)
			return data[top2];
   } 
}
// 功    能：判断栈i是否为空栈
template <class T> 
bool BothStack<T>::Empty(int i)
{  
    if(i==1)
	{
	    if(top1==-1) 
			return 0;
	    else 
			return 1;
	}
    if(i==2)
	{
	    if(top2==StackSize)
			return 0;
	    else 
			return 1;
	}
}

