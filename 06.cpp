#include <iostream>

int main(){
    // 华氏温度 = 摄氏温度 * 9 / 5 + 32
    const unsigned short ADD_SUBTRACT = 32;
    const double RADIO = 9.0 / 5.0;

    double tempIn, tempOut;
    char typeIn, typeOut;

    std::cout << "请以{xx.x C} 或者{xx.x F} 格式输入一个温度：\n";
    std::cin >> tempIn >> typeIn;
    std::cout << "\n";
    
    switch(typeIn){
        case 'C':
        case 'c':
            tempOut = tempIn * RADIO + 32;
            typeOut = 'f';
            typeIn = 'C';
            break;
        case 'F':
        case 'f':
            tempOut = (tempIn - 32) / RADIO;
            typeOut = 'C';
            typeIn = 'F';
            break;
        default:
            typeOut = 'E';
            break;
    }
    if(typeOut != 'E'){
        std::cout << tempIn << typeIn
                << "=" << tempOut << typeOut << "\n";
    }
    else{
        std::cout << "输入错误";
    }
    system("pause");
    return 0;
}
