#include <iostream>
#include <string.h>

using namespace std;

int main(void) {
    /**
     * O tipo char pode representar um booleano recebendo 1
     * para true e 0 para false.
    */
    char charBool = '1';

    if (charBool == '1')
    {
        cout << "true";
    }
    else if (charBool == '0')
    {
        cout << "false";
    }

    cout << endl;

    /**
     * O mesmo pode ser feito para o tipo int.
    */
    int intBool = 0;

    if (intBool == 1)
    {
        cout << "true";
    }
    else if (intBool == 0)
    {
        cout << "false";
    }

    cout << endl;

    /**
     * Para o tipo float mudamos os valores para 1.0 como true 
     * e 0.0, ou simplesmente 0, para false, mas mantendo a mesma lógica.
    */
    float floatBool = 1.0;

    if (floatBool == 1.0)
    {
        cout << "true";
    }
    else if (floatBool == 0)
    {
        cout << "false";
    }

    cout << endl;

    return 0;
}