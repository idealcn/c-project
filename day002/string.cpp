#include <cstring>
#include <iostream>
#include <istream>
#include <vector>
#include <cstdlib>
//#include "G:/jdk/jdk/include/jni.h"


int main(int argc, char const *argv[])
{
	using namespace std;
	const int size = 10;
	char name[size];
	char dessert[size];
	//cout << "your name : ";
	//输入
	//cin >> name ;
	//cout << "enter your favorite dessert: \n";
	//cin >> dessert;
	//cout <<"your input is " << name << " your favorite is " << dessert << endl;


	/*
	面向行的输入 getline()和get()
	这两个函数都读取一行输入，直到到达换行符。然而随后getline()将丢弃换行符，而get()将换行符保留在输入序列中。
	*/
	// std::cout << "your name is ";
	// std::cin.getline(name,size);
	// std::cout << "your favorite is ";
	// std::cin.get(dessert,size);
	// std::cout << "your name is "<<name << " your favorite is "<< dessert << std::endl;	
	// std::cout << "name length is " << strlen(name) << ",facorite length is " << strlen(dessert) << endl;



	/*
	要使用string类，必须在程序中包含头文件string。string类位于名称空间std中，因此必须提供一条using编译指令，或者使用std::string来引用它。
	*/
	std::string str = "hello string";
	std::cout << str <<std::endl;
	
	
	
	return 0;
};