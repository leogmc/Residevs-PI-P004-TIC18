#include <iostream>
#include <iomanip> // Incluir a biblioteca para manipulação de formato
using namespace std;
int main(){
       
/*a.Imprima na tela, utilizando cout, cada um dos caracteres numéricos e seu correspondente código numérico. 
Como modificar o comportamento do cout para imprimir um objeto de tipo char como caractere e como número?*/
    cout <<"a)"<<endl;
    cout << "'0' = " << int('0') << endl;
    cout << "'1' = " << int('1') << endl;
    cout << "'2' = " << int('2') << endl;
    cout << "'3' = " << int('3') << endl;
    cout << "'4' = " << int('4') << endl;
    cout << "'5' = " << int('5') << endl;
    cout << "'6' = " << int('6') << endl;
    cout << "'7' = " << int('7') << endl;
    cout << "'8' = " << int('8') << endl;
    cout << "'9' = " << int('9') << endl << endl;

/*b. Modifique o exercício anterior para que a saída imprima também
o código numérico em octal e em hexadecimal.*/
    cout <<"b)"<<endl;
    cout << "'0' = " << "Decimal: " << dec << int('0') << " - Octal: " << oct <<  int('0') <<  " - Hexadecimal: "  << hex <<  int('0') << endl;
    cout << "'1' = " << "Decimal: " << dec << int('1') << " - Octal: " << oct <<  int('1') <<  " - Hexadecimal: "  << hex <<  int('1') << endl;
    cout << "'2' = " << "Decimal: " << dec << int('2') << " - Octal: " << oct <<  int('2') <<  " - Hexadecimal: "  << hex <<  int('2') << endl;
    cout << "'3' = " << "Decimal: " << dec << int('3') << " - Octal: " << oct <<  int('3') <<  " - Hexadecimal: "  << hex <<  int('3') << endl;
    cout << "'4' = " << "Decimal: " << dec << int('4') << " - Octal: " << oct <<  int('4') <<  " - Hexadecimal: "  << hex <<  int('4') << endl;
    cout << "'5' = " << "Decimal: " << dec << int('5') << " - Octal: " << oct <<  int('5') <<  " - Hexadecimal: "  << hex <<  int('5') << endl;
    cout << "'6' = " << "Decimal: " << dec << int('6') << " - Octal: " << oct <<  int('6') <<  " - Hexadecimal: "  << hex <<  int('6') << endl;
    cout << "'7' = " << "Decimal: " << dec << int('7') << " - Octal: " << oct <<  int('7') <<  " - Hexadecimal: "  << hex <<  int('7') << endl;
    cout << "'8' = " << "Decimal: " << dec << int('8') << " - Octal: " << oct <<  int('8') <<  " - Hexadecimal: "  << hex <<  int('8') << endl;
    cout << "'9' = " << "Decimal: " << dec << int('9') << " - Octal: " << oct <<  int('9') <<  " - Hexadecimal: "  << hex <<  int('9') << endl << endl;

/*c. Acrescente ao código do exercício anterior a possibilidade de ler um
caractere qualquer e imprima no mesmo formato do inciso anterior.*/

    cout <<"c)"<<endl;
    char caracter;
    cout << "Digite um caracter: ";
    cin >> caracter;
    cout << caracter<<" = "
    << "Decimal: " << dec << int(caracter)
    <<  " - Octal: " << oct <<  int(caracter) 
    <<  " - Hexadecimal: "<< hex <<  int(caracter) << endl << endl;

/*d. Pesquise como fazer para armazenar uma variável os caracteres
especiais ‘ç’ e ‘ã’. Acrescente no código do exercício anterior um
exemplo que demonstra como usar este recurso.*/
    cout <<"d)"<<endl;
    char cedilha = 135;
    char aTill = 198;
    cout << "'"<< cedilha << "' = " 
    << "Decimal: " << int(cedilha)
    <<  " - Octal: " << oct <<  int(cedilha)
    <<  " - Hexadecimal: " << hex <<  int(cedilha) << endl;
    cout << "'"<< aTill << "' = "
    << "Decimal: " << hex << int(aTill)
    <<  " - Octal: " << oct <<  int(aTill) 
    <<  " - Hexadecimal: " << hex <<  int(aTill) << endl << endl;
    return 0;
    }