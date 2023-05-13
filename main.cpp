#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <cstdlib>
#include <ctime>
#include <unistd.h>


char velha[3][3];
char lista[9] = {'1','2','3','4','5','6','7','8','9'};
int cont, x[3][3],o[3][3],opicaoAI[100],vitoriasO = 0,vitoriasX = 0,empate_historico = 0;
bool empate=false;

void atribuicao(){
	cont = 0;
	for(int i = 0; i < 3; i++){
		for(int t = 0; t < 3; t++){
			velha[i][t] = lista[cont];
			cont++;
		}
	}
	for(int i = 0; i < 3; i++){
		for(int t = 0; t < 3; t++){
			x[i][t] = 0;
			o[i][t] = 0;
		}
	}
	for(int i = 0; i < 100; i++){
		opicaoAI[i] = 1 + rand() % 9;
	}
}



void imagem(){
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", velha[0][0], velha[0][1], velha[0][2]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", velha[1][0], velha[1][1], velha[1][2]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", velha[2][0], velha[2][1], velha[2][2]);
	printf("     |     |     \n");
}

void historicoDePartidas(){
	printf("\n\n===Historico de partidas===\n\n");
	printf("Vitoria X - %d\n", vitoriasX);
	printf("Vitoria O - %d\n", vitoriasO);
	printf("Empates - %d\n", empate_historico);
}

bool vitoria(){
	if(x[0][0] && x[0][1] && x[0][2]){
		system("cls");
		vitoriasX++;
		imagem();
		printf("X é o vencedor\n\n");
		historicoDePartidas();
		system("pause");
		empate = false;
		return true;
	}
	else if(x[1][0] && x[1][1] && x[1][2]){
		system("cls");
		vitoriasX++;
		imagem();
		printf("X é o vencedor\n\n");
		historicoDePartidas();
		system("pause");
		empate = false;
		return true;
	}
	else if(x[2][0] && x[2][1] && x[2][2]){
		system("cls");
		vitoriasX++;
		imagem();
		printf("X é o vencedor\n\n");
		historicoDePartidas();
		system("pause");
		empate = false;
		return true;
	}
	else if(x[0][0] && x[1][0] && x[2][0]){
		system("cls");
		vitoriasX++;
		imagem();
		printf("X é o vencedor\n\n");
		historicoDePartidas();
		system("pause");
		empate = false;
		return true;
	}
	else if(x[0][1] && x[1][1] && x[2][1]){
		system("cls");
		vitoriasX++;
		imagem();
		printf("X é o vencedor\n\n");
		historicoDePartidas();
		system("pause");
		empate = false;
		return true;
	}
	else if(x[0][2] && x[1][2] && x[2][2]){
		system("cls");
		vitoriasX++;
		imagem();
		printf("X é o vencedor\n\n");
		historicoDePartidas();
		system("pause");
		empate = false;
		return true;
	}
	else if(x[0][0] && x[1][1] && x[2][2]){
		system("cls");
		vitoriasX++;
		imagem();
		printf("X é o vencedor\n\n");
		historicoDePartidas();
		system("pause");
		empate = false;
		return true;
	}
	else if(x[0][2] && x[1][1] && x[2][0]){
		system("cls");
		vitoriasX++;
		imagem();
		printf("X é o vencedor\n\n");
		historicoDePartidas();
		system("pause");
		empate = false;
		return true;
	}
	else if(o[0][0] && o[0][1] && o[0][2]){
		system("cls");
		vitoriasO++;
		imagem();
		printf("O é o vencedor\n\n");
		historicoDePartidas();
		system("pause");
		empate = false;
		return true;
	}
	else if(o[1][0] && o[1][1] && o[1][2]){
		system("cls");
		vitoriasO++;
		imagem();
		printf("O é o vencedor\n\n");
		historicoDePartidas();
		system("pause");
		empate = false;
		return true;
	}
	else if(o[2][0] && o[2][1] && o[2][2]){
		system("cls");
		vitoriasO++;
		imagem();
		printf("O é o vencedor\n\n");
		historicoDePartidas();
		system("pause");
		empate = false;
		return true;
	}
	else if(o[0][0] && o[1][0] && o[2][0]){
		system("cls");
		vitoriasO++;
		imagem();
		printf("O é o vencedor\n\n");
		historicoDePartidas();
		system("pause");
		empate = false;
		return true;
	}
	else if(o[0][1] && o[1][1] && o[2][1]){
		system("cls");
		vitoriasO++;
		imagem();
		printf("O é o vencedor\n\n");
		historicoDePartidas();
		system("pause");
		empate = false;
		return true;
	}
	else if(o[0][2] && o[1][2] && o[2][2]){
		system("cls");
		vitoriasO++;
		imagem();
		printf("O é o vencedor\n\n");
		historicoDePartidas();
		system("pause");
		empate = false;
		return true;
	}
	else if(o[0][0] && o[1][1] && o[2][2]){
		system("cls");
		vitoriasO++;
		imagem();
		printf("O é o vencedor\n\n");
		historicoDePartidas();
		system("pause");
		empate = false;
		return true;
	}
	else if(o[0][2] && o[1][1] && o[2][0]){
		system("cls");
		vitoriasO++;
		imagem();
		printf("O é o vencedor\n\n");
		historicoDePartidas();
		system("pause");
		empate = false;
		return true;
	}
	else{
		empate = true;
		return false;
	}
}

