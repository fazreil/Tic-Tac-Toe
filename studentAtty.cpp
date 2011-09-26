#include<iostream.h>
class student { 
protected:
    int umur;
    char jantina[20];
    char nama[20];
public:
    void input() {
        cout << "masukkan nama: ";cin.getline(nama, 20);
        cout << "masukkan jantina: ";cin.getline(jantina, 20);
        cout << "masukkan umur: ";cin>>umur;
    }
};
class student_id: public student{
private:
    char subjek[20];
    float mark1, mark2, mark3, average;
public:
    void kiramark() {
        cout << " purata = "<<(mark1 + mark2 + mark3) / 3;
        average = (mark1 + mark2 + mark3) / 3;
    }
    void papar() {
        cout << "purata : " << average << endl;
    }
    void input() {
        cin.get();cout << "masukkan nama: ";cin.getline(nama, 20);
        cout << "masukkan jantina: ";cin.getline(jantina, 20);
        cout << "masukkan umur: ";cin>>umur;
        cout << "masukkan mark1: ";cin>>mark1;
        cout << "masukkan mark2: ";cin>>mark2;
        cout << "masukkan mark3: ";cin>>mark3;
    }
};
int main1() {
    student atty;    
    atty.input();
    student_id izzatty;
    izzatty.input();
    izzatty.kiramark();
    izzatty.papar();
}
