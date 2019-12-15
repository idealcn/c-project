#include <string>
using namespace std;
struct Person {
	string name;
	int age;
}lee,john;//结构体定义末尾不能省略;,可以同时声明结构体和创建结构变量。

//共用体union
union one4all {
	int int_val;
	float float_val;
	long long_val;
};

enum Week {
	Monday = 0,Tuesday,Wednesday = 0,Thursday,Friday,Saturday,Sunday
};