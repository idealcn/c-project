#include <iostream>
#include "Person.hpp"
using namespace std;

int main() {
	Person p;
	p.name = "ideal";
	
	Person *pointer = &p;
	cout << "p pointer address => " << &p << endl;
	cout << "p pointer address => " << pointer->name<< endl;
	(*pointer).name = "ideal0424";
	cout << "after update p name => " << pointer->name<< endl;
	
	//使用new分配内存,在运行阶段分配内存。
	//不同类型的指针的长度是一样的，它们都是地址
	//new分配的内存块位于堆heap或者自由存储区，常规变量分配的内存块位于栈stack区。
	int *pn = new int;
	double *pd = new double;
	
	*pn = 10;
	*pd = 2000.0;
	
	cout << "*pn => " <<*pn << ",size => " << sizeof(pn) << endl;

	cout << "*pd => " <<*pd << ",size => " << sizeof(pd) << endl;
	

	
	//使用delete释放内存，使用delete时，后面要加上指向内存块的指针(这些内存块最初是用new分配的)
	//释放pn和pd指向的内存，但不会删除指针本身。
	delete pn;
	delete pd;
	cout << "after delete *pn  => " << *pn << ",*pd  => " << *pd <<endl;
	cout << "after delete pn size => " << sizeof(pn) << ",pd size => " << sizeof(pd) <<endl;
	//new和delete要配对使用，否则会发生内存泄露。不能用delete释放声明变量所获得的内存,delete对空指针是安全的。
	/*
	int n = 10;
	int *pn = &n;
	delete pn;//not allowed,memory not allocated by new
	*/
	
	
	
	//使用new创建动态数组
	int size = 10;
	int* parr = new int[size];
	
	for (int i = 0 ; i < size ; i++){
		//把指针当做数组名来使用
		parr[i] = i;
	}
	
	cout << "parr[5] => " << parr[5] << endl;
	
	//指针的算术运算,可加减，不可乘除
	//将指针变量加1后，增加的量等于它指向的类型的字节数。例如：将指向double的指针加1后，如果系统对double使用8个字节存储，则数值将增加8；
	//将指向short的指针加1后，如果系统对short使用2个字节存储，则指针值将增加2。
	//c++将数组名解释为地址。
	cout << "指向第1个元素 => " << *parr <<endl;
	cout << "指向第3个元素 => " << *(parr+2) <<endl;
	//释放数组指针
	delete [] parr;
	
	//c++将数组名解释为第一个元素的地址，对数组名应用地址运算符得到的是整个数组的地址。虽然这两个地址从数字上来看相同。
	long dl[10] = {};
	cout<< "&dl => " << dl << ",&dl[0] => " << &dl[0] << endl; 
	//对数组名取地址得到的是整个数组的地址
	cout << "&dl => " << &dl <<endl;
	//dl作为数组名
	cout << "&dl[1] => " << &dl[1]  << endl;
	//dl作为指针
	cout << " &(dl+1) => " << dl+1 << endl; 
	//求数组长度,sizeof(数组名)返回数组的字节总长度
	//sizeof(数据类型)返回该类型占用的字节长度
	cout << "dl length => " << sizeof(dl) / sizeof(long)<< endl;
	
	//释放数组
//	delete &dl;
	return 0;
}