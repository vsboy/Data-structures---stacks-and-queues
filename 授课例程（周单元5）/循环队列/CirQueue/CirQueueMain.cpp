//CirQueueMain.cpp
#include <iostream>        //引用输入输出流
#include<ctime>
using namespace std;
#include "CirQueue.cpp"    //引入成员函数文件
void main()
{
    CirQueue<int>a;           //创建模版类的实例
	cout<<"队列长度："<<a.Length()<<endl;
	a.EnQueue(10); 
	a.EnQueue(15);      //入队操作
	srand(unsigned(time(NULL)));
	int b[6];
	for(int i=0;i<6;i++)
	{
		b[i]=rand()%90+10;
		if(a.Full())
			{
				cout<<"队列已满，无法进队"<<endl;
				break;
		   }
		else
			a.EnQueue(b[i]);
	}
	cout<<"读取队头元素:"<<a.GetQueue( )<<endl;   //读队头元素
	cout<<"队列长度："<<a.Length()<<endl;
	cout<<"执行出队操作:"<<endl;     //出队操作
	a.DeQueue( );                 
    cout<<"读取队头元素:"<<endl;
	cout<<a.GetQueue( )<<endl;
}