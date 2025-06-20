#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
//diceroll.c
#include "code-6-3.h"
#include <stdio.h>
#include <stdlib.h>

int roll_count = 0;

static int rollem(int sides)
{
	int roll;

	roll = rand() % sides + 1;
	++roll_count;
	return roll;
}

int roll_n_dice(int dice, int sides)
{
	int d;
	int total = 0;

	if (sides < 2)
	{
		printf("Need at least 2 sides.\n");
			return -2;
	}

	if (dice < 1)
	{
		printf("Need at least 1 die.\n");
		return -1;

	}
	for (d = 0; d < dice; d++)
		total += rollem(sides);


	return total;
}