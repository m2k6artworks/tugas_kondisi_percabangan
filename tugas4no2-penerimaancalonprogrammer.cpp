#include <iostream>

using namespace std;

int
main ()
{
  string statusCoding, statusInterview;
  int codingTest;
  char interviewTest;

  cout << "Nilai Coding Test (Angka) : ";
  cin >> codingTest;
  cout << endl;
  cout << "Nilai Interview Test (A,B,C,D) : ";
  cin >> interviewTest;
  cout << endl;

  if (codingTest > 80)
    {
      statusCoding = "LOLOS";
    }
  else if (codingTest >= 60 && codingTest <= 80)
    {
      statusCoding = "DIPERTIMBANGKAN";
    }
  else if (codingTest < 60)
    {
      statusCoding = "GAGAL";
    }

  if (interviewTest == 'A' || interviewTest == 'B')
    {
      statusInterview = "LOLOS";
    }
  else
    {
      statusInterview = "GAGAL";
    }

  if ((statusCoding == "LOLOS" || statusCoding == "DIPERTIMBANGKAN")
      && statusInterview == "LOLOS")
    {
      cout << "Selamat Kamu Berhasil Menjadi Calon Programmer.";
    }
  else
    {
      cout << "Maaf Kamu Belum Berhasil Menjadi Calon Programmer";
    }

  return 0;
}
