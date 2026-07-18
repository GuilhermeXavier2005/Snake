#ifndef serpente
#define serpente

void mostrarCampo(int &x, char campo[][9]);
void detectarTecla(char campo[][9], int &direcao, int &ultimaPosicaoX, char &ultimaTeclaX, char &ultimaTeclaY);
void jogar();
void mostrarSerpente(char campo[9][9], int &direcaoX, int &direcaoY, char &ultimaTeclaX, char &ultimaTeclaY);

#endif
