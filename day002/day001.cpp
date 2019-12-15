#include <iostream>
#include <cstring>
int main()
{
	using namespace std;
	/* code */
	cout << "hello cpp" << endl;

	long yams[4];
	yams[0] = 1;
	yams[1] = 2;
	yams[2] = 3;
	//初始化数组时，不能缩窄转换？？？
	yams[3] = 10.0;
	cout << " yams[1] = " << yams[1] <<endl;
	//sizeof作用于数组名，返回数组中的字节数
	cout << "sizeof yams = " << sizeof(yams) << endl;
	//sizeof作用于数组元素，返回数组元素的长度
	cout << "sizeof yams[1] = " << sizeof(yams[1]) << endl;

	//字符串
	//c语言定义字符数组来表示字符串，数组最后一位以'\0'结尾,'\0'的ASCⅡ码为0.
	char cArray[] = {'h','e','l','l','o',' ','c',0};
	cout << cArray << endl;

	//c++使用字符串常量或者字符串字面值来表示字符串
	//用引号括起的字符串隐式的包括结尾的空字符，因此不用显示的包括它。
	char bird[] = "little bird";
	//length = 12
	cout << bird << ",length = " << sizeof(bird) / sizeof(char) << endl;
	//strlen返回的是存储在数组中的字符串的长度，strlen只计算可见字符的长度，这里结果是11
	cout << bird << ",length = " << strlen(bird) << endl;
	cout << "little bird can not"
	 " fly" <<endl;
	return 0;
}