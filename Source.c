#include "Header.h"
/*************************************************************
* Function: display_menu                                    *
* Date Created:  10/18/7                                           *
* Date Last Modified: 10/18/17                                      *
* Description: Displays the menu
* Input parameters:                                   *
* Returns:                                       *
* Preconditions:                         *
* Postconditions: None                                          *
*************************************************************/
void display_menu(void) {
	printf("1.Game Rules\n");
	printf("2.Start Game\n");
	printf("3.End Game\n");
}
/*************************************************************
* Function: get_option                                   *
* Date Created:  10/18/7                                           *
* Date Last Modified: 10/18/17                                      *
* Description: gets the option of the user
* Input parameters:                                   *
* Returns:                                       *
* Preconditions:                         *
* Postconditions: None                                          *
*************************************************************/
int get_option(void)
{
	int option = 0, status = 0;

	status = scanf("%d", &option);

	// status = fscanf (infile, "%d", &n1);
	// if (status == EOF)

	if (status == 0)
	{
		printf("Failed at reading in an integer!\n");
	}

	return option;
}

/*************************************************************
* Function: determine option                                  *
* Date Created:  10/18/7                                           *
* Date Last Modified: 10/18/17                                      *
* Description: gets the option
* Input parameters:                                   *
* Returns:                                       *
* Preconditions:                         *
* Postconditions: None                                          *
*************************************************************/

int determine_option(void)
{
	int option = 0;

	do // input validation loop
	{
		display_menu();
		option = get_option();
		system("cls");
	} while ((option < 1) || (option > 3));

	return option;
}
/*************************************************************
* Function: start game                                    *
* Date Created:  10/18/17                                           *
* Date Last Modified: 12/1/17                                      *
* Description: plays the game
* Input parameters:  int *die1, int *die2, int *die3, int *die4, int *die5,int *die6, int *p1, int *p2, int *p3, int *p4, int *p5,int *p6, int ones, int twos, int threes, int fours, int fives, int sixes, int th_kind, int fo_kind, int fu_house, int sma_straight, int lar_straight,int yahtzee1,int chan                                 *
* Returns:                                       *
* Preconditions:                         *
* Postconditions: None                                          *
*************************************************************/


