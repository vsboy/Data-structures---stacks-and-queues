//SeqStackMain.cpp
#include <iostream>      //引用输入输出流
using namespace std;
#include "SeqStack.cpp"  //引入成员函数文件
void main()
{    
    SeqStack<int> a;      //创建模板类的实例
    cout<<"对15和10执行入栈操作:"<<endl;
	a.Push(15);
	a.Push(10);   
	cout<<"栈顶元素为:"<<a.GetTop( )<<endl;   //取栈顶元素
	cout<<"执行出栈操作:"<<endl;
	cout<<a.Pop( )<<endl;          //执行出栈操作
    cout<<"栈顶元素为:"<<a.GetTop( )<<endl;
}

