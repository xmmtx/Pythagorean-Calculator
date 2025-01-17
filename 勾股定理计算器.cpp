#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	char a;
	float b,b1,c,c1,d;
	cout<<"求直角边(z) or 斜边(x)？"<<endl;
	cin>>a;
	if(a=='z')
	{
		cout<<"请输入已知直角边：";
		cin>>b;
		b1=b*b;
		cout<<"      请输入斜边：";
		cin>>c;
		c1=c*c;
		d=sqrt(c1-b1);
		cout<<"  另一条直角边为："<<d<<endl;
		cout<<"----------该三角形相关信息如下----------"<<endl;
		cout<<"直角边a："<<b<<endl<<"直角边b："<<d<<endl<<"  斜边c："<<c<<endl;
		cout<<"----------该三角形相关信息如上----------";
	}
	else if(a=='x')
	{
		cout<<"请输入第一条直角边：";
		cin>>b;
		b1=b*b;
		cout<<"请输入第二条直角边：";
		cin>>c;
		c1=c*c;
		d=sqrt(b1+c1);
		cout<<"            斜边为："<<d<<endl;
		cout<<"----------该三角形相关信息如下----------"<<endl;
		cout<<"直角边a："<<b<<endl<<"直角边b："<<c<<endl<<"  斜边c："<<d<<endl;
		cout<<"----------该三角形相关信息如上----------";
	}
	else
	{
		cout<<"输入错误，请重新输入。"; 
	}
	cout<<endl<<"输入任何字符以确认结果后按下回车，退出程序。"<<endl;
	cin>>a;
	return 0;
}
