#include<iostream>
using namespace std;
#define maxsize 100
#include<malloc.h>
typedef struct S
{
	int data[maxsize];
	int top;
}S;

void menu()
{
	cout<<"***************��ӭʹ��˳��ջ***************"<<endl;
	cout<<"**************1����ջ****************"<<endl;
	cout<<"**************2����ջ****************"<<endl;
	cout<<"**************3����ջ��Ԫ�ظ���******"<<endl;
	cout<<"**************4��ȡջ��Ԫ��**********"<<endl;
	cout<<"**************5������˳��ջ**********"<<endl;
	cout<<"**************6���ÿ�ջ**************"<<endl;
	cout<<"**************7���˳�****************"<<endl;
	cout<<endl; 
	cout<<"�����������Ҫѡ����Ӧ�����"<<endl; 
}

S * SequenStack()
{
	S *s;
	s=(S*)malloc(sizeof(S));
	s->top=-1;
	return s;
}//��ʼ��˳��ջ 

int s_length(S* s)
{
	return(s->top+1);
}//ջ��

int push(S* s,int x)
{
	if(s->top>=maxsize-1){
		return 0;
	}
	else
	{
		s->top++;
		s->data[s->top]=x;
		return 1;
	}
} //��ջ 

void s_push(S* s)
{
	cout<<"������Ҫ��ջ��Ԫ��"<<endl;
	int x,q;
	cin>>x;
	q=push(s,x);
	if(q)
	{
		cout<<x<<"����ջ"<<endl;
	}
	else
	{
		cout<<"ջ������������ջ"<<endl;
	}
}//��ջ���ܺ���
 
int pop(S* s,int *x)
{
	if(s->top==-1){
		return 0;
	}
	else
	{
        s->top--;
        *x=s->data[s->top+1];
        return 1;
	}
} //��ջ 

void s_pop(S *s)
{
	int x,f;
	f=pop(s,x);
	if(f)
	{
		cout<<"��ջ�ɹ�"<<endl;
	}
	else
	{
		cout<<"ջ�ѿ�"<<endl;
	}
}//��ջ���ܺ��� 

int gettop(S *s,int *x)
{
	if(s->top==-1){
		return 0;
	}
	else
	{
        *x=s->data[s->top];
        return 1;
}//ȡջ��Ԫ��

void s_gettop(S *s)
{
	
 }//ȡջ��Ԫ�غ��� 
 
void bianli(S* s)
{
	for(int i;i<=s->top+1;i++)
	cout<<s->data[i]<<endl;
}//�������˳��ջ

void zhikong(S *s)
{
	if(s->top==-1){
		return 0;
	}
	else
	{
		while(s->top!=-1){
			s->top--;
			
		}
	}
 } //�ÿ�ջ 
 
int main()
{
	int a;
	S p;
	S *s=&p;
	SequenStack(s);
	while(1)
	{
		menu();
		cin>>a;
		if(a==7) break;
		switch(a)
		{
			case 1:
				s_push(s);
				break;
			case 2:
				s_pop(s);
				break;
			case 3:
				s_length;
				break;
			case 4:
				s_gettop(s);
				break;
			case 5:
				bianli(s);
				break;
			case 6:
				zhikong(s);
				break;
		}
	}
}
