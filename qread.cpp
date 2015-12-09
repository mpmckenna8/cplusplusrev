// Final project and review for C++ intro
// By Matthew McKenna

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{

string line;

ifstream fimi;

fimi.open("q1.txt");

if( fimi.is_open() ){
    while( getline(fimi, line) ) {

        cout << line << " hey" << endl;
    }

}

fimi.close();

return 0;
}
