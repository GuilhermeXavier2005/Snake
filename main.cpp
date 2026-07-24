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

        cout << " [1] Um jogador\n";
        cout << " [2] Dois jogadores\n";
        cout << " [3] Creditos\n";
        cout << " [0] Sair\n\n";

        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao)
        {
            case 1:
                system("cls");

		        cout << "=====================================\n";
		        cout << "       selecione a dificuldade\n";
		        cout << "=====================================\n\n";
		
		        cout << " [1] facil\n";
		        cout << " [2] medio\n";
		        cout << " [3] dificil\n";
		
		        cout << "Escolha uma opcao: ";
		        cin >> opcao;
		        switch(opcao){
			        	case 1:
						jogar(250, 15, 15);
                	break;
                	case 2:
						jogar(150, 12, 12);
	                	break;
                	case 3:
						jogar(50, 9, 9);
	                	break;
                	default:
	                	cout << "\nOpcao invalida!\n";
		                Sleep(1200);
		                break;
				}
                break;
            case 2:
                system("cls");
                cout<<"em desenvolvimento.."<<endl;
                Sleep(1300);
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
