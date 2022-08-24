//
// Created by Han Gyul Kim on 2022/08/24.
//

#ifndef EVAL_FIXED_PREPARE_H
# define EVAL_FIXED_PREPARE_H

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

#define HAPPINESS 7

typedef char** TRUCK;
typedef char** BOXES;
typedef char* BOX;
typedef char* DOUGHNUTS;
typedef char PAPER;

//더 숨길 수 있나?
bool clear_flags(int my, int name);

void folding_boxes(int boxes);
void every_doughnuts_i_sigh();
void not_only_sigh_i_cry();
void even_it_makes_me_moan();
void boxes_are_devils();
void doughnuts_are_evil();
void boss_went_to_smoke(void);
void ft_bzero(void *s, size_t n);
void trash(char ***box, int );
char **alloc_boxes(int no_way_home);
int double_check_count(int count);

void go_to_work(void);

TRUCK   duty(DOUGHNUTS doughnut_pile, PAPER paper);

#endif //EVAL_FIXED_PREPARE_H
