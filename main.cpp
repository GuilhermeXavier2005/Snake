#include <bits/stdc++.h>
#include "Funcoes/serpente.h"
#include <conio.h>
using namespace std;


int main(int argc, char** argv) {
	cout<<"MENU"<<endl;
	cout<<"[1] jogar"<<endl;
	cout<<"[2] detectar tecla"<<endl;
	cout<<"[3] sair"<<endl;
	int valor;
	cin>>valor;
	switch(valor){
		case 1:
			jogar();
			break;
		case 2:
			while(true){
				if(_kbhit()){
					char tecla = getch();
					cout<<"tecla pressionada: "<<tecla<<endl;
					if(tecla == 'q'){
						break;
					}
				}
			}
			break;
		default:
			cout<<"saindo.."<<endl;
			break;
	}
}
