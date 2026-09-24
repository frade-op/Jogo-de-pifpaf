#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "biblioteca.h"
	
void mudar1();
void compar1();
void monte1();
void mostrar1();
void mudar2();
void compar2();
void monte2();
void mostrar2();
void mudar3();
void compar3();
void monte3();
void mostrar3();
void mudar4();
void compar4();
void monte4();
void mostrar4();
void apresenta1();
void apresenta2();
void apresenta3();
void apresenta4();
void opcao();

void menu(){
	system("cls");
	printf("Vamos comecar o jogo!\n");
	system("PAUSE>>null");
	switch(jogadores){
		case 2:
			for(jogada=0, partida=0, sair=0; jogadas<104; jogadas++){//a jogada so termina quando � o outro jogador
				mudar:
				switch(jogada){
					case 0:
						apresenta1();
						again:
						printf("\nJogador 1:");
						opcao();
						do{
							scanf("%i", &modo);
						}while((modo<1)||(modo>5));
						switch(modo){
							case 1:
								mudar1();
								goto mudar;
							break;
							case 2:
								compar1();
							break;
							case 3:
								if(jogadas==0){
									goto again;
								}else{
									monte1();
								}
							break;
							case 4:
								mostrar1();
							break;
							case 5:
								sair++;
							break;
						}
						if(ganha==0){
							printf("\nFim da jogada!\nVez do jogador 2\n");	
						}
					break;
					case 1:
						apresenta2();
						again2:
						printf("\nJogador 2:");
						opcao();
						do{
							scanf("%i", &modo);
						}while((modo<1)||(modo>5));
						switch(modo){
							case 1:
								mudar2();
								goto mudar;
							break;
							case 2:
								compar2();
							break;
							case 3:
								monte2();
							break;
							case 4:
								mostrar2();
							break;
							case 5:
								sair++;
							break;
						}
						if(ganha==0){
							printf("\nFim da jogada!\nVez do jogador 1\n");	
						}
					break;
				}
				if(jogada==0){jogada++;}
				else{jogada=0;}
				if((sair!=0)||(ganha>0)){goto sair;}
				system("PAUSE>>null");
				system("cls");
			}
		break;
		case 3:
			for(jogada=0, partida=0; jogada<104; jogadas++){//a jogada so termina quando � o outro jogador
				mudar2:
				switch(jogada){
					case 0:
						apresenta1();
						again3:
						printf("\nJogador 1:");
						opcao();
						do{
							scanf("%i", &modo);
						}while((modo<1)||(modo>5));
						switch(modo){
							case 1:
								mudar1();
								goto mudar2;
							break;
							case 2:
								compar1();
							break;
							case 3:
								if(jogadas==0){
									goto again;
								}else{
									monte1();
								}
							break;
							case 4:
								mostrar1();
							break;
							case 5:
								sair++;
							break;
						}
						if(ganha==0){
							printf("\nFim da jogada!\nVez do jogador 2\n");	
						}
					break;
					case 1:
						apresenta2();
						again4:
						printf("\nJogador 2:");
						opcao();
						do{
							scanf("%i", &modo);
						}while((modo<1)||(modo>5));
						switch(modo){
							case 1:
								mudar2();
								goto mudar2;
							break;
							case 2:
								compar2();
							break;
							case 3:
								monte2();
							break;
							case 4:
								mostrar2();
							break;
							case 5:
								sair++;
							break;
						}
						if(ganha==0){
							printf("\nFim da jogada!\nVez do jogador 3\n");	
						}
					break;
					case 2:
						apresenta3();
						again5:
						printf("\nJogador 3:");
						opcao();
						do{
							scanf("%i", &modo);
						}while((modo<1)||(modo>5));
						switch(modo){
							case 1:
								mudar3();
								goto mudar2;
							break;
							case 2:
								compar3();
							break;
							case 3:
								monte3();
							break;
							case 4:
								mostrar3();
							break;
							case 5:
								sair++;
							break;
						}
						if(ganha==0){
							printf("\nFim da jogada!\nVez do jogador 1\n");	
						}
					break;
				}
				if(jogada<2){jogada++;}
				else{jogada=0;}
				if((sair!=0)||(ganha>0)){goto sair;}
				system("PAUSE>>null");
				system("cls");
			}
		break;
		case 4:
			for(jogada=0, partida=0; jogada<104; jogadas++){//a jogada so termina quando � o outro jogador
				mudar3:
				switch(jogada){
					case 0:
						apresenta1();
						again6:
						printf("\nJogador 1:");
						opcao();
						do{
							scanf("%i", &modo);
						}while((modo<1)||(modo>5));
						switch(modo){
							case 1:
								mudar1();
								goto mudar3;
							break;
							case 2:
								compar1();
							break;
							case 3:
								if(jogadas==0){
									goto again;
								}else{
									monte1();
								}
							break;
							case 4:
								mostrar1();
							break;
							case 5:
								sair++;
							break;
						}
						if(ganha==0){
							printf("\nFim da jogada!\nVez do jogador 2\n");	
						}
					break;
					case 1:
						apresenta2();
						again7:
						printf("\nJogador 2:");
						opcao();
						do{
							scanf("%i", &modo);
						}while((modo<1)||(modo>5));
						switch(modo){
							case 1:
								mudar2();
								goto mudar3;
							break;
							case 2:
								compar2();
							break;
							case 3:
								monte2();
							break;
							case 4:
								mostrar2();
							break;
							case 5:
								sair++;
							break;
						}
						if(ganha==0){
							printf("\nFim da jogada!\nVez do jogador 3\n");	
						}
					break;
					case 2:
						apresenta3();
						again8:
						printf("\nJogador 3:");
						opcao();
						do{
							scanf("%i", &modo);
						}while((modo<1)||(modo>5));
						switch(modo){
							case 1:
								mudar3();
								goto mudar3;
							break;
							case 2:
								compar3();
							break;
							case 3:
								monte3();
							break;
							case 4:
								mostrar3();
							break;
							case 5:
								sair++;
							break;
						}
						if(ganha==0){
							printf("\nFim da jogada!\nVez do jogador 4\n");	
						}
					break;
					case 3:
						apresenta4();
						again9:
						printf("\nJogador 4:");
						opcao();
						do{
							scanf("%i", &modo);
						}while((modo<1)||(modo>5));
						switch(modo){
							case 1:
								mudar4();
								goto mudar3;
							break;
							case 2:
								compar4();
							break;
							case 3:
								monte4();
							break;
							case 4:
								mostrar4();
							break;
							case 5:
								sair++;
							break;
						}
						if(ganha==0){
							printf("\nFim da jogada!\nVez do jogador 1\n");	
						}
					break;
				}
				if(jogada<3){jogada++;}
				else{jogada=0;}
				if((sair!=0)||(ganha>0)){goto sair;}
				system("PAUSE>>null");
				system("cls");
			}
		break;
	}
	sair:
	system("PAUSE>>null");
}
