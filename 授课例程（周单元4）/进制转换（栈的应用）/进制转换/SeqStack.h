//SeqStack.h
#ifndef SEQSTACK_H
#define SEQSTACK_H
const int StackSize=40;  //40ֻ��ʾ���Ե����ݣ����Ը���ʵ��������嶨��
template <class T>       //����ģ����SeqStack
class SeqStack
{
public:
    //template <class T>
    //  friend ostream& operator<<(ostream &,const SeqStack<T>&); //�������ջ��Ԫ��
	SeqStack( );            //���캯����ջ�ĳ�ʼ��
	SeqStack(T a[], int n );	//���캯����ջ�ĳ�ʼ��
	~SeqStack( );            //��������
    void Push(T x);          //��Ԫ��x��ջ
    T Pop( );                //��ջ��Ԫ�ص���
    T GetTop( );	         //ȡջ��Ԫ�أ�����ɾ����
	bool Empty( );			 //�ж�ջ�Ƿ�Ϊ��
	int StackLength();
	void print();
private:
    T data[StackSize];      //���ջԪ�ص�����
    int top;                //ջ��ָ�룬ָʾջ��Ԫ���������е��±�
};

#endif