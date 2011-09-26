#include<iostream.h>

class base {
protected:
    int jejari;
    int tinggi;
public:

    void setjejari(int w) {
        jejari = w;
    }

    void settinggi(int h) {
        tinggi = h;
    }
};

    class calculate : public base {
    public:

        calculate() {
            cout << "jejari" <<endl;
        }

        ~calculate() {
            cout << "jejari" <<endl;
        }

        void show() {
            cout << "jejari:" << jejari <<endl;
            cout << "tinggi:" << tinggi <<endl;
            cout << "volume:" << jejari*tinggi <<endl;
        }
    };

    int mainbase() {
        calculate cb;
        cb.setjejari(4);
        cb.settinggi(4);
        cb.show();
        return 0;
    }
