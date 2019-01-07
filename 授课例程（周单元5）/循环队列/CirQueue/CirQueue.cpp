//CirQueue.cpp
#include "CirQueue.h"
//功    能：初始化队列
template <class T>
CirQueue<T>::CirQueue( ) 
{
	front=rear=0;
} 
// 功    能：销毁队列
template <class T>
CirQueue<T>::~CirQueue( )
{

}
// 功    能：在队尾插入一个元素
template <class T> 
void CirQueue<T>::EnQueue(T x)
{
    if ((rear+1) % QueueSize ==front) throw "上溢";
    rear=(rear+1) % QueueSize;   //队尾指针在循环意义下加1
    data[rear]=x;                //在队尾处插入元素
}
//功    能：删除队头元素，如果删除成功，返回被删元素值，否则，抛出删除异常
template <class T> 
T CirQueue<T>::DeQueue( )
{
    if (rear==front) throw "队列为空，无法出队"; 
    front=(front+1) % QueueSize;    //队头指针在循环意义下加1
    return data[front];             //读取并返回出队前的队头元素，注意队头指针
}
                                   //指向队头元素的前一个位置
//功    能：读取队头元素，若队列不空，返回队头元素
template <class T>
T CirQueue<T>::GetQueue( )
{   
    int i;
    if (rear==front) throw "队列为空，无法获取队头"; 
    i=(front+1) % QueueSize;  //注意不要给队头指针赋值
    return data[i];
}
// 功    能：判断队列是否为空，如果队列为空，返回true，否则，返回false
template <class T> 
bool CirQueue<T>::Empty( ) 
{
    if (front==rear) 
		return true; 
	else 
		return false;
}
//功    能：判断队列是否为满，如果队列为满，返回true，否则，返回false
template<class T>
bool CirQueue<T>::Full()
{
	if((rear+1)%QueueSize==front)
		return true;
	else
		return false;
}
 //功    能：求队列长度
template<class T>
int CirQueue<T>::Length()
{
	return ((rear-front+QueueSize)%QueueSize);
}