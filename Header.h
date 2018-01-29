// guard code
#ifndef PA4HELP_H
#define PA4HELP_H

#include <stdio.h>
#include <stdlib.h> // rand (), srand ()
#include <time.h> // time ()


void display_menu(void);//displays the menu
int get_option(void);//gets the option of the user
int determine_option(void);//what to do with the toption
int start_game(int *die1, int *die2, int *die3, int *die4, int *die5,int *die6, int *p1, int *p2, int *p3, int *p4, int *p5,int *p6, int ones, int twos, int threes, int fours, int fives, int sixes, int th_kind, int fo_kind, int fu_house, int sma_straight, int lar_straight, int yahtzee1,int chan);//first roll of die

int roll_die2(void);
void print_combination(void);

int roll_die(void);

int get_die_values(int *die1, int *die2, int *die3, int *die4, int *die5, int *die6);
int sort_die_values(int *die1, int *die2, int *die3, int *die4, int *die5, int *die6,int *p1, int *p2, int *p3, int *p4, int *p5,int *p6);

int sum_of_ones(int *p1, int *p2, int *p3, int *p4, int *p5,int *p6);
int sum_of_twos(int *p1, int *p2, int *p3, int *p4, int *p5,int *p6);
int sum_of_threes(int *p1, int *p2, int *p3, int *p4, int *p5, int *p6);
int sum_of_fours(int *p1, int *p2, int *p3, int *p4, int *p5, int *p6);
int sum_of_fives(int *p1, int *p2, int *p3, int *p4, int *p5, int *p6);
int sum_of_sixes(int *p1, int *p2, int *p3, int *p4, int *p5, int *p6);
int three_of_a_kind(int *p1, int *p2, int *p3, int *p4, int *p5, int *p6);
int four_of_a_kind(int *p1, int *p2, int *p3, int *p4, int *p5, int *p6);
int full_house(int *p1, int *p2, int *p3, int *p4, int *p5, int *p6);
int small_straight(int *p1, int *p2, int *p3, int *p4, int *p5, int *p6);
int large_straight(int *p1, int *p2, int *p3, int *p4, int *p5, int *p6);
int yahtzee(int *p1, int *p2, int *p3, int *p4, int *p5, int *p6);
int chance(int ones, int twos, int threes, int fours, int fives, int sixes,int th_kind, int fo_kind,int fu_house, int sma_straight,int lar_straight, int yahtzee1);




int get_die_values_ai(int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6);
int sort_die_values_ai(int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6);

int sum_of_ones_ai(int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6);
int sum_of_twos_ai(int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6);
int sum_of_threes_ai(int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6);
int sum_of_fours_ai(int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6);
int sum_of_fives_ai(int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6);
int sum_of_sixes_ai(int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6);
int three_of_a_kind_ai(int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6);
int four_of_a_kind_ai(int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6);
int full_house_ai(int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6);
int small_straight_ai(int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6);
int large_straight_ai(int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6);
int yahtzee_ai(int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6);
int chance_ai(int ai_ones, int ai_twos, int ai_threes, int ai_fours, int ai_fives, int ai_sixes, int ai_th_kind, int ai_fo_kind, int ai_fu_house, int ai_sma_straight, int ai_lar_straight, int ai_yahtzee1);



int start_game_ai(int *ai1, int *ai2, int *ai3, int *ai4, int *ai5, int *ai6, int ai_ones, int ai_twos, int ai_threes, int ai_fours, int ai_fives, int ai_sixes, int ai_th_kind, int ai_fo_kind, int ai_fu_house, int ai_sma_straight, int ai_lar_straight, int ai_yahtzee1, int ai_chan);//first roll of die







#endif