void velhaOline(){
	atribuicao();
	int opicao;
	
	for(int con = 0; con < 9; con++){
		system("cls");
		imagem();
		
		if(con % 2 == 0){
			printf("escolha uma posição para jogar (x): ");
			scanf("%d", &opicao);
			
			if(opicao == 1 && x[0][0] == 0 && o[0][0] == 0){
				velha[0][0] = 'X';
				x[0][0] = 1;
				if(vitoria()){
					return;
				}
			}
			else if(opicao == 2 && x[0][1] == 0 && o[0][1] == 0){
				velha[0][1] = 'X';
				x[0][1] = 1;
				if(vitoria()){
					return;
				}
			}
			else if(opicao == 3 && x[0][2] == 0 && o[0][2] == 0){
				velha[0][2] = 'X';
				x[0][2] = 1;
				if(vitoria()){
					return;
				}
			}
			else if(opicao == 4 && x[1][0] == 0 && o[1][0] == 0){
				velha[1][0] = 'X';
				x[1][0] = 1;
				if(vitoria()){
					return;
				}
			}
			else if(opicao == 5 && x[1][1] == 0 && o[1][1] == 0){
				velha[1][1] = 'X';
				x[1][1] = 1;
				if(vitoria()){
					return;
				}
			}
			else if(opicao == 6 && x[1][2] == 0 && o[1][2] == 0){
				velha[1][2] = 'X';
				x[1][2] = 1;
				if(vitoria()){
					return;
				}
			}
			else if(opicao == 7 && x[2][0] == 0 && o[2][0] == 0){
				velha[2][0] = 'X';
				x[2][0] = 1;
				if(vitoria()){
					return;
				}
			}
			else if(opicao == 8 && x[2][1] == 0 && o[2][1] == 0){
				velha[2][1] = 'X';
				x[2][1] = 1;
				if(vitoria()){
					return;
				}
			}
			else if(opicao == 9 && x[2][2] == 0 && o[2][2] == 0){
				velha[2][2] = 'X';
				x[2][2] = 1;
				if(vitoria()){
					return;
				}
			}
			else{
				printf("####Você macou uma opicão errada tente de novo####\n\n");
				con--;
				system("pause");
			}
		}
		
		else{
			printf("escolha uma posição para jogar (o): ");
			scanf("%d", &opicao);
			
			if(opicao == 1 && x[0][0] == 0 && o[0][0] == 0){
				velha[0][0] = 'O';
				o[0][0] = 1;
				if(vitoria()){
					return;
				}
			}
			else if(opicao == 2 && x[0][1] == 0 && o[0][1] == 0){
				velha[0][1] = 'O';
				o[0][1] = 1;
				if(vitoria()){
					return;
				}
			}
			else if(opicao == 3 && x[0][2] == 0 && o[0][2] == 0){
				velha[0][2] = 'O';
				o[0][2] = 1;
				if(vitoria()){
					return;
				}
			}
			else if(opicao == 4 && x[1][0] == 0 && o[1][0] == 0){
				velha[1][0] = 'O';
				o[1][0] = 1;
				if(vitoria()){
					return;
				}
			}
			else if(opicao == 5 && x[1][1] == 0 && o[1][1] == 0){
				velha[1][1] = 'O';
				o[1][1] = 1;
				if(vitoria()){
					return;
				}
			}
			else if(opicao == 6 && x[1][2] == 0 && o[1][2] == 0){
				velha[1][2] = 'O';
				o[1][2] = 1;
				if(vitoria()){
					return;
				}
			}
			else if(opicao == 7 && x[2][0] == 0 && o[2][0] == 0){
				velha[2][0] = 'O';
				o[2][0] = 1;
				if(vitoria()){
					return;
				}
			}
			else if(opicao == 8 && x[2][1] == 0 && o[2][1] == 0){
				velha[2][1] = 'O';
				o[2][1] = 1;
				if(vitoria()){
					return;
				}
			}
			else if(opicao == 9 && x[2][2] == 0 && o[2][2] == 0){
				velha[2][2] = 'O';
				o[2][2] = 1;
				if(vitoria()){
					return;
				}
			}
			else{
				printf("####Você macou uma opicão errada tente de novo####\n\n");
				con--;
				system("pause");
			}
		}
	}
}

