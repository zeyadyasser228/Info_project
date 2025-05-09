#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream src("original.jpg", ios::binary);
    ofstream dest("copy.jpg", ios::binary);

    if (!src || !dest) {
        cout << "Error opening files.\n";
        return 1;
    }

    dest << src.rdbuf();

    src.close();
    dest.close();
    cout << "Image copied successfully.\n";
    return 0;
}