#include <iostream>

using std::cout;
using std::endl;

int main() {
    
    int product = 1;

    
    for (int i = 1; i <= 10; ++i) {
        product = product * i; 
    }

    
    cout << "1부터 10까지 모두 곱한 결과는: " << product << endl;

    return 0;
}