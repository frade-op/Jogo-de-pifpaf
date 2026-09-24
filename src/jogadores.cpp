#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "biblioteca.h"

void apresenta1();
void apresenta2();
void apresenta3();
void apresenta4();
void limparTela();

void jogador1(){
	system("PAUSE>>null");
	limparTela();
	printf("Jogador 1, e apenas o jogador 1, preste atencao a tela!\n");
	system("PAUSE>>null");
	for(i=0, numero=0, naipe=0; i<9; i++){//distribui as cartas na m�o	
		novamente:
		numero=(rand() % 13);//carta aleat�ria de 1 a 13
		mao1[i]=numero+1;//aloca o numero na posi��o da carta
		naipe=(rand() % NAIPES);//naipe aleat�rio de 1 a 4
		naipe1[i]=naipe+1;//aloca o naipe na posi��o da carta
		baralho[numero]++;//informa o numero de cada carta
		
		if(identifica[numero][naipe]<1){
			identifica[numero][naipe]+=1;
		}else{goto novamente;}
	}
	apresenta1();
}

void apresenta1(){
	for(i=0; i<9; i++){//apresenta a m�o do jogador
		printf("%ia posicao - ", i+1);//posi�o
		if((mao1[i]>1)&&(mao1[i]<11)){printf("%i de ", mao1[i]);}//numero
		else{
			switch(mao1[i]){
				case 1:
				printf("As de ");//letra
				break;
				case 11:
				printf("Valete de ");//letra
				break;
				case 12:
				printf("Dama de ");//letra
				break;
				case 13:
				printf("Rei de ");//letra
				break;
			}
		}
		switch(naipe1[i]){
			case 1:
			printf("paus\n");//naipe
			break;
			case 2:
			printf("copas\n");//naipe
			break;
			case 3:
			printf("espadas\n");//naipe
			break;
			case 4:
			printf("ouros\n");//naipe
			break;
		}
	}
	system("PAUSE>>null");
}

void jogador2(){
	jogadores=2;
	limparTela();
	printf("Jogador 2, e apenas o jogador 2, preste atencao a tela!\n");
	system("PAUSE>>null");
	for(i=0, numero2=0, naipe5=0; i<9; i++){//distribui as cartas na m�o
		novamente2:
		numero2=(rand() % 13);//carta aleat�ria de 1 a 13
		mao2[i]=numero2+1;//aloca o numero na posi��o da carta
		naipe5=(rand() % NAIPES);//naipe aleat�rio de 1 a 4
		naipe2[i]=naipe5+1;//aloca o naipe na posi��o da carta
		baralho[numero2]++;//informa o numero de cada carta
		
		if(identifica[numero2][naipe5]<1){
			identifica[numero2][naipe5]+=1;
		}else{goto novamente2;}	
	}
	apresenta2();
}

void apresenta2(){
	for(i=0; i<9; i++){//apresenta a m�o do jogador
		printf("%ia posicao - ", i+1);//posi�o
		if((mao2[i]>1)&&(mao2[i]<11)){printf("%i de ", mao2[i]);}//numero
		else{
			switch(mao2[i]){
				case 1:
				printf("As de ");//letra
				break;
				case 11:
				printf("Valete de ");//letra
				break;
				case 12:
				printf("Dama de ");//letra
				break;
				case 13:
				printf("Rei de ");//letra
				break;
			}
		}
		switch(naipe2[i]){
			case 1:
			printf("paus\n");//naipe
			break;
			case 2:
			printf("copas\n");//naipe
			break;
			case 3:
			printf("espadas\n");//naipe
			break;
			case 4:
			printf("ouros\n");//naipe
			break;
		}
	}
	system("PAUSE>>null");
}

void jogador3(){
	jogadores=3;
	limparTela();
	printf("Jogador 3, e apenas o jogador 3, preste atencao a tela!\n");
	system("PAUSE>>null");
	for(i=0, numero3=0, naipe6=0; i<9; i++){//distribui as cartas na m�o
		novamente3:
		numero3=(rand() % 13);//carta aleat�ria de 1 a 13
		mao3[i]=numero3+1;//aloca o numero na posi��o da carta
		naipe6=(rand() % NAIPES);//naipe aleat�rio de 1 a 4
		naipe3[i]=naipe6+1;//aloca o naipe na posi��o da carta
		baralho[numero3]++;//informa o numero de cada carta
		
		if(identifica[numero3][naipe6]<1){
			identifica[numero3][naipe6]+=1;
		}else{goto novamente3;}	
	}
	apresenta3();
}

void apresenta3(){
	for(i=0; i<9; i++){//apresenta a m�o do jogador
		printf("%ia posicao - ", i+1);//posi�o
		if((mao3[i]>1)&&(mao3[i]<11)){printf("%i de ", mao3[i]);}//numero
		else{
			switch(mao3[i]){
				case 1:
				printf("As de ");//letra
				break;
				case 11:
				printf("Valete de ");//letra
				break;
				case 12:
				printf("Dama de ");//letra
				break;
				case 13:
				printf("Rei de ");//letra
				break;
			}
		}
		switch(naipe3[i]){
			case 1:
			printf("paus\n");//naipe
			break;
			case 2:
			printf("copas\n");//naipe
			break;
			case 3:
			printf("espadas\n");//naipe
			break;
			case 4:
			printf("ouros\n");//naipe
			break;
		}
	}
	system("PAUSE>>null");
}

void jogador4(){
	jogadores=4;
	limparTela();
	printf("Jogador 4, e apenas o jogador 4, preste atencao a tela!\n");
	system("PAUSE>>null");
	for(i=0, numero4=0, naipe7=0; i<9; i++){//distribui as cartas na m�o
		novamente4:
		numero4=(rand() % 13);//carta aleat�ria de 1 a 13
		mao4[i]=numero4+1;//aloca o numero na posi��o da carta
		naipe7=(rand() % NAIPES);//naipe aleat�rio de 1 a 4
		naipe4[i]=naipe7+1;//aloca o naipe na posi��o da carta
		baralho[numero4]++;//informa o numero de cada carta
		
		if(identifica[numero4][naipe7]<1){
			identifica[numero4][naipe7]+=1;
		}else{goto novamente4;}	
	}
	apresenta4();
}

void apresenta4(){
	for(i=0; i<9; i++){//apresenta a m�o do jogador
		printf("%ia posicao - ", i+1);//posi�o
		if((mao4[i]>1)&&(mao4[i]<11)){printf("%i de ", mao4[i]);}//numero
		else{
			switch(mao4[i]){
				case 1:
				printf("As de ");//letra
				break;
				case 11:
				printf("Valete de ");//letra
				break;
				case 12:
				printf("Dama de ");//letra
				break;
				case 13:
				printf("Rei de ");//letra
				break;
			}
		}
		switch(naipe4[i]){
			case 1:
			printf("paus\n");//naipe
			break;
			case 2:
			printf("copas\n");//naipe
			break;
			case 3:
			printf("espadas\n");//naipe
			break;
			case 4:
			printf("ouros\n");//naipe
			break;
		}
	}
	system("PAUSE>>null");
}
