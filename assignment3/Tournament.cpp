#include <iostream>
#include "Tournament.h"
#include "Referee.h"
#include "Avalanche.h"

Tournament::Tournament(string array){
	players=array;
	for(int i=0;i<players.length();i++){
		if(players[i]=="Avalanche"){
			Avalanche c1;
			c1.getchoice();

		}
		
	}
}
void Tournament::Assignment(){
	Referee r1(players[0],players[1]);
	r1.checking()

}