int start_game(int *die1, int *die2, int *die3, int *die4, int *die5,int *die6, int *p1, int *p2, int *p3, int *p4, int *p5,int *p6, int ones, int twos, int threes, int fours, int fives, int sixes, int th_kind, int fo_kind, int fu_house, int sma_straight, int lar_straight,int yahtzee1,int chan)
{
	int first_die[5];                                  int option1 = 0, option2 = 0, option3 = 0, option4 = 0, option5 = 0, option6 = 0, option7 = 0, option8 = 0, option9 = 0, option10 = 0, option11 = 0, option12 = 0;
	//int a[5];                                         
	int roll_die = 1;
	int amount = 1;
	int num_rolls = 1;
	int num_count = 0;
	int user_input_for_yes_or_no = 0;
	int user_option = 0;
	int die_total = 0;
	int start = 0;
	int rolls = 1;
	int player_points = 0;
	int player_total=0 ;


	
		printf("Die value 1 is %d\n", *die1);
		printf("Die value 2 is %d\n", *die2);
		printf("Die value 3 is %d\n", *die3);
		printf("Die value 4 is %d\n", *die4);
		printf("Die value 5 is %d\n", *die5);
		printf("Die value 6 is %d\n", *die6);
		printf("To make it easier for you\nThe numbers will now be in order\n");
		printf("Die value 1 is %d\n", *p1);
		printf("Die value 2 is %d\n", *p2);
		printf("Die value 3 is %d\n", *p3);
		printf("Die value 4 is %d\n", *p4);
		printf("Die value 5 is %d\n", *p5);
		printf("Die value 6 is %d\n", *p6);

		player_total = player_points + player_total;
		printf("You have %d points so far\n", player_total);
		for (; rolls < 3; rolls++) {
			printf("\n");
			printf("You are on roll %d\n", rolls);
			printf("\n");
			/* initialize elements of array n to 0 */
			printf("Would you like to roll for one of the game's combinations?\n");
			printf("Input 1 for yes and 2 for no\n");
			scanf(" %d", &user_input_for_yes_or_no);
			if (user_input_for_yes_or_no == 1)
			{
				printf("Please input the combination you would like\n");
				scanf("%d", &user_option);
				printf("Okay your option is %d\n", user_option);
				printf("\n");
				if (user_option == 1)
				{
					printf("You got a score of %d\n", ones);
					player_points = ones;
				
					return 0;
				}
				if (user_option == 2)
				{
					printf("You got a score of %d\n", twos);
					player_points = twos;
					
					return 0;
				}
				if (user_option == 3)
				{
					printf("You got a score of %d\n", threes);
					player_points = threes;
					
					return 0;
				}
				if (user_option == 4)
				{
					printf("You got a score of %d\n", fours);
					player_points = fours;
					
					return 0;
				}
				if (user_option == 5)
				{
					printf("You got a score of %d\n", fives);
					player_points = fives;
					
					return 0;
				}
				if (user_option == 6)
				{
					printf("You got a score of %d\n", sixes);
					player_points = sixes;
					
					return 0;
				}
				if (user_option == 7)
				{
					printf("You got a score of %d\n", th_kind);
					player_points = th_kind;
					
					return 0;
				}
				if (user_option == 8)
				{
					printf("You got a score of %d\n", fo_kind);
					player_points = fo_kind;
					
					return 0;
				}
				if (user_option == 9)
				{
					printf("You got a score of %d\n", fu_house);
					player_points = fu_house;
					
					return 0;
				}
				if (user_option == 10)
				{
					printf("You got a score of %d\n", sma_straight);
					player_points = sma_straight;
					player_total = player_points + player_total;
					printf("You have %d points so far\n", player_total);
					return 0;
				}
				if (user_option == 11)
				{
					printf("You got a score of %d\n", lar_straight);
					player_points = lar_straight;
					
					return 0;
				}
				if (user_option == 12)
				{
					printf("You got a score of %d\n", yahtzee1);
					player_points = yahtzee1;
					
					return 0;
				}
				if (user_option == 13)
				{
					printf("You got a score of %d\n", chan);
					player_points = chan;
					
					return 0;
				}

			}
			player_total = player_points + player_total;
			printf("You have %d points so far\n", player_total);
			if (user_input_for_yes_or_no == 2)
			{

				printf("Okay, i will ask one more time later\n\n");
				printf("Please note, if you do not choose a combination by your 3rd chance\nYou will recieve 0 points for that round\n");
				printf("If you want to reroll on a die press <1> for yes and <2> for no\n");
				//1
				printf("Would you like to re-roll die 1?\n");
				scanf("%d", &option1);
				if (option1 == 1)
				{
					*die1 = rand() % 6 + 1;
				}
				//2
				printf("Would you like to re-roll die 2?\n");
				scanf("%d", &option2);
				if (option2 == 1)
				{
					*die2 = rand() % 6 + 1;
				}
				//3
				printf("Would you like to re-roll die 3?\n");
				scanf("%d", &option3);
				if (option3 == 1)
				{
					*die3 = rand() % 6 + 1;
				}
				//4
				printf("Would you like to re-roll die 4?\n");
				scanf("%d", &option4);
				if (option4 == 1)
				{
					*die4 = rand() % 6 + 1;
				}
				//5
				printf("Would you like to re-roll die 5?\n");
				scanf("%d", &option5);
				if (option5 == 1)
				{
					*die5 = rand() % 6 + 1;
				}
				//6
				printf("Would you like to re-roll die 6?\n");
				scanf("%d", &option6);
				if (option6 == 1)
				{
					*die6 = rand() % 6 + 1;
				}
				
			}



			
			if (rolls > 3)
			{
				player_points = 0;
				
				printf("You got zero points\n");
				return 0;
			}

											}
				
				
			
			
			

		
		if (player_total > 63)
		{
			player_total = player_total + 35;
			printf("You won!\nWith the score of %d\n",player_total);
			//return 0;
			exit(0);
		}
	
		
}
/*************************************************************
* Function: start game   ai                                 *
* Date Created:  12/1/17                                           *
* Date Last Modified: 12/1/17                                      *
* Description: ai plays the game
* Input parameters:  int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6, int ai_ones, int ai_twos, int ai_threes, int ai_fours, int ai_fives, int ai_sixes, int ai_th_kind, int ai_fo_kind, int ai_fu_house, int ai_sma_straight, int ai_lar_straight, int ai_yahtzee1, int ai_chan                                *
* Returns:                                       *
* Preconditions:                         *
* Postconditions: None                                          *
*************************************************************/
int start_game_ai(int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6, int ai_ones, int ai_twos, int ai_threes, int ai_fours, int ai_fives, int ai_sixes, int ai_th_kind, int ai_fo_kind, int ai_fu_house, int ai_sma_straight, int ai_lar_straight, int ai_yahtzee1, int ai_chan)
{
	printf("Now the ai will play\n");
	int ai_option = 0;
	int ai_points = 0, ai_total = 0;
	ai_option = rand() % 13 + 1;
	if (ai_option == 1)
	{
		printf("ai got a score of %d\n", ai_ones);
		ai_points = ai_ones;
		return 0;
	}
	if (ai_option == 2)
	{
		printf("ai got a score of %d\n", ai_twos);
		ai_points = ai_twos;
		return 0;
	}
	if (ai_option == 3)
	{
		printf("ai got a score of %d\n", ai_threes);
		ai_points = ai_threes;
		return 0;
	}
	if (ai_option == 4)
	{
		printf("ai got a score of %d\n", ai_fours);
		ai_points = ai_fours;
		return 0;
	}
	if (ai_option == 5)
	{
		printf("ai got a score of %d\n", ai_fives);
		ai_points = ai_fives;
		return 0;
	}
	if (ai_option == 6)
	{
		printf("ai got a score of %d\n", ai_sixes);
		ai_points = ai_sixes;
		return 0;
	}
	if (ai_option == 7)
	{
		printf("ai got a score of %d\n", ai_th_kind);
		ai_points = ai_th_kind;
		return 0;
	}
	if (ai_option == 8)
	{
		printf("ai got a score of %d\n", ai_fo_kind);
		ai_points = ai_fo_kind;
		return 0;
	}
	if (ai_option == 9)
	{
		printf("ai got a score of %d\n", ai_fu_house);
		ai_points = ai_fu_house;
		return 0;
	}
	if (ai_option == 10)
	{
		printf("ai got a score of %d\n", ai_sma_straight);
		ai_points = ai_sma_straight;
		return 0;
	}
	if (ai_option == 11)
	{
		printf("ai got a score of %d\n", ai_lar_straight);
		ai_points = ai_lar_straight;
		return 0;
	}
	if (ai_option == 12)
	{
		printf("ai got a score of %d\n", ai_yahtzee1);
		ai_points = ai_yahtzee1;
		return 0;
	}
	if (ai_option == 13)
	{
		printf("ai got a score of %d\n", ai_chan);
		ai_points = ai_chan;
		return 0;
	}
	ai_total = ai_points + ai_total;
	printf("\n");
	printf("Ai have %d points so far\n", ai_total);
	printf("\n");
	if (ai_total > 63)
	{
		ai_total = ai_total + 35;
		printf("Ai won!\nWith the score of %d\n", ai_total);
		//return 0;
		exit(0);
	}
}
/*************************************************************
* Function: print combination                                   *
* Date Created:  11/29/17                                           *
* Date Last Modified: 11/29/17                                      *
* Description: prints out the available combinations
* Input parameters:                                   *
* Returns:                                       *
* Preconditions:                         *
* Postconditions: None                                          *
*************************************************************/
void print_combination(void)
{
	printf("1. Sum of 1's\t7. Three-of-a-kind\n2. Sum of 2's\t8. Four-of-a-kind\n3.Sum of 3's\t9.Full house\n4. Sum of 4's\t 10.Small straight\n5.Sum of 5's\t 11.Large straight\n6.Sum of 6's\t12. Yahtzee\n13.Chance\n");
}
/*************************************************************
* Function: get_die_values   This is for the Player                               *
* Date Created:  11/29/17                                           *
* Date Last Modified: 11/29/17                                      *
* Description: gets the possible combinations for die_values
* Input parameters:   int *die1, int *die2, int *die3, int *die4, int *die5                                *
* Returns:   int                                    *
* Preconditions:                         *
* Postconditions: None                                          *
*************************************************************/
int get_die_values(int *die1, int *die2, int *die3, int *die4, int *die5,int *die6)
{
	*die1 = rand() % 6+1;
	*die2 = rand() % 6+1;
	*die3 = rand() % 6+1;
	*die4 = rand() % 6+1;
	*die5 = rand() % 6+1;
	*die6 = rand() % 6+1;
	
}

