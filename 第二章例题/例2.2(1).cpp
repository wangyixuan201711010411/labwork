//ecample2_02_method1.cpp:���ַ��ų�����������𣬷���һ���ú궨�嶨����ų���
#include<iostream>
using namespace std;
int main()
{
    int x=5;
    #define T1 x+x //��5���ú궨�嶨����ų���T1
    #define T2 T1-T1 //��6���ú궨�嶨����ų���T2
    cout<<"T1="<<T1<<" T2="<<T2<<endl;
    return 0;
}
