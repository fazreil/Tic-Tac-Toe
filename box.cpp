#include<iostream.h>

class box {
protected:
    int width, heigth;
public:

    void setwidth(int w) {
        width = w;
    }

    void setheigth(int h) {
        heigth = h;
    }
};
class coloredbox : public box {
        int color;
    public:

        coloredbox() {
            cout << "box measure"<<endl;
        }

        ~coloredbox() {
            cout << "box measure"<<endl;
        }

        void setcolor(int c) {
            color = c;
        }

        void show() {
            cout << "box width:" << width <<endl;
            cout << "box heigth:" << heigth <<endl;
            cout << "box color:" << color <<endl;
        }
    };

    int maincolor() {
        coloredbox cb;
        cb.setcolor(4);
        cb.setwidth(4);
        cb.setheigth(65);
        cb.show();
        return 0;
    }

