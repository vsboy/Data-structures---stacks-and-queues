//CirQueue.h
#ifndef CIRQUEUE_H
#define CIRQUEUE_H
const int QueueSize=10;  //����洢����Ԫ�ص��������󳤶�
template <class T>        //����ģ����CirQueue
class CirQueue
{
public:
    CirQueue( );                 //���캯�����ÿն�
    ~ CirQueue( );               //��������
    void EnQueue(T x);           //��Ԫ��x���
    T DeQueue( );                //����ͷԪ�س���
    T GetQueue( );               //ȡ��ͷԪ�أ�����ɾ����
    bool Empty( );               //�ж϶����Ƿ�Ϊ��
	bool Full( );                //�ж϶����Ƿ�����
	int Length( );               //����г���
private:
    T data[QueueSize];           //��Ŷ���Ԫ�ص�����
    int front, rear;    //��ͷ�Ͷ�βָ�룬�ֱ�ָ���ͷԪ�ص�ǰһ��λ�úͶ�βԪ�ص�λ��
};
#endif