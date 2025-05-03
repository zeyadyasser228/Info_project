#include <iostream>
#include <fstream>
using namespace std;

void write_binary_file()
{
    ofstream b_file("personal_binary.txt", ios::binary);
    int id=0;
    string phone="", name="";
    string faculty="";

    for (int i = 0; i < 1; i++)
    {
        cout << "Enter details for person " << i + 1 << endl;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Phone: ";
        cin >> phone;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Faculty: ";
        cin >> faculty;

        b_file.write((char*)&id, sizeof(id));
        b_file.write((char*)&phone, sizeof(phone));
        b_file.write((char*)&name, sizeof(name));
        b_file.write((char*)&faculty, sizeof(faculty));

        cout << "Person " << i + 1 << " data saved!" << endl << endl;
    }
    b_file.close();
}

void read_binary_file()
{
    ifstream b_file("personal_binary.txt", ios::binary);
    int id;
    string phone;
    string name;
    string faculty;

    for (int i = 0; i < 1; i++) {
        b_file.read((char*)&id, sizeof(id));
        b_file.read((char*)&phone, sizeof(phone));
        b_file.read((char*)&name, sizeof(name));
        b_file.read((char*)&faculty, sizeof(faculty));

        cout << "Person " << i + 1 << " Data:" << endl;
        cout << "ID: " << id << endl;
        cout << "Phone: " << phone << endl;
        cout << "Name: " << name << endl;
        cout << "Faculty: " << faculty << endl;
        cout << "----------------------------" << endl;
    }

    b_file.close();
}

int main()
{
    //write_binary_file();  
   read_binary_file();
    return 0;
}