/*************************************************************
* Function: get_die_values_ai   This is for the ai                              *
* Date Created:  11/30/17                                           *
* Date Last Modified: 11/30/17                                      *
* Description: gets the possible combinations for die_values
* Input parameters:   int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6                             *
* Returns:  int 
* Preconditions:                         *
* Postconditions: None                                          *
*************************************************************/
int get_die_values_ai(int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6)
{
	*ai1 = rand() % 6 + 1;
	*ai2 = rand() % 6 + 1;
	*ai3 = rand() % 6 + 1;
	*ai4 = rand() % 6 + 1;
	*ai5 = rand() % 6 + 1;
	*ai6 = rand() % 6 + 1;
}
/*************************************************************
* Function: sort_die_value                                  *
* Date Created:  11/29/17                                           *
* Date Last Modified: 11/29/17                                      *
* Description: sorts the die values from least to greatest.
* Input parameters:     int *die1, int *die2, int *die3, int *die4, int *die5 p1 is the smallest number while *p5 is the greatest number                             *
* Returns:                                       *
* Preconditions:                         *
* Postconditions: None  
*PLEASE NOTE: I TOOK THE BUBBLE SORT CODE FROM http://www.programmingsimplified.com/c/source-code/c-program-bubble-sort. I DID NOT QUITE UNDERSTAND THE ONE THAT WAS GIVEN, SO I DECIDED TO LOOK ONLINE.
*PLEASE NOTE: I TOOK THE BUBBLE SORT CODE FROM http://www.programmingsimplified.com/c/source-code/c-program-bubble-sort. I DID NOT QUITE UNDERSTAND THE ONE THAT WAS GIVEN, SO I DECIDED TO LOOK ONLINE.
*PLEASE NOTE: I TOOK THE BUBBLE SORT CODE FROM http://www.programmingsimplified.com/c/source-code/c-program-bubble-sort. I DID NOT QUITE UNDERSTAND THE ONE THAT WAS GIVEN, SO I DECIDED TO LOOK ONLINE.
*PLEASE NOTE: I TOOK THE BUBBLE SORT CODE FROM http://www.programmingsimplified.com/c/source-code/c-program-bubble-sort. I DID NOT QUITE UNDERSTAND THE ONE THAT WAS GIVEN, SO I DECIDED TO LOOK ONLINE.
*PLEASE NOTE: I TOOK THE BUBBLE SORT CODE FROM http://www.programmingsimplified.com/c/source-code/c-program-bubble-sort. I DID NOT QUITE UNDERSTAND THE ONE THAT WAS GIVEN, SO I DECIDED TO LOOK ONLINE.
*PLEASE NOTE: I TOOK THE BUBBLE SORT CODE FROM http://www.programmingsimplified.com/c/source-code/c-program-bubble-sort. I DID NOT QUITE UNDERSTAND THE ONE THAT WAS GIVEN, SO I DECIDED TO LOOK ONLINE.
*PLEASE NOTE: I TOOK THE BUBBLE SORT CODE FROM http://www.programmingsimplified.com/c/source-code/c-program-bubble-sort. I DID NOT QUITE UNDERSTAND THE ONE THAT WAS GIVEN, SO I DECIDED TO LOOK ONLINE.
*PLEASE NOTE: I TOOK THE BUBBLE SORT CODE FROM http://www.programmingsimplified.com/c/source-code/c-program-bubble-sort. I DID NOT QUITE UNDERSTAND THE ONE THAT WAS GIVEN, SO I DECIDED TO LOOK ONLINE.

*************************************************************/
int sort_die_values(int *die1, int *die2, int *die3, int *die4, int *die5,int *die6,  int *p1, int *p2, int *p3, int *p4, int *p5,int*p6)
{
	int array[6] = {*die1,*die2,*die3,*die4,*die5,*die6 },  c, d, swap;
	

	/*for (c = 0; c < 5; c++)
	{
		for (d = 0; d < 5; d++)
		{
			if (array[d] > array[d + 1])
			{
				swap = array[d];
				array[d] = array[d + 1];
				array[d + 1] = swap;
			}
		}
	}*/
	for (c = 0; c < (6 -1); c++)
	{
		for (d = 0; d < 6 - c - 1; d++)
		{
			if (array[d] > array[d + 1]) /* For decreasing order use < */
			{
				swap = array[d];
				array[d] = array[d + 1];
				array[d + 1] = swap;
			}
		}
	}

	/*printf("Sorted list in ascending order:\n");

	for (c = 0; c < 5; c++)
		
		printf("%d\n", array[c]);*/
	*p1 = array[0];
	*p2 = array[1];
	*p3 = array[2];
	*p4 = array[3];
	*p5 = array[4];
	*p6 = array[5];
	/*printf("\n");
	printf("%d\n", *p1);
	printf("%d\n", *p2);
	printf("%d\n", *p3);
	printf("%d\n", *p4);
	printf("%d\n", *p5);*/
	return 0;
}
/*************************************************************
* Function: sort_die_values_ai                                  *
* Date Created:  11/30/17                                           *
* Date Last Modified: 11/30/17                                      *
* Description: sorts the die values from least to greatest.
* Input parameters:    int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6                            *
* Returns: int                                      *
* Preconditions:                         *
* Postconditions: None
*PLEASE NOTE: I TOOK THE BUBBLE SORT CODE FROM http://www.programmingsimplified.com/c/source-code/c-program-bubble-sort. I DID NOT QUITE UNDERSTAND THE ONE THAT WAS GIVEN, SO I DECIDED TO LOOK ONLINE.
*PLEASE NOTE: I TOOK THE BUBBLE SORT CODE FROM http://www.programmingsimplified.com/c/source-code/c-program-bubble-sort. I DID NOT QUITE UNDERSTAND THE ONE THAT WAS GIVEN, SO I DECIDED TO LOOK ONLINE.
*PLEASE NOTE: I TOOK THE BUBBLE SORT CODE FROM http://www.programmingsimplified.com/c/source-code/c-program-bubble-sort. I DID NOT QUITE UNDERSTAND THE ONE THAT WAS GIVEN, SO I DECIDED TO LOOK ONLINE.
*PLEASE NOTE: I TOOK THE BUBBLE SORT CODE FROM http://www.programmingsimplified.com/c/source-code/c-program-bubble-sort. I DID NOT QUITE UNDERSTAND THE ONE THAT WAS GIVEN, SO I DECIDED TO LOOK ONLINE.
*PLEASE NOTE: I TOOK THE BUBBLE SORT CODE FROM http://www.programmingsimplified.com/c/source-code/c-program-bubble-sort. I DID NOT QUITE UNDERSTAND THE ONE THAT WAS GIVEN, SO I DECIDED TO LOOK ONLINE.
*PLEASE NOTE: I TOOK THE BUBBLE SORT CODE FROM http://www.programmingsimplified.com/c/source-code/c-program-bubble-sort. I DID NOT QUITE UNDERSTAND THE ONE THAT WAS GIVEN, SO I DECIDED TO LOOK ONLINE.
*PLEASE NOTE: I TOOK THE BUBBLE SORT CODE FROM http://www.programmingsimplified.com/c/source-code/c-program-bubble-sort. I DID NOT QUITE UNDERSTAND THE ONE THAT WAS GIVEN, SO I DECIDED TO LOOK ONLINE.
*PLEASE NOTE: I TOOK THE BUBBLE SORT CODE FROM http://www.programmingsimplified.com/c/source-code/c-program-bubble-sort. I DID NOT QUITE UNDERSTAND THE ONE THAT WAS GIVEN, SO I DECIDED TO LOOK ONLINE.

*************************************************************/
int sort_die_values_ai(int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6)
{
	int array[6] = { *ai1,*ai2,*ai3,*ai4,*ai5,*ai6 }, c, d, swap;
	for (c = 0; c < (6 - 1); c++)
	{
		for (d = 0; d < 6 - c - 1; d++)
		{
			if (array[d] > array[d + 1]) /* For decreasing order use < */
			{
				swap = array[d];
				array[d] = array[d + 1];
				array[d + 1] = swap;
			}
		}
	}
	*ai1 = array[0];
	*ai2 = array[1];
	*ai3 = array[2];
	*ai4 = array[3];
	*ai5 = array[4];
	*ai6 = array[5];
	
}
/*************************************************************
* Function: sum_of_ones                                  *
* Date Created:  11/29/17                                           *
* Date Last Modified: 11/29/17                                      *
* Description: gets the combinations of ones
* Input parameters:   int *p1, int *p2, int *p3, int *p4, int *p5, int *p6                              *
* Returns:              ones                         *
* Preconditions:                         *
* Postconditions: None                                          *
*************************************************************/
int sum_of_ones(int *p1, int *p2, int *p3, int *p4, int *p5, int *p6)
{
	int ones=0;
	if (*p1 == 1)
	{
		ones++;
	}
	if (*p2 == 1)
	{
		ones++;
	}
	if (*p3 == 1)
	{
		ones++;
	}
	if (*p4 == 1)
	{
		ones++;
	}
	if (*p5 == 1)
	{
		ones++;
	}
	if (*p6 == 1)
	{
		ones++;
	}
	//printf("%d\n", ones);
	return ones;
}
/*************************************************************
* Function: sum_of_ones_ai                                  *
* Date Created:  12/1/17                                           *
* Date Last Modified: 12/1/17                                      *
* Description: gets the combinations of ones
* Input parameters:   int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6                           *
* Returns:           ai   ones                         *
* Preconditions:                         *
* Postconditions: None                                          *
*************************************************************/
int sum_of_ones_ai(int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6)
{
	int ai_ones = 0;
	if (*ai1 == 1)
	{
		ai_ones++;
	}
	if (*ai2 == 1)
	{
		ai_ones++;
	}
	if (*ai3 == 1)
	{
		ai_ones++;
	}
	if (*ai4 == 1)
	{
		ai_ones++;
	}
	if (*ai5 == 1)
	{
		ai_ones++;
	}
	if (*ai6 == 1)
	{
		ai_ones++;
	}
	return ai_ones;
}

