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
	
	return 0;
}