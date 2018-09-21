#include<stdio.h>

int main(int argc, char *argv[])
{
	int bugs = 100;
	double bug_rate = 1.2;

	printf("You have %d bugs at the imaginary rate of %f. \n",
			bugs, bug_rate);
	long universe_of_defects = 1L * 1024L * 1024L * 1024L;
	printf("all the universe has %ld bugs\n", universe_of_defects);
	
	double expected_bugs = bugs * bug_rate;
	printf("You are expected to have %f bugs. \n", expected_bugs);

	double part_of_the_universe = expected_bugs/universe_of_defects;
	printf("This is only the %e part of the universe.\n", 
			part_of_the_universe);

	//this makes no sense, just a demo of something weird
	
	char null_byte = '\0';
	int care_percentage = bugs * null_byte;

	//printf("this is the null byte %s\n", null_byte);
	printf("Which means you should care %d%%. \n", care_percentage);

	return 0;
}