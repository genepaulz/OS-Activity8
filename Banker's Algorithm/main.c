#include <stdio.h>
#include <stdlib.h>
#include "bankers.h"
#define PROCESSES 5
#define RESOURCES 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//	ProcessListB pbl = newProcessListB(5);
	int alloc[PROCESSES][RESOURCES] = 
	{
		{1,2,3},
		{3,4,1},
		{1,1,0},
		{5,0,1},
		{1,1,3}
	};
	int max[PROCESSES][RESOURCES] = 
	{
		{8,3,4},
		{6,5,5},
		{2,3,4},
		{7,2,3},
		{3,3,3}
	};	
	int avail[RESOURCES] = {2,2,1};
	
	ProcessListB plb = newProcessListB(1,RESOURCES);
	addCProcessB(plb,1,RESOURCES,alloc[0],max[0]);
	addCProcessB(plb,2,RESOURCES,alloc[1],max[1]);
	addCProcessB(plb,3,RESOURCES,alloc[2],max[2]);
	addCProcessB(plb,4,RESOURCES,alloc[3],max[3]);
	addCProcessB(plb,5,RESOURCES,alloc[4],max[4]);
	declareAvailable(plb,avail);
	displayProcessListB(plb);
	processBBankersAlgo(plb);
	
	destroyProcessListB(&plb);
//	destroyProcessB(&pb1);
//	displayProcessB(pb1);
	
	return 0;
}
