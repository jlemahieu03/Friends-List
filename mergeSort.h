#ifndef MERGESORT_H
#define MERGESORT_H

#include "Friend.h"
#include <vector>
using std::vector;

/*
     * Under the hood Sorting Algorithm
     * Requires: reference of vector of data type, start index, end index
     * Modifies: vector passed in by reference
     * Effects: stably sorts vector passed in by reference.
     */
void mergeSortRec(vector<Friend> &vec, int startIndex, int endIndex);
/*
     * Public Sorting Algorithm
     * Requires: reference of vector of data type
     * Modifies: none
     * Effects: calls under the hood sorting method by adding the indexes in the call. Allows user to not have to know indexes
     * for sorting.
     */
void mergeSort(vector<Friend> &vec);
#endif