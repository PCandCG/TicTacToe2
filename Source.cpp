#include <iostream>
using namespace std;

char grid[3][3];

int main() {
	for (int n = 3; n > 0; n--) {
		for (int i = 3; n > 0; n--) {
			grid[n-1][i-1] = '-';
		}
	}
	cout << grid[0][0] << grid[0][1] << grid[0][2] << endl << grid[1][0] << grid[1][1] << grid[1][2] << endl << grid[2][0] << grid[2][1] << grid[2][2];
	system("PAUSE");
	return 0;
}