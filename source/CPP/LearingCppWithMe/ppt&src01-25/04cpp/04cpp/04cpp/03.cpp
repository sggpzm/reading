#include <iostream>
using namespace std;

// ������Ϊ��������

void swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

int main(void)
{
	int a = 5;
	int b = 6;

	swap(a, b);		// �ں�������ʱ�����ñ���ʼ�� x = a, y = b;

	cout<<"a="<<a<<" b="<<b<<endl;
	return 0;
}