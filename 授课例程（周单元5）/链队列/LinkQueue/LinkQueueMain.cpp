//LinkQueueMain.cpp
#include<iostream>       //引用输入输出流
using namespace std;
#include"LinkQueue.cpp"  //引入成员函数文件
void main()
{
    LinkQueue<int> a;         //创建模版类的实例 
	a.EnQueue(10);             //入队操作
	cout<<"查看队头元素:"<<a.GetQueue( )<<endl;  //读队头元素
	a.EnQueue(15);
    cout<<"查看队头元素:"<<a.GetQueue()<<endl;
	cout<<"执行出队操作:"<<endl;  //出队操作
	a.DeQueue( );              
    cout<<"查看队头元素:"<<a.GetQueue()<<endl;
}
