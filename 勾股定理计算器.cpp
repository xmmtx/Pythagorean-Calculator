#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	char a;
	float b,b1,c,c1,d;
	cout<<"��ֱ�Ǳ�(z) or б��(x)��"<<endl;
	cin>>a;
	if(a=='z')
	{
		cout<<"��������ֱ֪�Ǳߣ�";
		cin>>b;
		b1=b*b;
		cout<<"      ������б�ߣ�";
		cin>>c;
		c1=c*c;
		d=sqrt(c1-b1);
		cout<<"  ��һ��ֱ�Ǳ�Ϊ��"<<d<<endl;
		cout<<"----------�������������Ϣ����----------"<<endl;
		cout<<"ֱ�Ǳ�a��"<<b<<endl<<"ֱ�Ǳ�b��"<<d<<endl<<"  б��c��"<<c<<endl;
		cout<<"----------�������������Ϣ����----------";
	}
	else if(a=='x')
	{
		cout<<"�������һ��ֱ�Ǳߣ�";
		cin>>b;
		b1=b*b;
		cout<<"������ڶ���ֱ�Ǳߣ�";
		cin>>c;
		c1=c*c;
		d=sqrt(b1+c1);
		cout<<"            б��Ϊ��"<<d<<endl;
		cout<<"----------�������������Ϣ����----------"<<endl;
		cout<<"ֱ�Ǳ�a��"<<b<<endl<<"ֱ�Ǳ�b��"<<c<<endl<<"  б��c��"<<d<<endl;
		cout<<"----------�������������Ϣ����----------";
	}
	else
	{
		cout<<"����������������롣"; 
	}
	cout<<endl<<"�����κ��ַ���ȷ�Ͻ�����»س����˳�����"<<endl;
	cin>>a;
	return 0;
}
