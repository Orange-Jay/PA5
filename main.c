#include "Header.h"

int main(void) {
	int option = 0, roll_die1 = 0,num_rolls=1,position=0,a[5],c=0,n=0,para_a=0;
	int die1, die2, die3, die4, die5,die6;
	int p1, p2, p3, p4, p5,p6;
	int start; int q = 0;
	int ones,  twos,  threes, fours,  fives,  sixes;
	int yahtzee1, lar_straight, sma_straight, fu_house, fo_kind, th_kind,chan;
	int ai_ones, ai_twos, ai_threes, ai_fours, ai_fives, ai_sixes;
	int ai_yahtzee1, ai_lar_straight, ai_sma_straight, ai_fu_house, ai_fo_kind, ai_th_kind, ai_chan;
	int player_total;
	
	int ai1, ai2, ai3, ai4, ai5,ai6;
	srand((unsigned int)time(NULL));

	do {													// starts up the game
		option = determine_option();
		switch (option)
		{
		case 1: // display rules
			break;
		case 2: //play game
			break;
		case 3: //end game
			break;

		}

		printf("Option: %d\n", option);

		if (option == 1)
		{
			printf("Rules:\n");
		}
		if (option == 2)
		{
			
			printf("Start game\n");
			print_combination();
			printf("\n");
			printf("Please press 1 to get your 6 die values\n");
			scanf("%d", &start);
			if (start == 1)
			{
				
				
				get_die_values(&die1, &die2, &die3, &die4, &die5, &die6);
				sort_die_values(&die1, &die2, &die3, &die4, &die5, &die6, &p1, &p2, &p3, &p4, &p5,&p6);
				
				
				
				get_die_values_ai( &ai1, &ai2, &ai3, &ai4, &ai5, &ai6);
				sort_die_values_ai(&ai1, &ai2, &ai3, &ai4, &ai5, &ai6);
			
				//start_game(&die1, &die2, &die3, &die4, &die5, &die6, &p1, &p2, &p3, &p4, &p5,&p6,  ones,  twos, threes,  fours,  fives,  sixes,th_kind,fo_kind,fu_house,sma_straight,lar_straight,yahtzee1);
				//start_game(&die1, &die2, &die3, &die4, &die5, &die6, &p1, &p2, &p3, &p4, &p5, &p6);
				do
				{
					ai_ones = sum_of_ones_ai(&ai1, &ai2, &ai3, &ai4, &ai5, &ai6);
					ai_twos = sum_of_twos_ai(&ai1, &ai2, &ai3, &ai4, &ai5, &ai6);
					ai_threes = sum_of_threes_ai(&ai1, &ai2, &ai3, &ai4, &ai5, &ai6);
					ai_fours = sum_of_fours_ai(&ai1, &ai2, &ai3, &ai4, &ai5, &ai6);
					ai_fives = sum_of_fives_ai(&ai1, &ai2, &ai3, &ai4, &ai5, &ai6);
					ai_sixes = sum_of_sixes_ai(&ai1, &ai2, &ai3, &ai4, &ai5, &ai6);
					ai_th_kind = three_of_a_kind_ai(&ai1, &ai2, &ai3, &ai4, &ai5, &ai6);
					ai_fo_kind = four_of_a_kind_ai(&ai1, &ai2, &ai3, &ai4, &ai5, &ai6);
					ai_fu_house = full_house_ai(&ai1, &ai2, &ai3, &ai4, &ai5, &ai6);
					ai_sma_straight = small_straight_ai(&ai1, &ai2, &ai3, &ai4, &ai5, &ai6);
					ai_lar_straight = large_straight_ai(&ai1, &ai2, &ai3, &ai4, &ai5, &ai6);
					ai_yahtzee1 = yahtzee_ai(&ai1, &ai2, &ai3, &ai4, &ai5, &ai6);
					ai_chan=chance_ai(ai_ones, ai_twos, ai_threes, ai_fours, ai_fives, ai_sixes, ai_th_kind, ai_fo_kind, ai_fu_house, ai_sma_straight, ai_lar_straight, ai_yahtzee1);

					
					
					
					
					
					
					
					
					
					ones = sum_of_ones(&p1, &p2, &p3, &p4, &p5, &p6);
					twos = sum_of_twos(&p1, &p2, &p3, &p4, &p5, &p6);

					threes = sum_of_threes(&p1, &p2, &p3, &p4, &p5, &p6);
					fours = sum_of_fours(&p1, &p2, &p3, &p4, &p5, &p6);

					fives = sum_of_fives(&p1, &p2, &p3, &p4, &p5, &p6);
					sixes = sum_of_sixes(&p1, &p2, &p3, &p4, &p5, &p6);
					//printf("\n");
					th_kind = three_of_a_kind(&p1, &p2, &p3, &p4, &p5, &p6);
					//printf("\n");
					fo_kind = four_of_a_kind(&p1, &p2, &p3, &p4, &p5, &p6);
					//printf("\n");
					fu_house = full_house(&p1, &p2, &p3, &p4, &p5, &p6);
					//printf("\n");
					sma_straight = small_straight(&p1, &p2, &p3, &p4, &p5, &p6);
					//printf("\n");
					lar_straight = large_straight(&p1, &p2, &p3, &p4, &p5, &p6);
					//printf("\n");
					yahtzee1 = yahtzee(&p1, &p2, &p3, &p4, &p5, &p6);
					chan = chance(ones, twos, threes, fours, fives, sixes, ones, twos, threes, fours, fives, sixes, th_kind, fo_kind, fu_house, sma_straight, lar_straight, yahtzee1);
					//print_combination();
					start_game(&die1, &die2, &die3, &die4, &die5, &die6, &p1, &p2, &p3, &p4, &p5, &p6, ones, twos, threes, fours, fives, sixes, th_kind, fo_kind, fu_house, sma_straight, lar_straight, yahtzee1,chan);
					get_die_values(&die1, &die2, &die3, &die4, &die5, &die6);
					sort_die_values(&die1, &die2, &die3, &die4, &die5, &die6, &p1, &p2, &p3, &p4, &p5, &p6);


					
					
					
					
					start_game_ai(&ai1, &ai2, &ai3, &ai4, &ai5, &ai6, ai_ones, ai_twos, ai_threes, ai_fours, ai_fives, ai_sixes, ai_th_kind, ai_fo_kind, ai_fu_house, ai_sma_straight, ai_lar_straight, ai_yahtzee1, ai_chan);//first roll of die
					printf("\n");
					get_die_values_ai(&ai1, &ai2, &ai3, &ai4, &ai5, &ai6);
					sort_die_values_ai(&ai1, &ai2, &ai3, &ai4, &ai5, &ai6);





					q++;
				} while (q < 20);
			}
			else
			{
				printf("Try again\n");
			}

		}
		

	}
	while (option != 3);

	//die1 = roll_die();
	//die2 = roll_die();

	//printf("die1: %d die2: %d\n", die1, die2);
	printf("good bye.......\n");
	return 0;


}