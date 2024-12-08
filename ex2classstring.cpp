//2. create string using string class (user input) and 
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1;

    cout << "Enter string: ";
    getline(cin, str1);

    cout << "Length of the string: " << str1.length() << endl;
    cout << "Copied string: " << str1 << endl;

    return 0;
} 