#include <iostream>

using namespace std;

int
main ()
{
  string name, address;
  int age, savingInDollars;

  cout << "Nama : ";
  cin >> name;
  cout << endl;
  cout << "Tempat tinggal : ";
  // cin>>address;
  getline (cin >> ws, address);
  cout << endl;
  cout << "Umur : ";
  cin >> age;
  cout << endl;
  cout << "Uang Tabungan dalam dollar : ";
  cin >> savingInDollars;
  cout << endl;

  if (age > 40
      && (address == "Nevada" || address == "New York" || address == "Havana")
      && savingInDollars > 10000000)
    {
      cout << name <<
	" kemungkinan adalah seorang anggota mafia dengan pangkat Don.";
    }
  else if ((40 >= age && age >= 25)
	   && (address == "New Jersey" || address == "Manhattan"
	       || address == "Nevada") && (1000000 <= savingInDollars
					   || savingInDollars <= 2000000))
    {
      cout << name <<
	" kemungkinan adalah seorang anggota mafia dengan pangkat Underboss.";
    }
  else if ((24 >= age && age >= 18)
	   && (address == "California" || address == "Detroit"
	       || address == "Boston") && 1000000 > savingInDollars)
    {
      cout << name <<
	" kemungkinan adalah seorang anggota mafia dengan pangkat Capo.";
    }
  else
    {
      cout << name << " tidak mencurigakan";
    }


  return 0;
}
