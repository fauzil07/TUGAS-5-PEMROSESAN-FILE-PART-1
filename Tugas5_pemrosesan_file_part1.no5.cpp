#include <iostream>
#include <fstream>
using namespace std;
int main() {

ifstream VarBaca;
char Teks[80];
VarBaca.open("Saya membuka file.TXT");
VarBaca >> Teks; 
cout <<"saya membuka file";

VarBaca.close ();

return 0;
}