void facilAI(){
	atribuicao();
	int opicao, procimo_numero = 0;
	bool rep = true, des = false;
	int rdes = 0;
	
	for(int con = 0; con < 9; con++){
		system("cls");
		imagem();
		
		if(con % 2 == 0){
			printf("escolha uma posição para jogar (x): ");
			scanf("%d", &opicao);
			
			if(opicao == 1 && x[0][0] == 0 && o[0][0] == 0){
				velha[0][0] = 'X';
				x[0][0] = 1;
				des = false;
				if(vitoria()){
					return;
				}
			}
			else if(opicao == 2 && x[0][1] == 0 && o[0][1] == 0){
				velha[0][1] = 'X';
				x[0][1] = 1;
				des = false;
				if(vitoria()){
					return;
				}
			}
			else if(opicao == 3 && x[0][2] == 0 && o[0][2] == 0){
				velha[0][2] = 'X';
				x[0][2] = 1;
				des = false;
				if(vitoria()){
					return;
				}
			}
			else if(opicao == 4 && x[1][0] == 0 && o[1][0] == 0){
				velha[1][0] = 'X';
				x[1][0] = 1;
				des = false;
				if(vitoria()){
					return;
				}
			}
			else if(opicao == 5 && x[1][1] == 0 && o[1][1] == 0){
				velha[1][1] = 'X';
				x[1][1] = 1;
				des = false;
				if(vitoria()){
					return;
				}
			}
			else if(opicao == 6 && x[1][2] == 0 && o[1][2] == 0){
				velha[1][2] = 'X';
				x[1][2] = 1;
				des = false;
				if(vitoria()){
					return;
				}
			}
			else if(opicao == 7 && x[2][0] == 0 && o[2][0] == 0){
				velha[2][0] = 'X';
				x[2][0] = 1;
				des = false;
				if(vitoria()){
					return;
				}
			}
			else if(opicao == 8 && x[2][1] == 0 && o[2][1] == 0){
				velha[2][1] = 'X';
				x[2][1] = 1;
				des = false;
				if(vitoria()){
					return;
				}
			}
			else if(opicao == 9 && x[2][2] == 0 && o[2][2] == 0){
				velha[2][2] = 'X';
				x[2][2] = 1;
				des = false;
				if(vitoria()){
					return;
				}
			}
			else{
				printf("####Você macou uma opicão errada tente de novo####\n\n");
				con--;
				system("pause");
			}
		}
		
		else{
			do{
				
				if(rdes % 2 != 0){
					des = false;
				}
				
				opicao = opicaoAI[procimo_numero];
				
				
				if(o[0][0] == 1 && o[0][1] == 1 && des == false && x[0][2] != 1){
					opicao = 3;
				}
				else if(o[1][0] == 1 && o[1][1] == 1 && des == false && x[1][2] != 1){
					opicao = 6;
				}
				else if(o[2][0] == 1 && o[2][1] == 1 && des == false && x[2][2] != 1){
					opicao = 9;
				}
				else if(o[0][0] == 1 && o[0][2] == 1 && des == false && x[0][1] != 1){
					opicao = 2;
				}
				else if(o[1][0] == 1 && o[1][2] == 1 && des == false && x[1][1] != 1){
					opicao = 5;
				}
				else if(o[2][0] == 1 && o[2][2] == 1 && des == false && x[2][1] != 1){
					opicao = 8;
				}
				else if(o[0][1] == 1 && o[0][2] == 1 && des == false && x[0][0] != 1){
					opicao = 1;
				}
				else if(o[1][1] == 1 && o[1][2] == 1 && des == false && x[1][0] != 1){
					opicao = 4;
				}
				else if(o[2][1] == 1 && o[2][2] == 1 && des == false && x[2][0] != 1){
					opicao = 7;
				}
				else if(o[0][0] == 1 && o[1][0] == 1 && des == false && x[2][0] != 1){
					opicao = 7;
				}
				else if(o[0][1] == 1 && o[1][1] == 1 && des == false && x[2][1] != 1){
					opicao = 8;
				}
				else if(o[0][2] == 1 && o[1][2] == 1 && des == false && x[2][2] != 1){
					opicao = 9;
				}
				else if(o[0][0] == 1 && o[2][0] == 1 && des == false && x[1][0] != 1){
					opicao = 4;
				}
				else if(o[0][1] == 1 && o[2][1] == 1 && des == false && x[1][1] != 1){
					opicao = 5;
				}
				else if(o[0][2] == 1 && o[2][2] == 1 && des == false && x[1][2] != 1){
					opicao = 6;
				}
				else if(o[1][0] == 1 && o[2][0] == 1 && des == false && x[0][0] != 1){
					opicao = 1;
				}
				else if(o[1][1] == 1 && o[2][1] == 1 && des == false && x[0][1] != 1){
					opicao = 2;
				}
				else if(o[1][2] == 1 && o[2][2] == 1 && des == false && x[0][2] != 1){
					opicao = 3;
				}
				else if(o[0][0] == 1 && o[1][1] == 1 && des == false && x[2][2] != 1){
					opicao = 9;
				}
				else if(o[1][1] == 1 && o[2][2] == 1 && des == false && x[0][0] != 1){
					opicao = 1;
				}
				else if(o[0][0] == 1 && o[2][2] == 1 && des == false && x[1][2] != 1){
					opicao = 6;
				}
				else if(o[0][2] == 1 && o[1][1] == 1 && des == false && x[2][0] != 1){
					opicao = 7;
				}
				else if(o[1][1] == 1 && o[2][0] == 1 && des == false && x[0][2] != 1){
					opicao = 3;
				}
				else if(o[0][2] == 1 && o[2][0] == 1 && des == false && x[1][1] != 1){
					opicao = 5;
				}
				else if(x[0][0] == 1 && x[0][1] == 1 && des == false && o[0][2] != 1){
					opicao = 3;
				}
				else if(x[1][0] == 1 && x[1][1] == 1 && des == false && o[1][2] != 1){
					opicao = 6;
				}
				else if(x[2][0] == 1 && x[2][1] == 1 && des == false && o[2][2] != 1){
					opicao = 9;
				}
				else if(x[0][0] == 1 && x[0][2] == 1 && des == false && o[0][1] != 1){
					opicao = 2;
				}
				else if(x[1][0] == 1 && x[1][2] == 1 && des == false && o[1][1] != 1){
					opicao = 5;
				}
				else if(x[2][0] == 1 && x[2][2] == 1 && des == false && o[2][1] != 1){
					opicao = 8;
				}
				else if(x[0][1] == 1 && x[0][2] == 1 && des == false && o[0][0] != 1){
					opicao = 1;
				}
				else if(x[1][1] == 1 && x[1][2] == 1 && des == false && o[1][0] != 1){
					opicao = 4;
				}
				else if(x[2][1] == 1 && x[2][2] == 1 && des == false && o[2][0] != 1){
					opicao = 7;
				}
				else if(x[0][0] == 1 && x[1][0] == 1 && des == false && o[2][0] != 1){
					opicao = 7;
				}
				else if(x[0][1] == 1 && x[1][1] == 1 && des == false && o[2][1] != 1){
					opicao = 8;
				}
				else if(x[0][2] == 1 && x[1][2] == 1 && des == false && o[2][2] != 1){
					opicao = 9;
				}
				else if(x[0][0] == 1 && x[2][0] == 1 && des == false && o[1][0] != 1){
					opicao = 4;
				}
				else if(x[0][1] == 1 && x[2][1] == 1 && des == false && o[1][1] != 1){
					opicao = 5;
				}
				else if(x[0][2] == 1 && x[2][2] == 1 && des == false && o[1][2] != 1){
					opicao = 6;
				}
				else if(x[1][0] == 1 && x[2][0] == 1 && des == false && o[0][0] != 1){
					opicao = 1;
				}
				else if(x[1][1] == 1 && x[2][1] == 1 && des == false && o[0][1] != 1){
					opicao = 2;
				}
				else if(x[1][2] == 1 && x[2][2] == 1 && des == false && o[0][2] != 1){
					opicao = 3;
				}
				else if(x[0][0] == 1 && x[1][1] == 1 && des == false && o[2][2] != 1){
					opicao = 9;
				}
				else if(x[1][1] == 1 && x[2][2] == 1 && des == false && o[0][0] != 1){
					opicao = 1;
				}
				else if(x[0][0] == 1 && x[2][2] == 1 && des == false && o[1][2] != 1){
					opicao = 6;
				}
				else if(x[0][2] == 1 && x[1][1] == 1 && des == false && o[2][0] != 1){
					opicao = 7;
				}
				else if(x[1][1] == 1 && x[2][0] == 1 && des == false && o[0][2] != 1){
					opicao = 3;
				}
				else if(x[0][2] == 1 && x[2][0] == 1 && des == false && o[1][1] != 1){
					opicao = 5;
				}
				
				if(opicao == 1 && x[0][0] == 0 && o[0][0] == 0){
					velha[0][0] = 'O';
					o[0][0] = 1;
					rep = false;
					rdes++;
					if(vitoria()){
						return;
					}
				}
				else if(opicao == 2 && x[0][1] == 0 && o[0][1] == 0){
					velha[0][1] = 'O';
					o[0][1] = 1;
					rep = false;
					rdes++;
					if(vitoria()){
						return;
					}
				}
				else if(opicao == 3 && x[0][2] == 0 && o[0][2] == 0){
					velha[0][2] = 'O';
					o[0][2] = 1;
					rep = false;
					rdes++;
					if(vitoria()){
						return;
					}
				}
				else if(opicao == 4 && x[1][0] == 0 && o[1][0] == 0){
					velha[1][0] = 'O';
					o[1][0] = 1;
					rep = false;
					rdes++;
					if(vitoria()){
						return;
					}
				}
				else if(opicao == 5 && x[1][1] == 0 && o[1][1] == 0){
					velha[1][1] = 'O';
					o[1][1] = 1;
					rep = false;
					rdes++;
					if(vitoria()){
						return;
					}
				}
				else if(opicao == 6 && x[1][2] == 0 && o[1][2] == 0){
					velha[1][2] = 'O';
					o[1][2] = 1;
					rep = false;
					rdes++;
					if(vitoria()){
						return;
					}
				}
				else if(opicao == 7 && x[2][0] == 0 && o[2][0] == 0){
					velha[2][0] = 'O';
					o[2][0] = 1;
					rep = false;
					rdes++;
					if(vitoria()){
						return;
					}
				}
				else if(opicao == 8 && x[2][1] == 0 && o[2][1] == 0){
					velha[2][1] = 'O';
					o[2][1] = 1;
					rep = false;
					rdes++;
					if(vitoria()){
						return;
					}
				}
				else if(opicao == 9 && x[2][2] == 0 && o[2][2] == 0){
					velha[2][2] = 'O';
					o[2][2] = 1;
					rep = false;
					rdes++;
					if(vitoria()){
						return;
					}
				}
				else{
					procimo_numero++;
					rdes++;
//					printf("Pensando...");
//					sleep(3);
					rep = true;
					des = true;
				}
			}while(rep == true);
		}
	}
}

int main(){
	
	setlocale(LC_ALL,"");
	srand(time(NULL));
	
	int opicao;
	bool rep = true;
	
	do{
		
		printf("===JOGO DA VELHA===\n\n1 - 1x1\n2 - 1xAI\n3 - Historico de Partidas\n4 - Sair\n\nEscolha a opicão (use apenas numeros): ");
		scanf("%d", &opicao);
		
		switch(opicao){
			case 1:
				velhaOline();
				system("cls");
				if(empate == true){
					empate_historico++;
					imagem();
					printf("===EMPATE===\n\n");
					historicoDePartidas();
					system("pause");
				}
				system("cls");
				break;
			case 2:
				facilAI();
				system("cls");
				if(empate == true){
					empate_historico++;
					imagem();
					printf("===EMPATE===\n\n");
					historicoDePartidas();
					system("pause");
				}
				system("cls");
				break;
			case 3:
				system("cls");
				historicoDePartidas();
				system("pause");
				system("cls");
				break;
			case 4:
				rep = false;
				break;
			default:
				printf("Valor imvalido\n\n");
				system("pause");
				system("cls");
		}
	}while(rep == true);
}