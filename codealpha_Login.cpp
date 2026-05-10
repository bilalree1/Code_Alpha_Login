#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function to register a new user
void registerUser()

{
    string username, password;
    
    cout << "\nEnter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    // Open file to check existing users
    ifstream readFile("users.txt");

    string fileUsername, filePassword;
    bool userExists = false;

    while (readFile >> fileUsername >> filePassword)
    {
        if (fileUsername == username)
        {
            userExists = true;
            break;
        }
    }

    readFile.close();

    if (userExists)
    {
        cout << "Username already exists! Try another username.\n";
        return;
    }

    // Save new user
    ofstream writeFile("users.txt", ios::app);
    writeFile << username << " " << password << endl;
    writeFile.close();

    cout << "Registration Successful!\n";
}

// Function to login
void loginUser()
{
    string username, password;

    cout << "\nEnter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    ifstream readFile("users.txt");

    string fileUsername, filePassword;
    bool loginSuccess = false;

    while (readFile >> fileUsername >> filePassword)
    {
        if (fileUsername == username && filePassword == password)
        {
            loginSuccess = true;
            break;
        }
    }

    readFile.close();

    if (loginSuccess)
    {
        cout << "Login Successful! Welcome " << username << endl;
    }
    else
    {
        cout << "Invalid Username or Password!\n";
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== LOGIN & REGISTRATION SYSTEM =====\n";
        cout << "1. Register\n";
        cout << "2. Login\n";
        cout << "3. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            registerUser();
            break;

        case 2:
            loginUser();
            break;

        case 3:
            cout << "Program Ended.\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 3);

    return 0;
}