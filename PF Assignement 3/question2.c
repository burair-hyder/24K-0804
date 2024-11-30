#include <stdio.h>

struct Player{
	int ballScores[12];
	char playerName[20];
	int totalScore;
	
};
struct Player  playGame(struct Player player);
int validateScore(int score );
void findWinner(struct Player player1, struct Player player2);
void displayMatchScoreBoard(struct Player player1, struct Player player2);

int main(){
	struct Player playerA;
	struct Player playerB;
	
	playerA = playGame(playerA);
	playerB = playGame(playerB);
	findWinner(playerA,playerB);
	printf(" \n");
	printf(" \n");
	displayMatchScoreBoard(playerA,playerB);
		
}
struct Player  playGame(struct Player player){
	int i;
	int score;
	int totalscore =0;
	int check;
	printf("Enter Name for player :");
	scanf("%s",player.playerName);
	for( i=0;i<12;i++){
		printf("Enter Score For ball %d: ",i+1);
		scanf("%d",&score);
		check = validateScore(score);
		player.ballScores[i] = check;
		totalscore = totalscore + check;
	}
	player.totalScore = totalscore;
	return player;
}

int validateScore(int score ){
	if (!(score >=0 && score<=6)){
		score=0;
	}
	return score;
}

void findWinner(struct Player player1, struct Player player2){
	if ( player1.totalScore > player2.totalScore){
		printf(" \n");
		printf("%s is the winner!\n",player1.playerName);
		
	}
	else if ( player2.totalScore > player1.totalScore){
	
	printf(" \n");
		printf("%s is the Winner!\n",player2.playerName);}
	
	else
		printf("Match Draw!\n");
}

void displayMatchScoreBoard(struct Player player1, struct Player player2){
	int i;
	int j;
	float avg;
	struct Player temp;
	for ( i=0;i<2;i++){
		if (i==0){
			printf(" \n");
			printf("Summary for Player 1:\n");
			printf("Player Name: %s\n",player1.playerName);
			temp = player1;
		}
		else{
			printf(" \n");
			printf(" Summary For Player 2:\n");
			
			printf("Player Name: %s\n",player2.playerName);
			temp = player2;
		}
		
	
		for ( j=0;j<12;j++){
			printf("Ball # %d || Score : %d\n",j+1,temp.ballScores[j]);
			
			
			
		}
		printf("Total Score : %d\n",temp.totalScore);
		avg = temp.totalScore/12.0;
		printf("Avg Score : %.2f\n",avg);
		printf(" \n");
		printf(" \n");
	}
}

