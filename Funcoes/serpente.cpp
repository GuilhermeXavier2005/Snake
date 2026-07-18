#include <bits/stdc++.h>
#include <windows.h>
#include "serpente.h"
using namespace std;

void mostrarCampo(int &x, char campo[9][9]){
	
	system("cls");
	for(int j=0;j<9;j++){
		for(int l=0;l<9;l++){
			cout<< campo[j][l]<<" ";
		}
		cout<<endl;
	}
	
}

void mostrarSerpente(char campo[9][9], int &direcaoX, int &direcaoY, char &ultimaTeclaX, char &ultimaTeclaY){
	if(ultimaTeclaX=='d'){
		direcaoX++;
		campo[direcaoY][direcaoX] = 'S';
		campo[direcaoY][direcaoX-1] = '*';
	}
	else if(ultimaTeclaY=='w'){
		direcaoY--;
		campo[direcaoY][direcaoX] = 'S';
		campo[direcaoY+1][direcaoX] = '*';
	}
	else if(ultimaTeclaY=='s'){
		direcaoY++;
		campo[direcaoY][direcaoX] = 'S';
		campo[direcaoY-1][direcaoX] = '*';
	}
	else if(ultimaTeclaX=='a'){
		direcaoX--;
		campo[direcaoY][direcaoX] = 'S';
		campo[direcaoY][direcaoX+1] = '*';
	}
}

