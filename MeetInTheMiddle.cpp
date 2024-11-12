#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

void find_mean(string);

int main()
{
  string file_name;
  cout << "Enter filename: ";
  cin >> file_name;

  ifstream file(file_name);
  if (!file)
  {
    cerr << "Error opening file" << endl;
    return 1;
  }

  vector<int> numbers;
  int numbers;
  string comma;
  if (getline(file, comma))
  {
    for (char &ch : comma)
    {
      if (ch == ',')
      {
        ch = ' ';
      }
    }
  }

  return 0;
}