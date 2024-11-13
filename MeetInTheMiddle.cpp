#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

void find_mean(string);
void remove_comma(string);
int main()
{
  string file_name;
  cout << "Enter filename: ";
  cin >> file_name;

  ifstream file(file_name);
  if (!file)
  {
    string data;
    cerr << "Error opening file" << endl;
    return 1;
  }
  vector<string> contents;
  string line;
  while (!file.eof())
  {
    getline(file, line);
    contents.push_back(line);
  }
  file.close();
  for (auto file_line : contents)
    cout << file_line << endl;
  for (auto &str : contents)
  {
    str.erase(remove(str.begin(), str.end(), ','), str.end());
  }
  for (const auto &str : contents)
  {
    cout << str << endl;
  }
  return 0;
}
