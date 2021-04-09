//Курс: "Процедурное программирование и основы С++".
//Студент: Александр Юнин
//Выполнение практического задания к четвёртому уроку.

#include "task04.hpp"

using namespace std;

unsigned int histogram[256];
int alphabet[256];

int main(int argc, char** args)
{
    fstream f;
    ofstream out("histogram.txt");//Создаём переменную "out" для вывода данных в текстовый файл
    int width, height;
    width = 0;
    height = 0;
    char PGM_hdr1[2];
    if(argc == 1){
        cout << "Please specify input file(s)!" << endl;
        return 1;
    }
    for(int i = 1; i < argc; i++){
        f.open(args[i], ios::binary|ios::in);
        if(!f.is_open()){//функция f.is_open() выдаёт 1 если файл доступен (удалось открыть)
            cout << "File: " << args[i] << " is not accessible!" << endl;
            continue;
        }
        cout << "File " << args[i] << " opened" << endl;
        f.read(PGM_hdr1, 2);
        if((PGM_hdr1[0] != 0x50) || (PGM_hdr1[1] != 0x35)) continue;//Проверка что формат файла соответствует PGM Binary
        cout << "PGM header detected" << endl;
        f.seekg(static_cast<unsigned int>(f.tellg()) + 1);//Сдвинет текущую позицию чтения файла на один байт
        char sym;
        unsigned int digit_b = static_cast<unsigned int>(f.tellg());//Позиция в которой находится самая левая цифра
        do{
            f.read(&sym, 1);//взять адрес от пременной sym и читаем в ней ровно один байт
        }
        while (sym != 0x20);
        unsigned int digit_e = static_cast<unsigned int>(f.tellg()) - 2;//позиция самой правой цифры
        int j = 0;
        for(int d = '0'; d <= '9'; d++, j++) alphabet[d] = j;
        int c = 1;
        for(j = digit_e; j >= digit_b; j--, c *= 10){
            f.seekg(j);//переходим на требуемую позицию
            f.read(&sym, 1);//переменная sym будет прочитана из файла, будет прочитан 1 байт
            width += alphabet[sym] * c;
        }
        cout << "Width: " << width << endl;
        digit_b = digit_e + 2;
        f.seekg(digit_b);
        do{
            f.read(&sym, 1);
        }
        while (sym != 0x0A);
        digit_e = static_cast<unsigned int>(f.tellg()) - 2;
        c = 1;
        for(j = digit_e; j >= digit_b; j--, c *= 10){
            f.seekg(j);
            f.read(&sym, 1);
            height += alphabet[sym] * c;
        }
        cout << "Height: " << height << endl;

        for(int d = 0; d < 256; ++d) histogram[d] = 0;//инициализирующий цикл, подготавливает массив
        f.seekg(digit_e +6);//перемещаемся к данным яркости первой точки изображения
        for(int d = 0; d < (width * height); ++d){
            if(f.eof()) break;//если файл битый, то цикл чтения прерывается
            f.read(&sym, 1);
            histogram[static_cast<unsigned char>(sym)] += 1;
        }
        cout << endl;
        for(j = 0; j < 256; j++){
            cout << "[" << j << "] ";
            for(c = 0; c < histogram[j]; c++){
                cout << "|";
            }
            cout << endl;
        }
        f.close();//Закрывает файл
        out << "File: " << args[i] << endl;
        out << "Width: " << width << "\t Height: " << height << endl;
        for(j = 0; j < 256; j++){
            out << "[" << j << "] ";
            for(c = 0; c < histogram[j]; c++){
                out << "|";
            }
            out << endl;
        }
        out << "End of File " << args[i] << endl << endl;
        out.close();//Закрываем файл в который записывали данные гистограммы
    }
    return 0;
}