/*************************************************************
* Function: sum_of_twos                                  *
* Date Created:  11/29/17                                           *
* Date Last Modified: 11/29/17                                      *
* Description: adds the twos
* Input parameters:  int *p1, int *p2, int *p3, int *p4, int *p5, int *p6                          *
* Returns:               twos                        *
* Preconditions:                         *
* Postconditions: None                                          *
*************************************************************/
int sum_of_twos(int *p1, int *p2, int *p3, int *p4, int *p5,int *p6)
{
	int twos = 0;
	if (*p1 == 2)
	{
		twos=twos+2;
	}
	if (*p2 == 2)
	{
		twos = twos + 2;
	}
	if (*p3 == 2)
	{
		twos = twos + 2;
	}
	if (*p4 == 2)
	{
		twos = twos + 2;
	}
	if (*p5 == 2)
	{
		twos = twos + 2;
	}
	if (*p6 == 2)
	{
		twos = twos + 2;
	}
	//printf("%d\n", twos);
	return twos;
}
/*************************************************************
* Function: sum_of_twos_ai                                  *
* Date Created:  12/1/17                                           *
* Date Last Modified: 12/1/17                                      *
* Description: adds the twos
* Input parameters:  int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6                         *
* Returns:               twos                        *
* Preconditions:                         *
* Postconditions: None                                          *
*************************************************************/
int sum_of_twos_ai(int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6)
{
	int ai_twos = 0;
	if (*ai1 == 2)
	{
		ai_twos = ai_twos + 2;
	}
	if (*ai2 == 2)
	{
		ai_twos = ai_twos + 2;
	}
	if (ai3 == 2)
	{
		ai_twos = ai_twos + 2;
	}
	if (*ai4 == 2)
	{
		ai_twos = ai_twos + 2;
	}
	if (*ai5 == 2)
	{
		ai_twos = ai_twos + 2;
	}
	if (*ai6 == 2)
	{
		ai_twos = ai_twos + 2;
	}
	//printf("%d\n", twos);
	return ai_twos;
}
/*************************************************************
* Function: sum_of_threes                                  *
* Date Created:  11/29/17                                           *
* Date Last Modified: 11/29/17                                      *
* Description: adds the threes
* Input parameters:   int *p1, int *p2, int *p3, int *p4, int *p5,int *p6                              *
* Returns:               threes                        *
* Preconditions:                         *
* Postconditions: None                                          *
*************************************************************/
int sum_of_threes(int *p1, int *p2, int *p3, int *p4, int *p5,int *p6)
{
	int threes = 0;
	if (*p1 == 3)
	{
		threes = threes + 3;
	}
	if (*p2 == 3)
	{
		threes = threes + 3;
	}
	if (*p3 == 3)
	{
		threes = threes + 3;
	}
	if (*p4 == 3)
	{
		threes = threes + 3;
	}
	if (*p5 == 3)
	{
		threes = threes + 3;
	}
	if (*p6 == 3)
	{
		threes = threes + 3;
	}
	//printf("%d\n", threes);
	return threes;
}
/*************************************************************
* Function: sum_of_threes_ai                                 *
* Date Created : 12 / 1 / 17 *
* Date Last Modified : 12 / 1 / 17 *
* Description : adds the threes
* Input parameters : int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6                             *
* Returns : threes                        *
* Preconditions : *
* Postconditions : None                                          *
*************************************************************/
int sum_of_threes_ai(int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6)
{
	int ai_threes = 0;
	if (*ai1 == 3)
	{
		ai_threes = ai_threes + 3;
	}
	if (*ai2 == 3)
	{
		ai_threes = ai_threes + 3;
	}
	if (*ai3 == 3)
	{
		ai_threes = ai_threes + 3;
	}
	if (*ai4 == 3)
	{
		ai_threes = ai_threes + 3;
	}
	if (*ai5 == 3)
	{
		ai_threes = ai_threes + 3;
	}
	if (*ai6 == 3)
	{
		ai_threes = ai_threes + 3;
	}
	//printf("%d\n", threes);
	return ai_threes;
}
/*************************************************************
* Function: sum_of_fours                                  *
* Date Created:  11/29/17                                           *
* Date Last Modified: 11/29/17                                      *
* Description: adds the fours
* Input parameters:   int *p1, int *p2, int *p3, int *p4, int *p5,int *p6                       *
* Returns:               fours                       *
* Preconditions:                         *
* Postconditions: None                                          *
*************************************************************/
int sum_of_fours(int *p1, int *p2, int *p3, int *p4, int *p5,int *p6)
{
	int fours = 0;
	if (*p1 == 4)
	{
		fours = fours + 4;
	}
	if (*p2 == 4)
	{
		fours = fours + 4;
	}
	if (*p3 == 4)
	{
		fours = fours + 4;
	}
	if (*p4 == 4)
	{
		fours = fours + 4;
	}
	if (*p5 == 4)
	{
		fours = fours + 4;
	}
	if (*p6 == 4)
	{
		fours = fours + 4;
	}
	//printf("%d\n", fours);
	return fours;
}
/*************************************************************
* Function: sum_of_fours_ai                                  *
* Date Created:  12/1/17                                           *
* Date Last Modified: 12/1/17                                      *
* Description: adds the fours
* Input parameters:  int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6                    *
* Returns:               fours                       *
* Preconditions:                         *
* Postconditions: None                                          *
*************************************************************/
int sum_of_fours_ai(int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6)
{
	int ai_fours = 0;
	if (*ai1 == 4)
	{
		ai_fours = ai_fours + 4;
	}
	if (*ai2 == 4)
	{
		ai_fours = ai_fours + 4;
	}
	if (*ai3 == 4)
	{
		ai_fours = ai_fours + 4;
	}
	if (*ai4 == 4)
	{
		ai_fours = ai_fours + 4;
	}
	if (*ai5 == 4)
	{
		ai_fours = ai_fours + 4;
	}
	if (*ai6 == 4)
	{
		ai_fours = ai_fours + 4;
	}
	//printf("%d\n", fours);
	return ai_fours;
}
/*************************************************************
* Function: sum_of_fives                                  *
* Date Created:  11/29/17                                           *
* Date Last Modified: 11/29/17                                      *
* Description: adds the fives
* Input parameters:   int *p1, int *p2, int *p3, int *p4, int *p5,int *p6                              *
* Returns:               fives                      *
* Preconditions:                         *
* Postconditions: None                                          *
*************************************************************/
int sum_of_fives(int *p1, int *p2, int *p3, int *p4, int *p5,int *p6)
{
	int fives = 0;
	if (*p1 == 5)
	{
		fives = fives + 5;
	}
	if (*p2 == 5)
	{
		fives = fives + 5;
	}
	if (*p3 == 5)
	{
		fives = fives + 5;
	}
	if (*p4 == 5)
	{
		fives = fives + 5;
	}
	if (*p5 == 5)
	{
		fives = fives + 5;
	}
	if (*p6 == 5)
	{
		fives = fives + 5;
	}
	//printf("%d\n", fives);
	return fives;
}
/*************************************************************
* Function: sum_of_fives_ai                                  *
* Date Created:  12/1/17                                           *
* Date Last Modified: 12/1/17                                      *
* Description: adds the fives
* Input parameters:  int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6                             *
* Returns:               fives                      *
* Preconditions:                         *
* Postconditions: None                                          *
*************************************************************/
int sum_of_fives_ai(int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6)
{
	int ai_fives = 0;
	if (*ai1 == 5)
	{
		ai_fives = ai_fives + 5;
	}
	if (*ai2 == 5)
	{
		ai_fives = ai_fives + 5;
	}
	if (*ai3 == 5)
	{
		ai_fives = ai_fives + 5;
	}
	if (*ai4 == 5)
	{
		ai_fives = ai_fives + 5;
	}
	if (*ai5 == 5)
	{
		ai_fives = ai_fives + 5;
	}
	if (*ai6 == 5)
	{
		ai_fives = ai_fives + 5;
	}
	//printf("%d\n", fives);
	return ai_fives;
}
/*************************************************************
* Function: sum_of_sixes                                  *
* Date Created:  11/29/17                                           *
* Date Last Modified: 11/29/17                                      *
* Description: adds the sixes
* Input parameters:   int *p1, int *p2, int *p3, int *p4, int *p5,int *p6                       *
* Returns:               sixes                     *
* Preconditions:                         *
* Postconditions: None                                          *
*************************************************************/
int sum_of_sixes(int *p1, int *p2, int *p3, int *p4, int *p5,int *p6)
{
	int sixes = 0;
	if (*p1 == 6)
	{
		sixes = sixes + 6;
	}
	if (*p2 == 6)
	{
		sixes = sixes + 6;
	}
	if (*p3 == 6)
	{
		sixes = sixes + 6;
	}
	if (*p4 == 6)
	{
		sixes = sixes + 6;
	}
	if (*p5 == 6)
	{
		sixes = sixes + 6;
	}
	if (*p6 == 6)
	{
		sixes = sixes + 6;
	}
	//printf("%d\n", sixes);
	return sixes;
}
/*************************************************************
* Function: sum_of_sixes_ai                                  *
* Date Created:  12/1/17                                           *
* Date Last Modified: 12/1/17                                      *
* Description: adds the sixes
* Input parameters:   int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6                     *
* Returns:               sixes                     *
* Preconditions:                         *
* Postconditions: None                                          *
*************************************************************/
int sum_of_sixes_ai(int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6)
{
	int ai_sixes = 0;
	if (*ai1 == 6)
	{
		ai_sixes = ai_sixes + 6;
	}
	if (*ai2 == 6)
	{
		ai_sixes = ai_sixes + 6;
	}
	if (*ai3 == 6)
	{
		ai_sixes = ai_sixes + 6;
	}
	if (*ai4 == 6)
	{
		ai_sixes = ai_sixes + 6;
	}
	if (*ai5 == 6)
	{
		ai_sixes = ai_sixes + 6;
	}
	if (*ai6 == 6)
	{
		ai_sixes = ai_sixes + 6;
	}
	//printf("%d\n", sixes);
	return ai_sixes;
}

