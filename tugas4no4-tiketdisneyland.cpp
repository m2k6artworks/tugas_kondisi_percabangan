#include <iostream>

using namespace std;

int
main ()
{
  int childAge, childHeight, price;
  string textMsg;

  cout << "Masukkan Umur Anak (tahun) : ";
  cin >> childAge;
  cout << endl;
  cout << "Masukkan Tinggi Anak (cm): ";
  cin >> childHeight;
  cout << endl;

  price = 0;
  textMsg = "Tarif Masuk yang dikenakan sebesar : Rp ";

  if (childAge < 1)
    {
      textMsg = "Dilarang Masuk";
      cout << textMsg;
      return 0;
    }
  else if (childAge <= 3)
    {
      price = 30000;
      if (childHeight > 70)
	{
	  price = price + 10000;
	}
    }
  else if (childAge <= 7)
    {
      price = 40000;
      if (childHeight > 120)
	{
	  price = price + 15000;
	}
    }
  else if (childAge <= 10)
    {
      price = 50000;
      if (childHeight > 150)
	{
	  price = price + 20000;
	}
    }
  else
    {
      price = 80000;
    }

  cout << "Umur : " << childAge;
  cout << endl;
  cout << "Tinggi : " << childHeight;
  cout << endl;
  cout << textMsg << price;

  return 0;
}
