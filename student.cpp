#include<iostream>

using std::cout;
using std::cin;
using std::endl;

class StudentClass{
private:    
    float mark1, mark2, mark3;
    float average;
public:
    char subjek[20];
    void inputMark()
    {
        cout<<"masukkan markah 1: ";
        cin>>mark1;
        cout<<"masukkan markah 2: ";
        cin>>mark2;
        cout<<"masukkan markah 3: ";
        cin>>mark3;
    }

    void kiramark() {
        average = (mark1+mark2+mark3)/3;
    }
    void papar()
    {
        cout<<"purata : "<<average<<endl;
    }
};

class Student {
protected:
    int umur;
    char jantina[20];
    char nama[20];
public:
    StudentClass class_attended;
    void input() {
        cout << "masukkan nama:";
        cin.getline(nama, 20);
        cout << "masukkan jantina:";
        cin.getline(jantina, 20);     
        cout << "masukkan nama subjek:";
        cin.getline(class_attended.subjek,20);
        cout << "masukkan umur:";
        cin >> umur;
    }
};

int main2()
{
    Student atty;
    atty.input();
    atty.class_attended.inputMark();
    atty.class_attended.kiramark();
    atty.class_attended.papar();
}
