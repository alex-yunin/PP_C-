#include "task02.h"

using namespace std;
//void printVal(int a, unsigned long b){
//    cout << dec << a << endl; //как десятичное
//    cout << hex << &a << endl; //как шестнадцатиричное
//    cout << dec << b << endl;
//    cout << hex << &b << endl;
//}

//int Remainder();

//void PrintNumber(int a){
//    cout << a << endl;
//}

//void Print(char str[]){
//    cout << str << endl;
//}

void Print(char str[]){
    str[0] = 'd';
    cout << str << endl;
}

void Print(int ar[]){
    cout << ar << endl;
}


int main(int argc, char** args){
//    cout << IT_WORKS << endl;
//    cout << "Sample string \n\t Sample string 2" << endl;
//    cout << "Sample string \rSample string 2" << endl;
//    int a = 264000;
//    unsigned long b = 123456789;
//    printVal(a, b);
//int a = 11;
//int b = 3;
//PrintNumber(Remainder(a, b));

    int array[5] = {-1, 2, 4, 5, 6};
    cout << array[0] << endl;
    char str[7] = "string";
    char str2[9] = "str\0pp";
    Print(str);
    Print(str2);
    Print(array);//выведет адрес первого элемента массива
    char arr[5] = {'s', 't', 'o', 'p', '\0'};// \0 - это символ конца строки, при печати не отображается
    //его можно не прописывать, но, обязательно, зарезервировать для него место нужно
    //поэтому для слова stop резервируем 5 мест а не 4, последнее место для символа конца строки.
    //Можно и так: char arr[5] = {'s', 't', 'o', 'p'};
    Print(arr);

    short x = 45000;
    unsigned char y = 1400;
    cout << x << endl;
    cout << y << endl;



    return 0;
}
