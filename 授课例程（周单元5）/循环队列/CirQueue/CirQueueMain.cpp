//CirQueueMain.cpp
#include <iostream>        //�������������
#include<ctime>
using namespace std;
#include "CirQueue.cpp"    //�����Ա�����ļ�
void main()
{
    CirQueue<int>a;           //����ģ�����ʵ��
	cout<<"���г��ȣ�"<<a.Length()<<endl;
	a.EnQueue(10); 
	a.EnQueue(15);      //��Ӳ���
	srand(unsigned(time(NULL)));
	int b[6];
	for(int i=0;i<6;i++)
	{
		b[i]=rand()%90+10;
		if(a.Full())
			{
				cout<<"�����������޷�����"<<endl;
				break;
		   }
		else
			a.EnQueue(b[i]);
	}
	cout<<"��ȡ��ͷԪ��:"<<a.GetQueue( )<<endl;   //����ͷԪ��
	cout<<"���г��ȣ�"<<a.Length()<<endl;
	cout<<"ִ�г��Ӳ���:"<<endl;     //���Ӳ���
	a.DeQueue( );                 
    cout<<"��ȡ��ͷԪ��:"<<endl;
	cout<<a.GetQueue( )<<endl;
}