#include <iostream>
using namespace std;

int main()
{
    int matriz [3] [3] [3] = {
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	},
	{
		{10, 11, 12},
		{13, 14, 15},
		{16, 17, 18}
	},

	{
		{100, 101, 102},
		{103, 104, 105},
		{106, 107, 108}
	}
};

for (int i=0; i < 3; i++){
	for (int j=0; j < 3; j++) {
		for (int k=0; k <3; k++) {
			cout << matriz [i][j][k] << " ";
		}
	 cout << endl;
	}
	cout << endl;
}
    system("pause");
    return 0;
}
