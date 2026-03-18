#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int num1, num2;

    cout << "첫 번째 숫자 입력: ";
    cin >> num1;
    cout << "두 번째 숫자 입력: ";
    cin >> num2;
    
    if (num1 > num2) {
        cout << "더 큰 숫자는 " << num1 << "입니다." << endl;
    }
    else if (num1 < num2) {
        cout << "더 큰 숫자는 " << num2 << "입니다." << endl;
    }
    else {
        cout << "두 숫자는 같습니다." << endl;
    }

    return 0;
}