#include<iostream>
#include<string>
#include<cctype>
#include "expseqstack.cpp"
using namespace std;
DataType1 MathOptr(char ch) //为不同的运算符赋值优先级
{
	DataType1 optr;
	optr.op=ch;
	switch(optr.op)
	{
	case'+':
    case'-': optr.inputprecedence=1;
		     optr.stackprecedence=1;
			 break;
    
    case'*':
    case'/': optr.inputprecedence=2;
		     optr.stackprecedence=2;
			 break;
    case'(': optr.inputprecedence=3;
		     optr.stackprecedence=-1;
			 break;
    case')': optr.inputprecedence=0;
		     optr.stackprecedence=0;
			 break;
	}
	return(optr);
}
int isoptr(char ch)//判断输入的字符是否为算术运算符
{
	if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
		return(1);
	return(0);
}
template <class T>
void Evaluate(SeqStack<T>*OpndStack,DataType1 optr)//计算某一符号的表达式的值，结果进数据栈；
{
	T opnd1,opnd2;
	opnd1=OpndStack->Pop();
	opnd2=OpndStack->Pop();
	switch(optr.op)
	{
	case'+':OpndStack->Push(opnd2+opnd1);
		break;
    case'-':OpndStack->Push(opnd2-opnd1);
		break;
    case'*':OpndStack->Push(opnd2*opnd1);
		break;
    case'/':OpndStack->Push(opnd2/opnd1);
		break;
	}
}
void Infix(char *str)
{
	int i,k;
	char ch,numstr[10];
	float opnd;
	DataType1 optr,temp;
	SeqStack<float> OpndStack;
	SeqStack<DataType1> OptrStack;
	k=0;
	ch=str[k];
	while(ch!='=')
		if(isdigit(ch)||ch=='.')
		{
			for(i=0;isdigit(ch)||ch=='.';i++)
				{
					numstr[i]=ch;
					k++;
					ch=str[k];
				}
				numstr[i]='\0';
				opnd=atof(numstr);
				OpndStack.Push(opnd);
		}
		else
		{
			optr=MathOptr(ch);
			if(ch=='(') 
				{
					OptrStack.Push(optr);
					k++;
					ch=str[k];
				}
			else if(isoptr(ch))
				{
					while(!OptrStack.Empty () && OptrStack.GetTop().stackprecedence>=optr.inputprecedence)
						Evaluate(&OpndStack,OptrStack.Pop());
					OptrStack.Push(optr);
					k++;
					ch=str[k];
				}
			else if(ch==')')
			{
				while(!OptrStack.Empty () && OptrStack.GetTop().op!='(')
					Evaluate(&OpndStack,OptrStack.Pop());
				if(!OptrStack.Empty ())
					temp=OptrStack.Pop();
				k++;
				ch=str[k];
			}
		}
		while(!OptrStack.Empty ())
			Evaluate(&OpndStack,OptrStack.Pop());
		opnd=OpndStack.Pop();
		cout<<"表达式的值为"<<opnd<<endl;
}
void main()
{
	char str[50];
	gets(str);
	Infix(str);
}
