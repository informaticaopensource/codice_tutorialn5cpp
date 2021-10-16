#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
	fstream f;
	f.open("numeri.txt",ios::out);
	int x,n,k;
	cout << "\n Inserisci quanti numeri scrivere nel file \n";
	cin >> n;
	for (k=0;k<n;k++)
	{
		cout << "\n Inserisci un numero:"<< endl;
		cin >> x;
		f << x << endl;
	}
	f.close();
	f.open("numeri.txt",ios::in);
	cout << "\n Elementi del file \n";
	for (k=0;k<n;k++)
	{
	
		f >> x ;
		cout << "|:\t "<< x << "|" ;
	}
	cout << endl;
	f.close();
	return 0;
}
