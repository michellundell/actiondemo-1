#include <iostream>
using namespace std;

int main(int argc,char **argv)
{
  string instr;
  cout << "what?";
  cin >> instr;
  cout << argc << "," argv[0] << "," << instr << endl;
  return 0;
}
