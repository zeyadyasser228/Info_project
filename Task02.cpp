#include <iostream>
#include <fstream>
using namespace std;

void get_Characetr()
{
    ofstream outFile("Name.txt");
    outFile << "E-commerce Managemet Sytem";
    outFile.close();

    ifstream inFile("Name.txt");
    char ch;
    int pos = 1;
    while (inFile.get(ch)) {
        if (pos == 5) {
            cout << "Character at position 5 is: '" << ch << "'\n";
            break;
        }
        pos++;
    }

    inFile.close();
}

int main()
{
    get_Characetr(); 
    return 0;
}