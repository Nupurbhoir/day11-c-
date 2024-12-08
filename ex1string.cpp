//create string using c style string "welcome to c++ program perform following operations:"
//1.calculate total lenght of string 2.extract welcome from string 3. add "btech in existing string"

    #include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[25] = "Welcome to C++ program";

    int a = strlen(str);
    cout << "Length of string: " << a << endl;

    char b[8];
    strncpy(b, str, 7);
    b[7] = '\0';
    cout << "Extracted 'welcome': " << b << endl;

    strcat(str, " Btech"); 
    cout << "String after appending 'Btech': " << str << endl;

    return 0;
}