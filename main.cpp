#include <bits/stdc++.h>
#include "Funcoes/serpente.h"
#include <conio.h>
using namespace std;

#include <iostream>
#include <conio.h>
#include <windows.h>
#include "Funcoes/serpente.h"

using namespace std;

int main()
{
    int opcao;
    while (true)
    {
        system("cls");

        cout << "=====================================\n";
        cout << "          S N A K E   G A M E\n";
        cout << "=====================================\n\n";

        cout << " [1] Jogar\n";
        cout << " [2] Testar teclado\n";
        cout << " [3] Creditos\n";
        cout << " [0] Sair\n\n";

        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao)
        {
            case 1:
                system("cls");
                jogar();
                break;

            case 2:
                system("cls");
                cout << "Pressione qualquer tecla.\n";
                cout << "Pressione 'q' para voltar ao menu.\n\n";

                while (true)
                {
                    if (_kbhit())
                    {
                        char tecla = _getch();

                        cout << "Tecla pressionada: " << tecla << endl;

                        if (tecla == 'q')
                            break;
                    }
                }

                break;

            case 3:
                system("cls");

                cout << "=========== CREDITOS ===========\n\n";
                cout << "Projeto Snake em C++\n";
                cout << "Desenvolvido por Guilherme Xavier\n\n";
                cout << "Pressione qualquer tecla para voltar...";
                _getch();

                break;

            case 0:
                cout << "\nEncerrando o jogo...\n";
                Sleep(1000);
                return 0;

            default:
                cout << "\nOpcao invalida!\n";
                Sleep(1200);
                break;
        }
    }
}
