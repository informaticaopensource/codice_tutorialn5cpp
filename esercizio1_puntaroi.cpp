#include <iostream>
using namespace std;
int main ()
{
	int *x; 
	float *y;
	int *z;
	int n;
	float m;
	cout << "\n Inserisci due numeri intero e reale \n";
	cin >> n;
	cin >> m;
	x=&n; // derefernziano
	y=&m;
	cout << "\n Stampa dei valori inseriti "<< *x << "\t"<< *y;
	cout << "\n Indirizzo di X "<< x << "\t Indirizzo di Y "<< y << endl;
	z=x;
	cout << "\n Stampa del valore della Cella di Mwmoria di Z "<< *z << endl;
	return 0;
}
