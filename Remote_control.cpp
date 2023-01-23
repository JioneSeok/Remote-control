#include <iostream>

using namespace std;

class TV {
    bool powerOn;
    int channel;
    int volume;

public:
    void on() {
        powerOn = true;
        cout << "TV�� �׽��ϴ�." << endl;
    }

    void off() {
        powerOn = false;
        cout << "TV�� �����ϴ�." << endl;
    }

    void setChannel(int cnl) {
        if (cnl >= 1 && cnl <= 999) {
            channel = cnl;
            cout << "ä���� " << cnl << "(��)�� �ٲ���ϴ�." << endl;
        }
    }

    void setVolume(int vol) {
        if (vol >= 0 && vol <= 100) {
            volume = vol;
        cout << "������ " << vol << "(��)�� �ٲ���ϴ�." << endl;

        }
    }
};

int main() {
    TV lg;

    lg.on();
    lg.setVolume(50);
    lg.setChannel(40);

}