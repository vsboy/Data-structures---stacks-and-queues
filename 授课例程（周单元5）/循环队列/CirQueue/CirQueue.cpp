//CirQueue.cpp
#include "CirQueue.h"
//��    �ܣ���ʼ������
template <class T>
CirQueue<T>::CirQueue( ) 
{
	front=rear=0;
} 
// ��    �ܣ����ٶ���
template <class T>
CirQueue<T>::~CirQueue( )
{

}
// ��    �ܣ��ڶ�β����һ��Ԫ��
template <class T> 
void CirQueue<T>::EnQueue(T x)
{
    if ((rear+1) % QueueSize ==front) throw "����";
    rear=(rear+1) % QueueSize;   //��βָ����ѭ�������¼�1
    data[rear]=x;                //�ڶ�β������Ԫ��
}
//��    �ܣ�ɾ����ͷԪ�أ����ɾ���ɹ������ر�ɾԪ��ֵ�������׳�ɾ���쳣
template <class T> 
T CirQueue<T>::DeQueue( )
{
    if (rear==front) throw "����Ϊ�գ��޷�����"; 
    front=(front+1) % QueueSize;    //��ͷָ����ѭ�������¼�1
    return data[front];             //��ȡ�����س���ǰ�Ķ�ͷԪ�أ�ע���ͷָ��
}
                                   //ָ���ͷԪ�ص�ǰһ��λ��
//��    �ܣ���ȡ��ͷԪ�أ������в��գ����ض�ͷԪ��
template <class T>
T CirQueue<T>::GetQueue( )
{   
    int i;
    if (rear==front) throw "����Ϊ�գ��޷���ȡ��ͷ"; 
    i=(front+1) % QueueSize;  //ע�ⲻҪ����ͷָ�븳ֵ
    return data[i];
}
// ��    �ܣ��ж϶����Ƿ�Ϊ�գ��������Ϊ�գ�����true�����򣬷���false
template <class T> 
bool CirQueue<T>::Empty( ) 
{
    if (front==rear) 
		return true; 
	else 
		return false;
}
//��    �ܣ��ж϶����Ƿ�Ϊ�����������Ϊ��������true�����򣬷���false
template<class T>
bool CirQueue<T>::Full()
{
	if((rear+1)%QueueSize==front)
		return true;
	else
		return false;
}
 //��    �ܣ�����г���
template<class T>
int CirQueue<T>::Length()
{
	return ((rear-front+QueueSize)%QueueSize);
}