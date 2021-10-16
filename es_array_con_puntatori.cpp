#include <iostream>
using namespace std;
void carica (int *x, int d);
void stampa (int *x,int d);
int main ()
{
	int *v;
	int n;
	int x[100];
	cout << "\n Inserisci la dimensione del mio array" <<endl;
	cin >> n;
	v= new int[n];
	carica(v,n);
	stampa(v,n);
	delete v;
	return 0;
}
void carica (int *x, int d)
{
	int k;
	for (k=0;k<d;k++)
	{
		cout << "\n Inserisci elemento di posto " << k+1 << endl;
		cin >> *(x+k);
	}
}
void stampa (int *x,int d)
{
		int k;
	for (k=0;k<d;k++)
	{
		cout << "\n Elemento di posto " << k+1 << endl;
		cout << *(x+k);
	}
}

