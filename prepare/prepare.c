#include "../prepare.h"

bool clear_flags(int set_idx, int get_idx) {
	static bool clear_flags[HAPPINESS] = {false, };
	if (set_idx >= 0) {
		clear_flags[set_idx] = true;
		return false;
	}
	return clear_flags[get_idx];
}

void folding_boxes(int value) {
	if (value != -42)
		clear_flags(1, -1);
}

void every_doughnuts_i_sigh() {
	clear_flags(2, -1);
}

void not_only_sigh_i_cry() {
	clear_flags(3, -1);
}

void even_it_makes_me_moan() {
	clear_flags(4, -1);
}

void boxes_are_devils() {
	clear_flags(5, -1);
}

void doughnuts_are_evil() {
	clear_flags(6, -1);
}

void boss_went_to_smoke(void)
{
	while (42)
		;
}


void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n)
	{
		*ptr = 0;
		ptr++;
		--n;
	}
}

void	trash(char ***box, int boxdex)
{
	int	index;

	index = boxdex - 1;
	while (index >= 0)
	{
		free((*box)[index]);
		(*box)[index] = NULL;
		--index;
	}
	free(*box);
	return ;
}

char **alloc_boxes(int workload) {
	char **boxes;
	if (workload == 15)
	{
		clear_flags(0, -1); //p1 clear.
	}
	boxes = (char **)malloc(sizeof(char *) * (workload + 1));
	if (boxes == 0)
		return (0);
	return (boxes);
}

int double_check_count(int count) {
	(void)count;
	return (-42);
}

void go_to_work(void)
{
	DOUGHNUTS fifteen_doughnuts = " ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) ";
	DOUGHNUTS ten_doughnuts = " ( 0 ) / ( 0 ) / ( 0 ) / ( 0 ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) ";
	TRUCK truck = duty(fifteen_doughnuts, '/');
	TRUCK truck2 = duty(ten_doughnuts, '/');
	printf("======Truck1======\n");
	for (int progress = 0; truck[progress] != NULL; progress++) {
		printf("% 3dth, %s\n", progress + 1, truck[progress]);
	}
	printf("==================\n");
	printf("======Truck2======\n");
	for (int progress = 0; truck2[progress] != NULL; progress++) {
		printf("% 3dth, %s\n", progress + 1, truck2[progress]);
	}
	printf("==================\n해결한 문제 : ");
	for (int i = 0; i < HAPPINESS; i++) {
		if (clear_flags(-1, i)) {
			printf("O ");
		} else {
			printf("X ");
		}
	}
	printf("\n");
}