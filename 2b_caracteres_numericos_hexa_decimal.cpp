#include <iostream>
#include <iomanip> // Para usar a formatação hexadecimal

using namespace std;

int main()
{
    for (int i = 48; i < 58; i++) {
        //usando char(i) para converter o inteiro em caractere
        //usando o int(char(i)) para conventer o inteiro decimal em caractere, converter um caracter em inteiro decimal.
        //hex converte um dedimal em hexa decimal
        //dec converte uma inteiro em um decimal;
        cout << "'" << char(i) << "'" << "-"  << dec << int(char(i)) << "-" << hex << int(char(i)) <<endl;
        
    }
    
    return 0;
}
