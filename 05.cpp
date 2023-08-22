#include <iostream>

int main(){
    char answer;

    std::cout << "可以格式化硬盘吗[Y/N]\n";
    std::cin >> answer;
    switch(answer){
        case 'Y':
        case 'y':
            std::cout << "happy\n";
            break;
        case 'N':
        case 'n':
            std::cout << "OK\n";
            break;
        default:
            std::cout << "输入不对\n";
            break;
    }
    system("pause");
    return 0;
}
