#include <string>
#include <iostream>
#include "Person.hpp"
using namespace std;
struct Student {
	//定义结构体不能使用using namespace？？？
	//using namespace std;
	//std::cout << "init" << std::endl;
	std::string name;
	int age;
};
int main(){
	using namespace std;
	std::cout << "before" << std::endl;
	//c++允许在声明结构变量时省略关键字struct
	Student student = { "ideal" , 19};
	std::cout << "after" << std::endl;

	cout << "student name is " << student.name << ",age is " << student.age << endl;
	
	student.age += 10;
	
	cout << "update student age is " << student.age << endl;
	
	Person person = { "p_ideal",20};
	cout << "person name is " << person.name << endl;
	
	lee.name = "lee";
	lee.age = 10;
	
	john.name = "john";
	john.age = 11;
	
	
	//共用体
	one4all all;
	all.int_val = 10;
	cout << "共用体 ： " <<  all.int_val <<endl;
	
	//枚举
	Week week;
	week = Sunday;
	
	return 0;
}