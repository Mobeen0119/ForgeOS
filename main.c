#include <stdio.h>
#include <stdlib.h>
#define RAM_SIZE 1024


typedef struct {
    int pid;
    int burst_time;
    int ram;
    int state;
}process;

typedef struct {
    int processes[3];
    int count;
}PCB;


