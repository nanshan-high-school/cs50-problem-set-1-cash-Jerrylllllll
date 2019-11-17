#include <iostream>
using namespace std;

int main() {
    int money;
    cout << "請輸入錢錢:";
    cin >> money;

    int thousand, hundred, ten, five, one;
    int total;

    do {
        thousand = money / 1000;
        money -= thousand * 1000;
        hundred = money / 100;
        money -= hundred * 100;
        ten = money / 10;
        money -= ten * 10;
        five = money / 5;
        money -= five * 5;
        one = money / 1;
        cout << "總共";
        cout << one + five + ten + hundred + thousand;
        cout << "個";
    } while (money >= 10000);    
} 
