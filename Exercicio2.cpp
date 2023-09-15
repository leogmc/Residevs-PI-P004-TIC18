#include <iostream>

using namespace std;

#define MAX 5

int main (void) {
    char letra = '0';

    cout << "\n********* Decimal ********* \n";
    for (int i = 0; i < MAX; i++)
    {
        cout << letra << " = " << dec << int(letra);
        int(letra++);

        cout << "\t\t" << letra << " = " << dec << int(letra) << endl;
        int(letra++);
    }

    letra = '0';
    cout << "\n********* Hexadecimal ********* \n";
    for (int i = 0; i < MAX; i++)
    {
        cout << letra << " = " << hex << int(letra);
        int(letra++);

        cout << "\t\t" << letra << " = " << hex << int(letra) << endl;
        int(letra++);
    }

    letra = '0';
    cout << "\n********* Octal ********* \n";
    for (int i = 0; i < MAX; i++)
    {
        cout << letra << " = " << oct << int(letra);
        int(letra++);

        cout << "\t\t" << letra << " = " << oct << int(letra) << endl;
        int(letra++);
    }

    cout << endl;

    cout << "\n********* Lendo um caractere ********* \n";
    cout << "Digite um caractere: ";
    cin >> letra;

    cout << "\n********* Decimal ********* \n";
    cout << letra << " = " << dec << int(letra);

    cout << "\n\n********* Hexadecimal ********* \n";
    cout << letra << " = " << hex << int(letra);

    cout << "\n\n********* Octal ********* \n";
    cout << letra << " = " << oct << int(letra);

    cout << endl;

    cout << "\n********* C cedilha ********* \n";
    letra = 135;

    cout << "\n********* Decimal ********* \n";
    cout << letra << " = " << dec << int(letra);

    cout << "\n\n********* Hexadecimal ********* \n";
    cout << letra << " = " << hex << int(letra);

    cout << "\n\n********* Octal ********* \n";
    cout << letra << " = " << oct << int(letra);

    cout << "\n\n********* a til ********* \n";
    letra = 198;

    cout << "\n********* Decimal ********* \n";
    cout << letra << " = " << dec << int(letra);

    cout << "\n\n********* Hexadecimal ********* \n";
    cout << letra << " = " << hex << int(letra);

    cout << "\n\n********* Octal ********* \n";
    cout << letra << " = " << oct << int(letra);

    cout << endl << endl;

    return 0;
}