#include <iostream>
using namespace std;

int main()
{
    int a, b, x, y;
    float o;
    cout << "Введите два положительных числа: ";
    cin >> a >> b;
    if (a > b){  //находим большее из двух чисел
        x = a;   //если надо меняем местами
        y = b;
    }
    else{
        x = b;   
        y = a;
    };
    while(o != 0){  
        o = x % y;  //делим большее на меньшее
        x = y;      //теперь большее - это то, что было меньшим
        y = o;      //а меньшее - остаток
    };
    
    cout << x;      //выводим то, что было меньшим при последнем делении

    return 0;
}
