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
	cout<<"***************欢迎使用顺序栈***************"<<endl;
	cout<<"**************1、入栈****************"<<endl;
	cout<<"**************2、出栈****************"<<endl;
	cout<<"**************3、求栈的元素个数******"<<endl;
	cout<<"**************4、取栈顶元素**********"<<endl;
	cout<<"**************5、遍历顺序栈**********"<<endl;
	cout<<"**************6、置空栈**************"<<endl;
	cout<<"**************7、退出****************"<<endl;
	cout<<endl; 
	cout<<"请根据您的需要选择相应的序号"<<endl; 
}

S * SequenStack()
{
	S *s;
	s=(S*)malloc(sizeof(S));
	s->top=-1;
	return s;
}//初始化顺序栈 

int s_length(S* s)
{
	return(s->top+1);
}//栈长

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
} //入栈 

void s_push(S* s)
{
	cout<<"请输入要入栈的元素"<<endl;
	int x,q;
	cin>>x;
	q=push(s,x);
	if(q)
	{
		cout<<x<<"已入栈"<<endl;
	}
	else
	{
		cout<<"栈已满，不能入栈"<<endl;
	}
}//入栈功能函数
 
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
} //出栈 

void s_pop(S *s)
{
	int x,f;
	f=pop(s,x);
	if(f)
	{
		cout<<"出栈成功"<<endl;
	}
	else
	{
		cout<<"栈已空"<<endl;
	}
}//出栈功能函数 

int gettop(S *s,int *x)
{
	if(s->top==-1){
		return 0;
	}
	else
	{
        *x=s->data[s->top];
        return 1;
}//取栈顶元素

void s_gettop(S *s)
{
	
 }//取栈顶元素函数 
 
void bianli(S* s)
{
	for(int i;i<=s->top+1;i++)
	cout<<s->data[i]<<endl;
}//遍历输出顺序栈

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
 } //置空栈 
 
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