/*************************************************************
* Function: three of a kind                                  *
* Date Created : 11 / 29 / 17 *
* Date Last Modified : 11 / 29 / 17 *
* Description : finds if there is 3 of the same number
* Input parameters : int *p1, int *p2, int *p3, int *p4, int *p5, int *p6                       *
* Returns : three of a kind                     *
* Preconditions : *
* Postconditions : None                                          *
*************************************************************/
int three_of_a_kind(int *p1, int *p2, int *p3, int *p4, int *p5, int *p6)
{
	int th_kind = 0;
	if (*p1 == *p2&&*p1 == *p3)
	{
		th_kind++;
	}
	if (*p2 == *p3&&*p2 == *p4)
	{
		th_kind++;
	}
	if (*p3 == *p4&&*p3 == *p5)
	{
		th_kind++;
	}
	if (*p4 == *p5&&*p4 == *p6)
	{
		th_kind++;
	}
	if (th_kind > 0)
	{
		th_kind = *p1 + *p2 + *p3 + *p4 + *p5+*p6;
	}
	//printf("%d\n", th_kind);
	return th_kind;
}

/*************************************************************
* Function: three of a kind ai                                  *
* Date Created : 12 / 1 / 17 *
* Date Last Modified : 12 /1 / 17 *
* Description : finds if there is 3 of the same number
* Input parameters : int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6                       *
* Returns : three of a kind ai                     *
* Preconditions : *
* Postconditions : None                                          *
*************************************************************/
int three_of_a_kind_ai(int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6)
{
	int ai_th_kind = 0;
	if (*ai1 == *ai2&&*ai1 == *ai3)
	{
		ai_th_kind++;
	}
	if (*ai2 == *ai3&&*ai2 == *ai4)
	{
		ai_th_kind++;
	}
	if (*ai3 == *ai4&&*ai3 == *ai5)
	{
		ai_th_kind++;
	}
	if (*ai4 == *ai5&&*ai4 == *ai6)
	{
		ai_th_kind++;
	}
	if (ai_th_kind > 0)
	{
		ai_th_kind = *ai1 + *ai2 + *ai3 + *ai4 + *ai5 + *ai6;
	}
	//printf("%d\n", th_kind);
	return ai_th_kind;
}

