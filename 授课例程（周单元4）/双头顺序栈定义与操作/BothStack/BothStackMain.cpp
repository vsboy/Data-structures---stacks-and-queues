//BothStackMain.cpp
#include <iostream>     //进入输入输出流
using namespace std;
#include "BothStack.cpp"  //引入成员函数文件
void main( )
{ 
    BothStack<int> a;             //创建模板类的实例
	cout<<"对栈1进行压栈操作:"<<endl;
	a.Push(1,10);
	a.Push(1,12);
	cout<<"栈1的栈顶元素为:"<<a.GetTop(1)<<endl;   //读取栈顶元素
	cout<<"对栈1执行出栈操作:"<<endl;             //出栈操作
	a.Pop(1);                     
    cout<<"栈1的栈顶元素为:"<<a.GetTop(1)<<endl;   //读取栈顶元素
	cout<<"对栈2进行压栈操作:"<<endl;
	a.Push(2,20);
	a.Push(2,32);
	cout<<"栈2的栈顶元素为:"<<a.GetTop(2)<<endl;   //读取栈顶元素
	cout<<"对栈2执行出栈操作:"<<endl;             //出栈操作
	a.Pop(2);                     
    cout<<"栈2的栈顶元素为:"<<a.GetTop(2)<<endl;   //读取栈顶元素
} 