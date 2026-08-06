#include <bits/stdc++.h>
#include <thread>
#include <chrono>
#include "header/serpente.h"

using namespace std;

int main(){
	int  opcao, dificuldade;
	
	while(true){
		system("clear");
		cout<<"================================"<<endl;
		cout<<"	 SNAKE "<<endl;
		cout<<"================================"<<endl;
		cout<<"[1] Jogar"<<endl;
		cout<<"[2] Dois jogadores"<<endl;
		cout<<"[3] Créditos"<<endl;
		cout<<"[4] Como jogar"<<endl;
		cout<<"[5] Sair"<<endl;
		cout<<"escolha uma opção: "<<endl;
		cin>>opcao;
		switch(opcao){
		case 1:
			system("clear");
			cout<<"============================="<<endl;
			cout<<"selecione uma dificuldade"<<endl;
			cout<<"============================="<<endl;
			cout<<"[1] fácil"<<endl;
			cout<<"[2] médio"<<endl;
			cout<<"[3] dificil"<<endl;
			cin>>dificuldade;
			switch(dificuldade){
				case 1:
					system("clear");
					jogar(250,15,15);
					//break;
					return 0;
				case 2:
					system("clear");
					jogar(150,9,9);
					//break;
					return 0;
				case 3:
					system("clear");
					jogar(50,12,12);
					//break;
					return 0;
				default:
					cout<<"escolha uma opção válida"<<endl;
					break;
			}
		case 2:
			system("clear");
			cout<<"em desenvolvimento...."<<endl;
			this_thread::sleep_for(chrono::seconds(2));
			break;
		case 3:
			system("clear");
			cout<<"================Creditos=============="<<endl;
			cout<<"projeto Snake em C++"<<endl;
			cout<<"Desenvolvido por Guilherme Xavier"<<endl;
			cout<<"Primeiro projeto no Ubuntu :)"<<endl;
			this_thread::sleep_for(chrono::seconds(2));
			break;
		case 4:
			system("clear");
			cout<<"=================Como jogar===================="<<endl;
			cout<<"para movimentar-se use as teclas W,A,S e D para mudar a direção da serpente para cima, esquerda, baixo e direita"<<endl;
			cout<<"diferentes dificuldades vão alterar a velocidade da serpente"<<endl;
			this_thread::sleep_for(chrono::seconds(7));
			break;
		case 5:
			system("clear");
			cout<<"saindo..."<<endl;
			return 0;
		case 6:
//			system("clear");
//			isca();
			this_thread::sleep_for(chrono::seconds(2));
			break;
		default:
			cout<<"escolha uma opcao válida"<<endl;
			break;
		}
	}

	return 0;
}
