#include <iostream>
#define IT_WORKS "It works!"
using namespace std;

int main(int argc, char** args)
{
    const int SUCCESS = 0;
    cout << IT_WORKS << endl;
    cout << "Sample string \n\t Sample string 2" << endl;
    cout << "Sample string \rSample string 2" << endl;
    return SUCCESS;
}
