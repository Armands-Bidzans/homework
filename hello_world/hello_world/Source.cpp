#include <iostream>
using namespace std;




int main() {
	const int rows = 6;
	const int cols = 4;
	int arr[rows][cols];
	srand(time(NULL));
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % 101;
		}
	}
	for (int i = 0; i < rows; ++i) {
			for (int j = 0; j < cols; ++j) {
				cout << arr[i][j] << " ";
			}
			cout << endl;
	}
	return 0;
}