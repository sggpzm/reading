#include <iostream>
using namespace std;

class Test
{
public:
	Test(int y) : y_(y)
	{

	}
	~Test()
	{

	}

	void TestFun()
	{
		cout<<"x="<<x_<<endl;	//OK,�Ǿ�̬��Ա�������Է��ʾ�̬��Ա
		TestStaticFun();
	}
	static void TestStaticFun()
	{
		cout<<"TestStaticFun ..."<<endl;
		//TestFun();		Error,��̬��Ա�������ܵ��÷Ǿ�̬��Ա����
		//cout<<"y="<<y_<<endl;		Error,��̬��Ա�������ܷ��ʷǾ�̬��Ա
	}
	static int x_;		// ��̬��Ա��������˵��
	int y_;
};

int Test::x_ = 100;		// ��̬��Ա�Ķ�����˵��

int main(void)
{
	Test t(10);
	cout<<Test::x_<<endl;
	t.TestFun();

	cout<<t.x_<<endl;		// ���Է��ʣ������Ƽ���ôʹ��
}