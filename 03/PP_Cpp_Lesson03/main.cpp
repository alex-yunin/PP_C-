#include <iostream>
#include <exception>
#include "task03.h"

using namespace std;

/*enum constant_set {
    csConstant1 = 0,
    csConstant2 = 1,
    csConstant3 = 2
}c_set;*///можно сразу же объявить переменную типа constant_set, эта переменная "c_set" будет объявлена в глобальном
//пространстве имён, т. е. любая функция может к ней обратиться, если эта функция написана в том же самом файле

//enum constant_set {
//    csConstant1 = 5,
//    csConstant2 = 4,
//    csConstant3 = 3,
//    csConstant4 = 2,
//    csConstant5 = 1,
//    csConstant6 = 0
//}c_set;

using _geek::GSum;

int main(){
//    printf("Вывод Задания 1:\n");
//    int e = 1;
//    int b = 2;
//    printf("1 + 2 = %d\n", GSum(e, b));
//    printf("\n");

    //****************************************************
//    cout << "Введите число ";
//    int a;
//    cin >> a;
//    cout << "Вы ввели число: " << a << endl;
//    if(a>10){
//        cout << "Это число больше 10" << endl;
//    } else if(a==10){
//        cout << "Это число равно 10" << endl;
//    } else
//    {
//        cout << "Это число еньше 10" << endl;
//    }
//******************************************************2
//    printf("Вывод Задания 2:\n");
//    int a;
//    cout << "Введите целое число ";
//    cin >> a;
//    if(a>5){
//        cout << "Повторите ввод ";
//        cin >> a;
//    }
//    if((a>5) && (a<10)){
//        a = a - 5;
//    } else {
//        a = 5 - a;
//    }
//    if(a>0){
//            cout << "Получилось число больше 0" << endl;
//        } else if(a==0){
//            cout << "Получилось число равно 0" << endl;
//        } else
//        {
//            cout << "Получилось число еньше 0" << endl;
//        }

    //**************************************************

//   //    char a;
//    int a;
//    cout << "Введите номер: ";
//    cin >> a;
//    switch (a) {
//    case csConstant1:
//        cout << "Constant 1" << endl;
//        break;
//   //    case 'y':
//   //        cout << "YES" <<endl;
//   //        break;
//    case csConstant2:
//        cout << "Constant 2" << endl;
//    case csConstant3:
//        cout << "Constant 3" << endl;
//        break;
//    default:
//        cout << "No num" <<endl;
//        break;
//    }
//    int a;
//    cout << "Введите номер: ";
//    cin >> a;
//    switch (a) {
//    case csConstant1:
//    case csConstant2:
//    case csConstant3:
//        cout << "Вы попали в первую половину множества." << endl;
//        break;
//    case csConstant4:
//    case csConstant5:
//    case csConstant6:
//        cout << "Вы попали во вторую половину множества." << endl;
//        break;
//    default:
//        cout << "Вы не попали ни в одну из половин множества." <<endl;
//        break;
//    }

    //*********************************************************************

//    int e;
//    cout << "Введите целое число ";
//    cin >> e;
//    while (e<=3) {
//        cout << "Число должно быть больше трёх введите число повторно ";
//        cin >>e;
//    }
//    do{
//        cout << e << endl;
//        e = e - 1;
//    } while(e>3);
//    printf("\n");

    //*******************************************************************

//    int a = 20;
//    int b = 0;
//    while (b != a) {
//        cout << "Введите число ";
//        cin >> b;
//        if(b < a){
//            cout << "Бери больше!" << endl;
//        } else if(b > a){
//            cout << "Бери меньше!" << endl;
//        }
//    }
//    cout << "Угадали!" << endl;
//************************************** игра************

//    int p = 0;
//    while((p < 10) || (p > 30)){
//        cout << "Введите число палочек ";
//        cin >> p;
//        if((p < 10) || (p > 30)){
//            cout << "Палочек должно быть не меньше 10 и не больше 30" << endl;
//        }
//    }
//    printf("Всего %d палочек.\nКаждый из игроков может взять не более 3, но не менее 1 палочки за ход,"
//"\nпроигрывает взявший последнюю палочку.\n\t\tНачинаем игру!\n", p);
//    cout << "Ваш ход первый." << endl;
//    while (p != 1) {
//        int pl =0;
//        int pc = 0;
//        cout << "Сколько палочек хотите взять? ";
//        cin >> pl;
//        while (((pl < 1) || (pl > 3)) || ((p - pl) < 1)) {
//            if((p - pl) < 1){
//                cout << "Вы ещё можете выйграть, подумайте хорошенько!!!" <<endl;
//                cout << "Сколько палочек хотите взять? ";
//                cin >> pl;
//            } else {
//            cout << "Вы можете взять не более 3, но не менее 1 палочки!" <<endl;
//            cout << "Сколько палочек хотите взять? ";
//            cin >> pl;
//            }
//        }
//        p = p - pl;
//        printf("Палочек осталось: %d\n", p);
//        if(p==1){
//            cout << "Поздравляю, Вы победили!" << endl;
//            break;
//        }
//        if((p>7) || (p==4)){
//            pc = 3;
//        } else if((p==7) || (p==3)){
//            pc = 2;
//        } else if((p==6) || (p==5) || (p==2)){
//            pc = 1;
//        }
//        printf("Компьютер забрал %d палочки(ку).\n", pc);
//        p = p - pc;
//        printf("Палочек осталось: %d\n", p);
//        if(p==1){
//            cout << "Вы проиграли :(!" << endl;
//            break;
//        }
//    }
//    printf("\n");

    //***************************************************************

//    int ar[10];
//    for(int i = 0, j = 0; i < 10; i++, j +=3){
//        ar[i] = j;
//        cout << ar[i] << "  ";
//    }
//    cout <<endl;

    //**************************************************************

//    char ar[11];
//    int i, j;
//    for(i = 0, j = 0; i < 10; i++, j += 3){;
//        ar[i] = j;
//    }
//    for(i=0; i < 10; i++){
//        cout << static_cast<int>(ar[i]) << "  ";
//    }
//    cout << endl;

//*********************************************************************

//    int a;
//    cin >> a;
//    try {
//        if(a==0) throw "Division by zero!\n";
//        cout << 4 / a << endl;
//    }  catch (char const* e) {
//        cout << e;
//    }

    int a;
    cin >> a;
    try {
        if(a==0) throw std::runtime_error("Division by zero!\n");
        cout << 4 / a << endl;
    }  catch (std::runtime_error& e) {
        cout << e.what();
    }



    return 0;
}
