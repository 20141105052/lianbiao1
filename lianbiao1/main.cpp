//
//  main.cpp
//  lianbiao1
//
//  Created by 20141105052 on 15/12/9.
//  Copyright (c) 2015年 20141105052郭孝宇. All rights reserved.
//

#include <iostream>
struct student
{
    char name[100];
    //char sex;
    int age;
    student *next;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    student A,B,C,D;
    student *p,*head;
    head=new student;
    p=head;
    scanf("%s%d",A.name,&A.age);
    scanf("%s%d",B.name,&B.age);
    scanf("%s%d",C.name,&C.age);
    scanf("%s%d",D.name,&D.age);
    A.next=&B;
    B.next=&C;
    C.next=&D;
    D.next=0;
    /*printf("%s %d\n",A.name,A.age);
    printf("%s %d\n",B.name,B.age);
    printf("%s %d\n",C.name,C.age);
    printf("%s %d\n",D.name,D.age);*/
    head=&A;
    p=head;
    while(p!=0)
    {
        printf("%s %d\n",p->name,p->age);
        p=p->next;
    }
    return 0;
}
