#include <bits/stdc++.h>
#include <conio.h>
#include "serpente.h"
using namespace std;

void detectarTecla(struct Cobra *cobra){
	if (_kbhit())
	    {
	        char tecla = _getch();
			if(tecla == 'a'){
				cobra->ultimaTeclaX = 'a';
				cobra->ultimaTeclaY = 'n';
			}
			if(tecla=='d'){
				cobra->ultimaTeclaX = 'd';
				cobra->ultimaTeclaY = 'n';
			}
			if(tecla =='s'){
				cobra->ultimaTeclaY='s';
				cobra->ultimaTeclaX='n';
			}
			if(tecla =='w'){
				cobra->ultimaTeclaY='w';
				cobra->ultimaTeclaX='n';
			}
		}
		
}
