#include <bits/stdc++.h>
#include <conio.h>
#include "serpente.h"
using namespace std;

void detectarTecla(char campo[9][9], int &direcao, int &ultimaPosicaoX, char &ultimaTeclaX, char &ultimaTeclaY){
	char cobra = 'S';
	if (_kbhit())
	    {
	        char tecla = _getch();
			if(tecla == 'a'){
			/*	if(ultimaTecla=='d'){
					ultimaTecla = 'a';
					direcao = ultimaPosicaoX-1;
					campo[0][ultimaPosicaoX] = 'S';
					ultimaPosicaoX= ultimaPosicaoX+1;
					campo[0][ultimaPosicaoX] = '*';
					cout<<"tecla "<< tecla<<" direcao "<<direcao<<" ultima tecla "<<ultimaTecla<<endl;
				}else{
					direcao=direcao*(-1);
					ultimaPosicaoX = direcao+1;
					campo[0][direcao--] = cobra;
					ultimaTecla = 'a';
					campo[0][ultimaPosicaoX] = '*';
					cout<<"tecla "<< tecla<<" direcao "<<direcao<<" ultima tecla "<<ultimaTecla<<endl;
				}
				direcao = direcao*(-1);*/
				ultimaTeclaX = 'a';
				ultimaTeclaY = 'n';
			}
			if(tecla=='d'){
			/*	if(ultimaTecla=='a'){
					ultimaTecla = 'd';
					direcao = ultimaPosicaoX+1;
					campo[0][ultimaPosicaoX] = 'S';
					ultimaPosicaoX= ultimaPosicaoX-1;
					campo[0][ultimaPosicaoX] = '*';
					cout<<"tecla "<< tecla<<" direcao "<<direcao<<" ultima tecla "<<ultimaTecla<<endl;
				}else{
					direcao=abs(direcao);
					ultimaPosicaoX = direcao-1;
					campo[0][direcao++] = cobra;
					ultimaTecla = 'd';
					campo[0][ultimaPosicaoX] = '*';
					cout<<"tecla "<< tecla<<" direcao "<<direcao<<" ultima tecla "<<ultimaTecla<<endl;
				}
				direcao=abs(direcao);*/
				ultimaTeclaX = 'd';
				ultimaTeclaY = 'n';
			}
			if(tecla =='s'){
				ultimaTeclaY='s';
				ultimaTeclaX='n';
			}
			if(tecla =='w'){
				ultimaTeclaY='w';
				ultimaTeclaX='n';
			}
		}
		
}
