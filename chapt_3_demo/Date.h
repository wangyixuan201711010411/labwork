//Date.h �������Ͷ����ͷ�ļ�
#include<iostream>
using namespace std;
class Date
{
private:
	int year;//private����ȱʡ��ΪĬ������
	int month;//���ݳ�Ա
	int day;
public:
	void SetDate(int, int, int);//�����ݳ�Ա��ʼ���Ĺ��к�����Ա
	void Display();//ִ����ʾ���ܵĹ��г�Ա����
	int GetYear();//���к�����Ա����ȡyear����ֵ
	int GetMonth();//���к�����Ա����ȡmonth����ֵ
	int GteDay();//���к�����Ա����ȡday����ֵ
};//�мǷֺŲ���ʡ��