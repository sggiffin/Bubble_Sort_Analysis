#ifndef PROTOTYPES_H
#define PROTOTYPES_H

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <iostream>
#include <vector>
#include <chrono>
#include <ctime>
#include <fstream>

using namespace std;

FILE *openCSV(FILE stream);

int randomNum();

void bubble_sort(int list[], int size);

void print_list(int list[], int size);

float do_bubblesort(vector<int> &arr, int n);

void optimalTime();

void worstCaseTime();

void averageSortTime();

void generateOrderedList();



//
//typedef enum boolean
//{
//	FALSE, TRUE
//}Boolean;

//typedef enum boolean Boolean;

#endif