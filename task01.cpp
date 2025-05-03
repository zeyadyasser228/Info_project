#include<iostream>
#include<fstream>
#include<string>
using namespace std;

#pragma region User struct
struct User {
  string userID, username, email;
};
#pragma endregion

#pragma region Fixed_length

void Fixed_length_Write(User &user){
  ofstream file("User.txt");
  int length; 
  for(int i=0; i<2; i++){
    cout<<"Enter UserID : ";
    cin>>user.userID;
    length=user.userID.length();
    if(length<10)
      file<<"0"<<length<<user.userID;
    else
      file<<length<<user.userID;


      cout<<"Enter Username : ";
    cin>>user.username;
    length=user.username.length();
    if(length<10)
      file<<"0"<<length<<user.username;
    else
      file<<length<<user.username;



      cout<<"Enter Email : ";
      cin>>user.email;
      length=user.email.length();
      if(length<10)
        file<<"0"<<length<<user.email;
      else
        file<<length<<user.email;
  }
  file.close();
}


void Fixed_length_read(User &user){
  ifstream file("User.txt");
    char temp[2];
    int length;
    while (!file.eof())
    {
        file >> temp[0] >> temp[1]; 
        if(file.fail())
            break;
        length = atoi(temp);
        for (int i = 0; i < length; i++)
        {
            file >> user.userID[i];
        }
        cout << "UserID: ";
        for (int i = 0; i < length; i++)
        {
            cout << user.userID[i];
        }
        cout << endl;

        file >> temp[0] >> temp[1];
        length = atoi(temp);
        for (int i = 0; i < length; i++)
        {
            file >> user.username[i];
        }
        cout << "Username: ";
        for (int i = 0; i < length; i++)
        {
            cout << user.username[i];
        }
        cout << endl;

        file >> temp[0] >> temp[1];
        length = atoi(temp);
        for (int i = 0; i < length; i++)
        {
            file >> user.email[i];
        }
        cout << "Last Name: ";
        for (int i = 0; i < length; i++)
        {
            cout << user.email[i];
        }
        cout << endl;
        cout << "----------------------------\n";
    }
    cout << "\n";
}

#pragma endregion

#pragma region Length_indicator

void Length_indicator_Write(User &user)
{
  ofstream file("User.txt");
  int length; 
  for(int i=0; i<2; i++){
    cout<<"Enter UserID : ";
    cin>>user.userID;
    length=user.userID.length();
    if(length<10)
      file<<"0"<<length<<user.userID;
    else
      file<<length<<user.userID;


      cout<<"Enter Username : ";
    cin>>user.username;
    length=user.username.length();
    if(length<10)
      file<<"0"<<length<<user.username;
    else
      file<<length<<user.username;



      cout<<"Enter Email : ";
      cin>>user.email;
      length=user.email.length();
      if(length<10)
        file<<"0"<<length<<user.email;
      else
        file<<length<<user.email;
  }
  file.close();
}


void Length_indicator_read(User &user){
    ifstream file("User.txt");
    string userId, username , email ; 
    char temp[2];
    int length;
    while(!file.eof()){
    file >> temp[0] >> temp[1]; 
    if(file.fail())
    break;
    length = atoi(temp);
    for (int i = 0; i < length; i++)
    {
        file >> userId[i];
    }
    cout << "UserID: ";
    for (int i = 0; i < length; i++)
    {
        cout << userId[i];
    }
    cout << endl;

    file >> temp[0] >> temp[1];
    length = atoi(temp);
    for (int i = 0; i < length; i++)
    {
        file >> username[i];
    }
    cout << "Username: ";
    for (int i = 0; i < length; i++)
    {
        cout << username[i];
    }
    cout << endl;

    file >> temp[0] >> temp[1];
    length = atoi(temp);
    for (int i = 0; i < length; i++)
    {
        file >> email[i];
    }
    cout << "Last Name: ";
    for (int i = 0; i < length; i++)
    {
        cout << email[i];
    }
    cout << endl;
    cout << "----------------------------\n";
    }
}

#pragma endregion

#pragma region  Delimiter 
void delimiter_read(User &user)
{
    ifstream file("User.txt");
    while (!file.eof())
    {
        getline(file, user.userID, '|');
        if(file.fail())
            break;
        cout << "User ID: " << user.userID << endl;
        getline(file, user.username, '|');
        if(file.fail())
            break;
        cout << "Department name: " << user.username << endl;
        getline(file, user.email, '|');
        if(file.fail())
            break;
        cout << "last name: " <<  user.email << endl;
        cout << "\n";
    }
    
    file.close();
}
void delimiter_Write(User &User)
{
    ofstream file("User.txt");
    for (int i = 0; i < 2; i++)
    {
        cout<<"Enter UserID: " ;
        cin >> User.userID;
        file << User.userID << "|";
        cout<<"Enter UserName: " ;
        cin >> User.username;
        file << User.username << "|";
        cout<<"Enter Email: ";
        cin >> User.email;
        file << User.email<< "|";
    }
    file.close();
}
#pragma endregion


void keyword_method_Write(User &user){
  ofstream file("User.txt");
  for(int i=0; i<2; i++)
  {
      cout << "enter userID: ";
      cin >> user.userID;

      cout << "enter Username: ";
      cin >> user.username;

      cout << "enter Email: ";
      cin >> user.email;

   

      file << "UserID=" << user.userID << "|";
      file << "Username=" << user.username << "|";
      file << "Email=" << user.email << "|";
    

  file.close();
}
}
void keyword_method_read(User &user){
string keyword;
ifstream file("User.txt");
while(!file.eof())
{
  getline(file,keyword,'=');

  getline(file,user.userID,'|');

  if(file.fail())
    break;

  getline(file,keyword,'=');
  getline(file,user.username,'|');

  getline(file,keyword,'=');
  getline(file,user.email,'|');



  cout << "UserId : "<<user.userID<<" username : "<<user.username<<" Email : "<<user.email;
      cout << "----------------------------\n";
  
}
file.close();
}


int main (){
  User u ; 
  //Fixed_length_Write(u);
  //Fixed_length_read(u);
  //Length_indicator_Write(u);
  //Length_indicator_read(u);
  //delimiter_Write(u);
  //delimiter_read(u);

  // keyword_method_Write(u);
  keyword_method_read(u);
  return 0; 
}