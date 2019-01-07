//LinkStackMain.cpp
#include <iostream>       //引用输入输出流
using namespace std;
#include "LinkStack.cpp"  //引入成员函数文件

void main( )
{ 
    LinkStack<int>a;             //创建模板类的实例
	cout<<"对10进行压栈操作:"<<endl;    //入栈操作
    a.Push(10);
	cout<<"读取栈顶元素:"<<a.GetTop( )<<endl;       //读栈顶元素
	cout<<"对15栈进行压栈操作:"<<endl;
	a.Push(15);
	cout<<"读取栈顶元素:"<<a.GetTop( )<<endl;
	cout<<"进行出栈操作:"<<endl;    //出栈操作   
	a.Pop( );
	cout<<"读取栈顶元素:"<<a.GetTop( )<<endl;
}