#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "my_error.h"
#include "my_struct.h"
#include "my_enum.h"
struct {
    char  name[20];
    int32_t age;
} teacher;
struct node {
    int value;
    struct node *next;
};

void new_cmd();
void delete_cmd();
void close_cmd();
void close_all_cmd();
void save_cmd();
void save_all_cmd();
void save_as_cmd();
void print_cmd();
void exit_cmd();
typedef struct  {
    unsigned int day : 5;
}FileDate;
double integrate(double (*f)(double), double, double);
int main() {



    printf("teacher name=%s\tage=%d\n",teacher.name,teacher.age);

    struct Person XiaoHong = {10,"xiaohong","hangzhou"};
    //结构体中的数据也得到了复制
    struct Person XiaoMing = XiaoHong;

    printf("name=%s\taddress=%s\n",XiaoMing.name,(&XiaoMing)->address);
    printf("%p\n",&XiaoHong.name);

    struct Student student = {10,"andy"};
    printf("student: name = %s\t age=%d\n",(&student)->name,(&student)->age);
    struct Student Andy = {20,"little andy"};
    printf("Andy: name = %s\t age=%d\n",(&Andy)->name,(&Andy)->age);

    //只有typedef声明的结构体，才可以省略struct
    Part part = {10,"part"};
    printf("Part: name = %s\t age=%d\n",(&(&part)->name)->first,(&part)->number);

  //  print_part((Part){100,"复合字面量"});

  char source[20] = "source to target";
  char *target = (char *) malloc(sizeof(source)+1);
  if (target != NULL){
      strcpy(target,source);
      printf("target=%s\n",target);
  }
//    strncpy()
    enum WeekDay weekDay = Friday;

  /*在链表首端插入数据*/
 /*
  struct node *first = NULL;
  struct node *new_node = malloc(sizeof(struct node));
    new_node->value = 10;
    new_node->next = first;
    first = new_node;
    new_node = malloc(sizeof(struct node));
    new_node->value = 20;
    new_node->next=first;
    first = new_node;
    struct node *ptr = first;
    //遍历链表
//    for (; ptr; ptr = ptr->next) {
//        printf("value=%d\t",ptr->value);
//    }

while (ptr){
    printf("value=%d\t",ptr->value);
    ptr=ptr->next;
}
  */
 /*在链表尾端插入数据*/
 struct node *header = malloc(sizeof(struct node));
    struct node *pre = header;
    struct node *next = malloc(sizeof(struct node));
    next->value = 10;
    pre->next = next;
    next->next = NULL;
    pre = next;


    next = malloc(sizeof(struct node));
    next->value = 20;
    pre->next = next;
    next->next = NULL;
    pre = next;

    struct node *ptr = header;
    while (ptr){
        printf("value = %d\n",ptr->value);
        ptr = ptr->next ;
    }

    printf("\n");


    //指向函数的指针
    void (*file_cmd[])(void) = {new_cmd,delete_cmd,close_cmd,close_all_cmd,save_cmd,save_as_cmd,save_all_cmd,print_cmd,exit_cmd};
    //file_cmd[3]();
    (*file_cmd[4])();

    static const int f = 10;
    register const float f_n = 10.0f;

    // 位运算符
    unsigned short i ,j;
    i = 21;//1101
    j = i << 2;
    printf("j = %d\n",j);
    printf("j = %d\n",i >> 2);
    printf("~取反：i = %d\n",~i);

    int k = 0000000000001100 ^ 0000000000001001;
    printf("k = %d\n",k);

    printf("%d\n",0x0010);


    {
        int x = 1, y = 1, z = 0;
        //&&优先级大于||
        int m = x || (!y && z) ;
        printf("m=%d\n",m);


        x = 03,y=02,z =01;
        printf("%d\n",y & ~z);

    }

    //输入输出
    FILE *fp;
    fp = fopen("G:\\workspace\\c-project\\day001\\test.txt","rw");
    if (!fp){
        printf("文件打开失败");
        exit(0);
    }

    printf("float = %f\n",5.0/9.0);
    printf("int = %d\n",5/9);

    fprintf(stderr,"error warning");
    return 0;
}

void new_cmd(){
   printf("---------new-----\n") ;
}
void delete_cmd(){
    printf("---------delete-----\n") ;

}

void close_cmd(){
    printf("---------close-----\n") ;

}
void close_all_cmd(){
    printf("---------close all-----\n") ;

}
void save_cmd(){
    printf("---------save-----\n") ;

}
void save_all_cmd(){
    printf("---------save all-----\n") ;

}
void save_as_cmd(){
    printf("---------save as -----\n") ;

}
void print_cmd(){
    printf("---------print-----\n") ;

}
void exit_cmd(){
    printf("---------exit-----\n") ;

}
/*
double integrate(double *f, double a, double b){

}*/
