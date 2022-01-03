#include <iostream>
#include <string>

using namespace std;

int main()
{
    string hello = "Hello World";
    int count = 7;

    cout << "The message is :"<<hello << endl;
    cout << "The count is : "<< count <<endl;


    cout << "Size of int : " << sizeof(int) << " bytes" << endl;
    cout << "Size of char :"<< sizeof(char) << "bytes" << endl;
    cout << "Size of bool :"<< sizeof(bool) << "bytes" << endl;
    cout << "Size of float :"<< sizeof(float) << "bytes" << endl;
    cout << "Size of double :"<< sizeof(double) << "bytes" << endl;
    cout << "Size of wchar_t :"<< sizeof(wchar_t) << "bytes" << endl;


    cout << "Size of short int : " << sizeof(short int) << " bytes" << endl;
    cout << "Size of unsigned short int : " << sizeof(unsigned short int) << " bytes" << endl;
    cout << "Size of unsigned int : " << sizeof(unsigned int) << " bytes" << endl;
    cout << "Size of int : " << sizeof(int) << " bytes" << endl;
    cout << "Size of signed int : " << sizeof(signed int) << " bytes" << endl;
    cout << "Size of long int : " << sizeof(long int) << " bytes" << endl;
    cout << "Size of unsigned long long int : " << sizeof(unsigned long long int) << " bytes" << endl;
    cout << "Size of signed char : " << sizeof(signed char) << " bytes" << endl;
    cout << "Size of unsigned char : " << sizeof(unsigned char) << " bytes" << endl;
    cout << "Size of char : " << sizeof(char) << " bytes" << endl;
    cout << "Size of float : " << sizeof(float) << " bytes" << endl;
    cout << "Size of double : " << sizeof(double) << " bytes" << endl;
    cout << "Size of long double : " << sizeof(long double) << " bytes" << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << " bytes" << endl;


    unsigned int var1 = -200;
    cout << "Var1 is :" << var1 <<endl;

    return 0;
}
