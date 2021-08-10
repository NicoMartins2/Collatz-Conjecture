// default libs
#include <iostream>
#include <stdlib.h>

// sleep import by system
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

int main() {
	int num;
	
	// asking the number
	cout << "Write a number: ";
	cin >> num;
	
	while (num != 1) {
		int verify_num = num % 2;

		// even numbers
		if (verify_num == 0) {
			num = num / 2;
			Sleep(100);
			cout << num << endl;
		}
		
		
		// odd numbers
		else if (verify_num != 0) {
			num = num * 3 + 1;
			Sleep(100);
			cout << num << endl;
		}
		
		
		// negative numbers
		if(num < 0) {
			cout << "Error! The number cannot be negative." << endl;
			break;
		}
	}
	
	return 0;
}