#include <iostream>
using namespace std;

int main()
{
    float n1, n2, n3;
    cout << "Digite três numeros: ";
    cin >> n1 >> n2 >> n3;

    if (n1 > n2 && n3 && n2 < n3){
        cout << n1 << n2 << endl;
    } else if (n2 > n1 && n3) {
        cout << n2 << endl;
    } else if (n3 > n1 && n2){
        cout << n3 << endl;
    } else {
        cout << "Os numeros sao iguais" << endl;
    }
    
    system("pause");
    return 0;
}
