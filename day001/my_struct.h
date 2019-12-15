//
// Created by guoning on 2019/8/7.
//

#ifndef DAY001_MY_STRUCT_H
#define DAY001_MY_STRUCT_H

struct Person{
    int age;
    char name[20];
    char address[30];
} ;

typedef struct {
    char first[10];
    char middle[10];
    char last[10];
} Person_Name;

struct Student {
    int age;
    char name[20];
} Andy;
struct {

} P1,P2;
typedef struct {
    int number;
    Person_Name name;
} Part;



void print_part(Part part);
#endif //DAY001_MY_STRUCT_H
