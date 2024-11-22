#include<iostream>

using namespace std;

int main(){

    string str;

    cout << "Enter string: " << endl;
    getline(cin , str);

    cout << "The lenght of stinr is: " << str.size();

    return 0;

}