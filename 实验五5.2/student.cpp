#include <iostream>
#include"student.h"           
void Student::display()         
{
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
}
void Student::set_value() {
    num = 007;
    name = "tcg";
    sex = 'm';
}
