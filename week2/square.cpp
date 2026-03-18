#include <iostream>
#include <string>

// 표준 라이브러리에서 가져와서 사용할 이름을 언급
using std::cin; using std::cout;
using std::endl; using std::string;

int main(void) {
	cout << "1. Square or 2. rect? >>>";
	int option;
	cin >> option;
	cout << " what size square?";

	int size;
	cin >> size;
	
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << "*";

		}
		if (option == 1) {
			cout << "*";
		}
		else if (option == 2) {
			cout << "**";

		}
		else {
			cout << "error: only choose 1 or 2 ";
			return 0;
		}
		cout << endl;
	}
	return 0;
}