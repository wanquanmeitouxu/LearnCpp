#include <iostream>
using namespace std;
int main(){
    int width = 4;
    char str[20];

    cout << "Enter a string: \n";
    cin.width(5);

    while(cin >> str){
        cout.width(width++);
        cout << str << endl;
        cin.width(5);
    }
    system("pause");
    return 0;
}
