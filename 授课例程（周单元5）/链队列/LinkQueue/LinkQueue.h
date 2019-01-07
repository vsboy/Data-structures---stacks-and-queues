//LinkQueue.h
#ifndef LINKQUEUE_H
#define LINKQUEUE_H
template <class T>
struct Node
{
      T data;
      Node<T> *next;  //此处<T>也可以省略
};
template <class T>
class LinkQueue
{
public:
    LinkQueue( );          //构造函数，初始化一个空的链队列
    ~LinkQueue( );      //析构函数，释放链队列中各结点的存储空间
    void EnQueue(T x);  //将元素x入队
    T DeQueue( );       //将队头元素出队
    T GetQueue( );     //取链队列的队头元素
    bool Empty( );     //判断链队列是否为空
private:
    Node<T> *front, *rear;  //队头和队尾指针，分别指向头结点和终端结点
};

#endif;