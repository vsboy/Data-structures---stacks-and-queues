//LinkQueueMain.cpp
#include<iostream>       //�������������
using namespace std;
#include"LinkQueue.cpp"  //�����Ա�����ļ�
void main()
{
    LinkQueue<int> a;         //����ģ�����ʵ�� 
	a.EnQueue(10);             //��Ӳ���
	cout<<"�鿴��ͷԪ��:"<<a.GetQueue( )<<endl;  //����ͷԪ��
	a.EnQueue(15);
    cout<<"�鿴��ͷԪ��:"<<a.GetQueue()<<endl;
	cout<<"ִ�г��Ӳ���:"<<endl;  //���Ӳ���
	a.DeQueue( );              
    cout<<"�鿴��ͷԪ��:"<<a.GetQueue()<<endl;
}
