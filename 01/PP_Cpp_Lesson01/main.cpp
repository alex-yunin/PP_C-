#include <iostream>
#define IT_WORKS "It works!"
#define CONST "Ещё одна константа :) "
using namespace std;

int main()
{
    const int SUCCESS = 0;
    cout << IT_WORKS << endl;
    cout << "Sample string \n\t Sample string 2" << endl;
    cout << "Sample string \rSample string 2" << endl;
    cout << CONST << endl;
    return SUCCESS;
}
