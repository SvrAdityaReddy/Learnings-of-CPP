#include <iostream>

using namespace std;

int main() {
	string words[] = {"Hi", "Aditya", "Be", "Good"};
	for(string word : words) {
		cout << word << " "; 
	}
	cout << endl;
	return 0; 
}
