#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int a, b, hasil;
	char Operator;
	cout << " ------------------------------------------------------------ " << endl;
	cout << endl;
	cout << "               KALKULATOR SEDERHANA PUNYA WILLI               " << endl;
	cout << endl;
	cout << " ------------------------------------------------------------ " << endl;

	cout << "Masukkan bilangan pertama = ";
	cin >> a;
	cout << "Masukkan operator = ";
	cin >> Operator;
	cout << "Masukkan bilangan kedua = ";
	cin >> b;

	if (Operator == '+') {
		hasil = a + b;
		cout << "hasil = " << hasil << endl;
		cin >> hasil;
		}else if (Operator == '-') {
			hasil = a - b;
			cout << " hasil = " << hasil << endl;
			cin >> hasil;
		}else if (Operator == '*') {
			hasil = a * b;
			cout << "hasil = " << hasil << endl;
			cin >> hasil ;
		}else if (Operator == '/') {
			hasil = a / b;
			cout << "hasil = " << hasil << endl;
			cin >> hasil;
		}

	
	cin.get();
	return 0; 
}
