const int StackSize=10;  //10ֻ��ʾ���Ե����ݣ����Ը���ʵ��������嶨��
typedef struct
{
	char op;           //�����
	int inputprecedence;//��ջǰ����������ȼ�
	int stackprecedence;//��ջʱ����������ȼ�
}DataType1;

template <class T>       //����ģ����SeqStack
class SeqStack
{
public:
    SeqStack( ) ;            //���캯����ջ�ĳ�ʼ��
	~SeqStack( );            //��������
    void Push(T x);          //��Ԫ��x��ջ
    T Pop( );                //��ջ��Ԫ�ص���
    T GetTop( );	         //ȡջ��Ԫ�أ�����ɾ����
	bool Empty( );           //�ж�ջ�Ƿ�Ϊ��
private:
    T data[StackSize];      //���ջԪ�ص�����
    int top;                //ջ��ָ�룬ָʾջ��Ԫ���������е��±�
};