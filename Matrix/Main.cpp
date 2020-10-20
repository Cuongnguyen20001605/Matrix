#include<iostream>
using namespace std;

int main()
{
	
	int a[][4]{
		{0,0,0,1},
		{1,0,1,0},
		{0,1,0,0},
		{0,0,0,1},

	};
	int h[][4]{
		{0,0,0,1},
		{1,0,1,0},
		{0,1,0,0},
		{0,0,0,1},

	};
	int count = 0;
	int c[][4]{ {},{},{} ,{} };
	for (int n = 0; n < 2; n++) {
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				c[i][j] = 0;
				for (int k = 0; k < 4; k++) {
					c[i][j] |= (h[i][k] && a[k][j]);
				}
			}
		}
		++count;
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				h[i][j] = c[i][j];
			}
		}
	}
	cout<<"\n";
	cout << "so lan lap:" << count<<"\n";
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << c[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}