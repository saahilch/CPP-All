#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    int choice;
    string filename;

    while (true) {
        cout << "File Operations Menu" << endl;
        cout << "1. Create a new file" << endl;
        cout << "2. Read from a file" << endl;
        cout << "3. Write to a file" << endl;
        cout << "4. Delete a file" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the name of the file to create: ";
                cin >> filename;
                {
                    ofstream file(filename.c_str());
                    if (file.is_open()) {
                        cout << "File created successfully." << endl;
                        file.close();
                    } else {
                        cout << "Unable to create the file." << endl;
                    }
                }
                break;

            case 2:
                cout << "Enter the name of the file to read from: ";
                cin >> filename;
                {
                    ifstream file(filename.c_str());
                    if (file.is_open()) {
                        string line;
                        while (getline(file, line)) {
                            cout << line << endl;
                        }
                        file.close();
                    } else {
                        cout << "Unable to open the file for reading." << endl;
                    }
                }
                break;

            case 3:
                cout << "Enter the name of the file to write to: ";
                cin >> filename;
                {
                    ofstream file(filename.c_str());
                    if (file.is_open()) {
                        cout << "Enter the text to write to the file (-1 to finish):" << endl;
                        cin.ignore(); // Clear the newline character from the buffer
                        string line="";
//                    
						do{
							file << line << endl;
						    getline(cin, line);
							
                            //cout<<line<<endl;
						}while(line!="-1");
                        file.close();
                        cout << "File written successfully." << endl;
                    } else {
                        cout << "Unable to open the file for writing." << endl;
                    }
                }
                break;

            case 4:
                cout << "Enter the name of the file to delete: ";
                cin >> filename;
                if (remove(filename.c_str()) == 0) {
                    cout << "File deleted successfully." << endl;
                } else {
                    cout << "Unable to delete the file." << endl;
                }
                break;

            case 5:
                cout << "Exiting the program." << endl;
                return 0;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

