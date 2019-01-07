//LinkQueue.h
#ifndef LINKQUEUE_H
#define LINKQUEUE_H
template <class T>
struct Node
{
      T data;
      Node<T> *next;  //�˴�<T>Ҳ����ʡ��
};
template <class T>
class LinkQueue
{
public:
    LinkQueue( );          //���캯������ʼ��һ���յ�������
    ~LinkQueue( );      //�����������ͷ��������и����Ĵ洢�ռ�
    void EnQueue(T x);  //��Ԫ��x���
    T DeQueue( );       //����ͷԪ�س���
    T GetQueue( );     //ȡ�����еĶ�ͷԪ��
    bool Empty( );     //�ж��������Ƿ�Ϊ��
private:
    Node<T> *front, *rear;  //��ͷ�Ͷ�βָ�룬�ֱ�ָ��ͷ�����ն˽��
};

#endif;