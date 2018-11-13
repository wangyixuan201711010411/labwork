//Date.h 日期类型定义的头文件
#include<iostream>
using namespace std;
class Date
{
private:
	int year;//private可以缺省，为默认属性
	int month;//数据成员
	int day;
public:
	void SetDate(int, int, int);//对数据成员初始化的公有函数成员
	void Display();//执行显示功能的公有成员函数
	int GetYear();//公有函数成员，提取year变量值
	int GetMonth();//公有函数成员，提取month变量值
	int GteDay();//公有函数成员，提取day变量值
};//切记分号不可省略