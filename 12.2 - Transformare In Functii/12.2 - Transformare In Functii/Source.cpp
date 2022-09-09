#include <iostream>
using namespace std;
int adaugareElement(int listaNumere[10], int nrNumere)
{
	int nrDeInserat;
	cin >> nrDeInserat;
	int aux;
	bool isInserted = false;
	for (int i = 0;i < nrDeInserat + 1;i++)
	{
		if (isInserted == true)
		{
			int aux2;
			aux2 = listaNumere[i];
			listaNumere[i] = aux;
			aux = aux2;
		}
		if (nrDeInserat < listaNumere[i] && isInserted != true)
		{
			aux = listaNumere[i];
			listaNumere[i] = nrDeInserat;
			isInserted = true;
		}
	}
	nrNumere++;
	return nrDeInserat;
}
void main()
{
	int listaNumere[10] = { 5,10,20,40,80 };
	int nrNumere = 5;
	int nrDeInserat;
	nrDeInserat = adaugareElement(listaNumere, nrNumere);
	for (int i = 0;i < nrNumere;i++)
	{
		cout << "numar[" << i << "]=" << listaNumere[i] << endl;
	}








}