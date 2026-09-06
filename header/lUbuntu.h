#include <cstdio>
#include <fcntl.h>
#include <termios.h>
#include <unistd.h>
#include <thread>
#include <chrono>

/*void contarTempo(int tempo){
	this_thread::sleep_for(chrono::seconds(tempo));
}*/

char getch(){
	termios antigo, novo;
	tcgetattr(STDIN_FILENO, &antigo);
	novo = antigo;
	novo.c_lflag &= ~(ICANON | ECHO);
	tcsetattr(STDIN_FILENO, TCSANOW, &novo);
	char c = getchar();
	tcsetattr(STDIN_FILENO, TCSANOW, &antigo);
	return c;
}

int kbhit(){/*verifica se há tecla disponivel*/
	termios antigo, novo;
	tcgetattr(STDIN_FILENO, &antigo);
	novo = antigo;
	novo.c_lflag &= ~(ICANON | ECHO);
	tcsetattr(STDIN_FILENO, TCSANOW, &novo);
	int flags = fcntl(STDIN_FILENO, F_GETFL, 0);
	fcntl(STDIN_FILENO, F_SETFL, flags | O_NONBLOCK);
	int ch = getchar();
	tcsetattr(STDIN_FILENO, TCSANOW, &antigo);
	fcntl(STDIN_FILENO, F_SETFL, flags);
	
	if(ch != EOF){ungetc(ch, stdin);return 1;}
	return 0;
}
