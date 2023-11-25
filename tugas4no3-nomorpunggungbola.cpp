#include <iostream>

using namespace std;

int
main ()
{
  int playerNumber;

  cout << "Masukkan Nomor Punggung (Angka) : ";
  cin >> playerNumber;
  cout << endl;
  cout << "Pemain dapat digunakan sebagai :";
  cout << endl;

  // Check Attacker
  if (playerNumber % 2 == 0)
    {
      cout << "- Target Attacker";
      cout << endl;
      // Check Captain
      if (playerNumber <= 100 && playerNumber >= 50)
	{
	  cout << "- Captain Team";
	  cout << endl;
	}
      // Check Defender
    }
  else
    {
      cout << "- Defender";
      cout << endl;
      if (playerNumber > 90)
	{
	  cout << "- Playmaker";
	  cout << endl;
	}
      if (playerNumber % 3 == 0 || playerNumber % 5 == 0)
	{
	  cout << "- Keeper";
	  cout << endl;
	}
    }

  return 0;
}
