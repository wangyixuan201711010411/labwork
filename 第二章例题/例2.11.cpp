//example2_11.cpp:�������������޸Ķ�Ӧʵ�ʲ���������ֵ
#include<iostream>
using namespace std;
void swap(int &x,int &y)//����֮���������ݾ�ʹ�����ò�����Ϊ���ε���ʵ�ʲ��������ı���
{
    int t=x;//���õ�x��y�ֱ�������ʵ�ʲ��������ı�����ʵ����ʵ�ʲ�������ֵ�Ļ���
    x=y;
    y=t;
}
int main()
{
    int a=3,b=5,c=10,d=20;
    cout<<"a="<<a<<" b="<<b<<endl;//�������ǰ��a��bֵ
    swap(a,b);//���ú��������������൱��ִ����int &x=a;int &y=b;ʹ�����ò�������˳�ֵ
    cout<<"a="<<a<<" b="<<b<<endl;//����������a��bֵ
    cout<<"c="<<c<<" d="<<d<<endl;//�������ǰ��c��dֵ
    swap(c,d);//
    cout<<"c="<<c<<" d="<<d<<endl;//����������c��dֵ
    return 0;
}
