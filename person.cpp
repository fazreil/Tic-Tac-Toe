#include<iostream.h>
#include<string.h>

class person {
private:
    char person_name[20];
    int person_id;
public:
    void get_data(int,const char*);
    void display_data();
};

class student : public person {
private:
    int stud_no, stud_mark;
public:
    void get_data(int, int);
    void display_data();
};

void person::get_data(int id,const char*name) {
    cout << "entering personal data..."<<endl;
    person_id = id;
    strcpy(person_name, name);
}

void person::display_data() {
    cout << "displaying personal data..."<<endl;
    cout << "person number:" << person_id <<endl;
    cout << "person_name:" << person_name <<endl;
    cout << endl;
}

void student::get_data(int stud, int mark) {
    cout << "entering student data..."<<endl;
    stud_no = stud;
    stud_mark = mark;
}

void student::display_data() {
    cout << "displaying student data..."<<endl;
    cout << "student number:" << stud_no <<endl;
    cout << "student mark:" << stud_mark <<endl;
    cout << endl;
}

int main() {
    person person1;
    person1.get_data(111, "lim");
    person1.display_data();
    student student1;
    student1.get_data(22, 77);
    student1.display_data();


    //call get_data()and display_data() function from class person
    student sfaizah;
    sfaizah.person::get_data(33,"faizah");
    sfaizah.person::display_data();
    sfaizah.get_data(44, 99);
    sfaizah.display_data();

    return 0;
}