/*************************************************************
* Function: four of a kind                                  *
* Date Created : 11 / 29 / 17 *
* Date Last Modified : 11 / 29 / 17 *
* Description : finds if there is 4 of the same number
* Input parameters : int *p1, int *p2, int *p3, int *p4, int *p5, int *p6                       *
* Returns : four of a kind                     *
* Preconditions : *
* Postconditions : None                                          *
*************************************************************/
int four_of_a_kind(int *p1, int *p2, int *p3, int *p4, int *p5, int *p6)
{
	int fo_kind = 0;
	if (*p1 == *p2&&*p1 == *p3&&*p1==*p4)
	{
		fo_kind++;
	}
	if (*p2 == *p3&&*p2 == *p4&&*p2==*p5)
	{
		fo_kind++;
	}
	if (*p3 == *p4&&*p3 == *p5&&*p3 == *p6)
	{
		fo_kind++;
	}
	if (fo_kind > 0)
	{
		fo_kind= *p1 + *p2 + *p3 + *p4 + *p5 + *p6;
	}
	//printf("%d\n", fo_kind);
	return fo_kind;
}
/*************************************************************
* Function: four of a kind ai                                 *
* Date Created : 12 /1 / 17 *
* Date Last Modified : 12 / 1 / 17 *
* Description : finds if there is 4 of the same number
* Input parameters : iint *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6                  *
* Returns : four of a kind      ai               *
* Preconditions : *
* Postconditions : None                                          *
*************************************************************/
int four_of_a_kind_ai(int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6)
{
	int ai_fo_kind = 0;
	if (*ai1 == *ai2&&*ai1 == *ai3&&*ai1 == *ai4)
	{
		ai_fo_kind++;
	}
	if (*ai2 == *ai3&&*ai2 == *ai4&&*ai2 == *ai5)
	{
		ai_fo_kind++;
	}
	if (*ai3 == *ai4&&*ai3 == *ai5&&*ai3 == *ai6)
	{
		ai_fo_kind++;
	}
	if (ai_fo_kind > 0)
	{
		ai_fo_kind = *ai1 + *ai2 + *ai3 + *ai4 + *ai5 + *ai6;
	}
	//printf("%d\n", fo_kind);
	return ai_fo_kind;
}
/*************************************************************
* Function: full_house                                 *
* Date Created : 11 / 29 / 17 *
* Date Last Modified : 11 / 29 / 17 *
* Description : finds if there is One pair and a three-of-a-kind
* Input parameters : int *p1, int *p2, int *p3, int *p4, int *p5, int *p6                       *
* Returns : fu_house                   *
* Preconditions : *
* Postconditions : None                                          *
*************************************************************/
int full_house(int *p1, int *p2, int *p3, int *p4, int *p5, int *p6)
{
	int fu_house = 0;
	int th_kind = 0;
	int pairs = 0;
	int total = 0;
	if (*p1 == *p2&&*p1 == *p3)
	{
		th_kind++;
	}
	if (*p2 == *p3&&*p2 == *p4)
	{
		th_kind++;
	}
	if (*p3 == *p4&&*p3 == *p5)
	{
		th_kind++;
	}
	if (*p4 == *p5&&*p4 == *p6)
	{
		th_kind++;
	}
	if (*p1 == *p2)
	{
		pairs=pairs+3;
	}
	if (*p2 == *p3)
	{
		pairs = pairs + 3;
	}
	if (*p3 == *p4)
	{
		pairs = pairs + 3;
	}
	if (*p5 == *p6)
	{
		pairs = pairs + 3;
	}
	total = pairs + th_kind;
	if (total > 4)
	{
		total = 25;
	}
	else
	{
		total = 0;
	}
	//printf("%d\n", total);
	fu_house = total;
	return fu_house;

}
/*************************************************************
* Function: full_house_ai                                 *
* Date Created : 12 / 1 / 17 *
* Date Last Modified : 12 / 1 / 17 *
* Description : finds if there is One pair and a three-of-a-kind
* Input parameters : int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6                      *
* Returns : ai_fu_house                   *
* Preconditions : *
* Postconditions : None                                          *
*************************************************************/
int full_house_ai(int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6)
{
	int ai_fu_house = 0;
	int ai_th_kind = 0;
	int ai_pairs = 0;
	int ai_total = 0;
	if (*ai1 == *ai2&&*ai1 == *ai3)
	{
		ai_th_kind++;
	}
	if (*ai2 == *ai3&&*ai2 == *ai4)
	{
		ai_th_kind++;
	}
	if (*ai3 == *ai4&&*ai3 == *ai5)
	{
		ai_th_kind++;
	}
	if (*ai4 == *ai5&&*ai4 == *ai6)
	{
		ai_th_kind++;
	}
	if (*ai1 == *ai2)
	{
		ai_pairs = ai_pairs + 3;
	}
	if (*ai2 == *ai3)
	{
		ai_pairs = ai_pairs + 3;
	}
	if (*ai3 == *ai4)
	{
		ai_pairs = ai_pairs + 3;
	}
	if (*ai5 == *ai6)
	{
		ai_pairs = ai_pairs + 3;
	}
	ai_total = ai_pairs + ai_th_kind;
	if (ai_total > 4)
	{
		ai_total = 25;
	}
	else
	{
		ai_total = 0;
	}
	//printf("%d\n", total);
	ai_fu_house = ai_total;
	return ai_fu_house;

}
/*************************************************************
* Function: small_straight                                 *
* Date Created : 11 / 29 / 17 *
* Date Last Modified : 11 / 29 / 17 *
* Description : A sequence of four dice
* Input parameters : int *p1, int *p2, int *p3, int *p4, int *p5, int *p6                       *
* Returns : sma_straight                   *
* Preconditions : *
* Postconditions : None                                          *
*************************************************************/
int small_straight(int *p1, int *p2, int *p3, int *p4, int *p5, int *p6)
{
	int sma_straight = 0;
	if (*p1 < *p2&&*p2 < *p3&&*p3 < *p4)
	{
		sma_straight = 30;
	}
	if (*p2 < *p3&&*p3 < *p4&&*p4 < *p5)
	{
		sma_straight = 30;
	}
	if (*p3 < *p4&&*p4 < *p5&&*p5 < *p6)
	{
		sma_straight = 30;
	}
	//printf("%d\n", sma_straight);
	return sma_straight;
}
/*************************************************************
* Function: small_straight_ai                                 *
* Date Created : 12 / 1 / 17 *
* Date Last Modified : 12 / 1 / 17 *
* Description : A sequence of four dice
* Input parameters : int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6                      *
* Returns : sma_straight_ai                   *
* Preconditions : *
* Postconditions : None                                          *
*************************************************************/
int small_straight_ai(int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6)
{
	int ai_sma_straight = 0;
	if (*ai1 < *ai2&&*ai2 < *ai3&&*ai3 < *ai4)
	{
		ai_sma_straight = 30;
	}
	if (*ai2 < *ai3&&*ai3 < *ai4&&*ai4 < *ai5)
	{
		ai_sma_straight = 30;
	}
	if (*ai3 < *ai4&&*ai4 < *ai5&&*ai5 < *ai6)
	{
		ai_sma_straight = 30;
	}
	//printf("%d\n", sma_straight);
	return ai_sma_straight;
}
/*************************************************************
* Function: large_straight                                 *
* Date Created : 11 / 29 / 17 *
* Date Last Modified : 11 / 29 / 17 *
* Description : A sequence of five dice
* Input parameters : int *p1, int *p2, int *p3, int *p4, int *p5, int *p6                       *
* Returns : lar_straight                   *
* Preconditions : *
* Postconditions : None                                          *
*************************************************************/
int large_straight(int *p1, int *p2, int *p3, int *p4, int *p5, int *p6)
{
	int lar_straight = 0;
	if (*p1 < *p2&&*p2 < *p3&&*p3 < *p4&&*p4<*p5)
	{
		lar_straight = 40;
	}
	if (*p2 < *p3&&*p3 < *p4&&*p4 < *p5&&*p5<*p6)
	{
		lar_straight = 40;
	}
	//printf("%d\n", lar_straight);
	return lar_straight;
}
/*************************************************************
* Function: large_straight_ai                                 *
* Date Created : 12 / 1 / 17 *
* Date Last Modified : 12 / 1 / 17 *
* Description : A sequence of five dice
* Input parameters : int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6                   *
* Returns : ai_lar_straight                   *
* Preconditions : *
* Postconditions : None                                          *
*************************************************************/
int large_straight_ai(int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6)
{
	int ai_lar_straight = 0;
	if (*ai1 < *ai2&&*ai2 < *ai3&&*ai3 < *ai4&&*ai4<*ai5)
	{
		ai_lar_straight = 40;
	}
	if (*ai2 < *ai3&&*ai3 < *ai4&&*ai4 < *ai5&&*ai5<*ai6)
	{
		ai_lar_straight = 40;
	}
	//printf("%d\n", lar_straight);
	return ai_lar_straight;
}
/*************************************************************
* Function: yahtzee                               *
* Date Created : 11 / 29 / 17 *
* Date Last Modified : 11 / 29 / 17 *
* Description : Five dice with the same face
* Input parameters : int *p1, int *p2, int *p3, int *p4, int *p5, int *p6                       *
* Returns : yahtzee                   *
* Preconditions : *
* Postconditions : None                                          *
*************************************************************/
int yahtzee(int *p1, int *p2, int *p3, int *p4, int *p5, int *p6)
{
	int yahtzee1 = 0;
	if (*p1 == *p2 == *p3 == *p4 == *p5 == *p6)
	{
		yahtzee1 = 50;
	}
	//printf("%d\n", yahtzee1);
	return yahtzee1;
}
/*************************************************************
* Function: yahtzee_ai                               *
* Date Created : 12 / 1 / 17 *
* Date Last Modified : 12 / 1 / 17 *
* Description : Five dice with the same face
* Input parameters : int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6                   *
* Returns : ai_yahtzee                   *
* Preconditions : *
* Postconditions : None                                          *
*************************************************************/
int yahtzee_ai(int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6)
{
	int ai_yahtzee1 = 0;
	if (*ai1 == *ai2 == *ai3 == *ai4 == *ai5 == *ai6)
	{
		ai_yahtzee1 = 50;
	}
	//printf("%d\n", yahtzee1);
	return ai_yahtzee1;
}

