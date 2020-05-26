//
//  Lesson_3.c
//  CPractice
//
//  Created by Jane Liu on 5/25/20.
//  Copyright © 2020 Jane Liu. All rights reserved.
//

#include "Lesson_3.h"
#include<string.h>
#include"Lesson_2.h"
#define Myname "Jane" //preprocessing directive
int main(){
    int age;
    age = 27-1997;
    printf("Jane is %d old\n", age);
    
    int current = 2020;
    int born = 1985;
    printf("Jane is %d old\n", current - born);
    
    char name[13] = "Janeisawesome";
    printf("My name is %s\n", name);
    
    name[2] = 'z';
    printf("My name is %s\n", name);
    
    char food[10]="tuna";
    printf("My best food is %s\n", food);
    
    strcpy(food, "bacon");
    printf("My best food is %s\n", food);
    
    printf("My name is %s\n", Myname);
    
    printf("MyBF name is %s, MyBF age is %d", MyName1, MyAge);
    return 0;
}
