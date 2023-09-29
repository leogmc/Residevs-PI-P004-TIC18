#include <iostream>
#include <limits>

using namespace std;

int main (void) {
    cout << "\n**************************** INT **************************** \n";
    cout << "O menor valor representado pelo tipo int é: " << numeric_limits<int>::min() << endl;
    cout << "O maior valor representado pelo tipo int é: " << numeric_limits<int>::max() << endl;

    cout << "\n********************* UNSIGNED LONG INT ********************* \n";
    cout << "O maior valor representado pelo tipo unsigned long int é: " << numeric_limits<unsigned long int>::max() << endl;

    unsigned long int uli = 18446744073709551615;
    long int li = uli;
    uli = li;

    cout << "uli: " << uli << endl;
    cout << "li: " << li << endl; 
    cout << "uli: " << uli << endl;

    /**
     * O que aconteceu:
     * A variável li imprimiu o valor -1 após receber o valor de uli.
     * 
     * Isso ocorreu porque a variável li do tipo long int, não comporta 
     * o valor da variável atribuida a ela pela variável uli, imprimindo 
     * o valor -1, e ao atribuir o valor de li de volta a variável uli, 
     * este imprimiu o mesmo valor atribuído inicialmente.
    */

    cout << "\n************************* LONG INT ************************* \n";
    cout << "O maior valor representado pelo tipo long int é: " << numeric_limits<long int>::max() << endl;

    li = 9223372036854775807;
    unsigned int ui = li;
    li = ui;

    cout << "li: " << li << endl;
    cout << "ui: " << ui << endl; 
    cout << "li: " << li << endl;

    /**
     * O que aconteceu:
     * A variável li imprimiu o valor máximo que uma variável do tipo unsigned 
     * int pode receber, assim como a variável ui.
     * 
     * Isso ocorreu porque como o valor maximo de li é maior que ui, ui imprimiu seu valor máximo
     * e li imprimiu o mesmo valor de ui porque ui alterou esse valor.
    */

    cout << "\n************************* UNSIGNED INT ************************* \n";
    cout << "O menor valor representado pelo tipo unsigned int é: " << numeric_limits<unsigned int>::min() << endl;
    cout << "O maior valor representado pelo tipo unsigned int é: " << numeric_limits<unsigned int>::max() << endl;

    ui = 4294967295;
    cout << "ui: " << ui << endl; 

    return 0;
}