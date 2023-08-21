#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    cout << "输入数字，用空格隔开";
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
    cout << "结果是：" << sum << endl;
    system("pause");
    return 0;
}
