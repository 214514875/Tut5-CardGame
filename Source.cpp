#include <iostream>

using namespace std;

class Card{
	int number;
	int col; /*Either 1 or 0 representing red and black respectively*/

	Card(int n =0,int co =0){

	}

	void colour(char *c){
		if (col == 1){
			c = "Red";
		}
		else{
			c = "Black";
		}
	}
    
	int getNum(){
		return number;
	}

	void printf(){
		if (col==1){
			cout << "Red" << number << endl;
		}
		else{
			cout << "Black" << number << endl;
		}
	}

};

class DeckOfCards{
	Card cards;
	Card *card = new Card[20];

	
};