/*************************************************************
* Function: chance                              *
* Date Created : 11 / 29 / 17 *
* Date Last Modified : 11 / 29 / 17 *
* Description : May be used for any sequence of dice; this is the catch all combination
* Input parameters : int *p1, int *p2, int *p3, int *p4, int *p5, int *p6                       *
* Returns : chan                  *
* Preconditions : *
* Postconditions : None                                          *
*************************************************************/
int chance(int ones, int twos, int threes, int fours, int fives, int sixes,int th_kind, int fo_kind, int fu_house, int sma_straight, int lar_straight, int yahtzee1)
{
	int chan = 0;
	if (ones>0&&twos>0&&threes>0&&fours>0&&fives>0&&sixes>0&&th_kind > 0 && fo_kind > 0 && fu_house > 0 && sma_straight > 0 && lar_straight > 0 && yahtzee1 > 0)
	{
		chan = th_kind;
	}
	return chan;
}
/*************************************************************
* Function: chance_ai                              *
* Date Created : 11 / 29 / 17 *
* Date Last Modified : 11 / 29 / 17 *
* Description : May be used for any sequence of dice; this is the catch all combination
* Input parameters : int *p1, int *p2, int *p3, int *p4, int *p5, int *p6                       *
* Returns : chan                  *
* Preconditions : *
* Postconditions : None                                          *
*************************************************************/
int chance_ai(int ai_ones, int ai_twos, int ai_threes, int ai_fours, int ai_fives, int ai_sixes, int ai_th_kind, int ai_fo_kind, int ai_fu_house, int ai_sma_straight, int ai_lar_straight, int ai_yahtzee1)
{
	int ai_chan = 0;
	if (ai_ones>0&&ai_twos>0&&ai_threes>0&&ai_fours>0&&ai_fives>0&&ai_sixes>0&&ai_th_kind > 0 && ai_fo_kind > 0 && ai_fu_house > 0 && ai_sma_straight > 0 && ai_lar_straight > 0 && ai_yahtzee1 > 0)
	{
		ai_chan = ai_th_kind;
	}
	return ai_chan;
}