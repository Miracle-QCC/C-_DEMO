#include<iostream>
/*
C++的结构体在初始化时可以省略struct关键字，而C不能省
*/
struct student
{
    /* data */
    char name[20];
    int age;
};

int main(int argc, char* argv[]){
    using namespace std;
    student s1 = {
        "liming",
        12,
    };
    student s2{ 
        "liming",
        12,
    };
    cout << s1.age << endl;
}