#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    cout << "�������֣��ÿո����";
    int i;
    while(cin >> i)
    {
        sum += i;
        while(cin.peek() == ' ')
        {
            cin.get();
        }
        if(cin.peek() == '\n')
        {
            break;
        }
    }
    cout << "����ǣ�" << sum << endl;
    system("pause");
    return 0;
}
