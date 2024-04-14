//
// Created by James on 2/24/2024.
//

#ifndef M1OEP_JLEMAHIE_LIST_H
#define M1OEP_JLEMAHIE_LIST_H

#include "mergeSort.h"
#include "Person.h"

class List {
private :
    /*
     * Virtual Recursive Validator
     * Requires: none
     * Modifies: none
     * Effects: validates returns user input of a name to make sure it is correct for use by program
     */
    virtual string input_name() = 0;
/*
     * Virtual Recursive Validator
     * Requires: none
     * Modifies: none
     * Effects: validates returns user input of a hometown to make sure it is correct for use by program
     */
    virtual string input_hometown() = 0;
/*
     *  Virtual Confirmation Method
     * Requires: reference to string that consists a name of a person object
     * Modifies: none
     * Effects: looks through entire vector to see if there is a person within the vector that
     *          has that name. If so it returns true. If not it returns false.
     */
    virtual bool in_list(string const &p_name) = 0;
/*
     * Confirmation Method only used if method in_list returns true
     * Requires: reference to string that consists a name of a person object
     * Modifies: none
     * Effects: looks through entire vector to see where the specific person is within the vector that
     *          has that name. When found it returns an integer representing the index where that
     *          person can be found at.
     */
    virtual int where_in_list(string const &p_name) = 0;

protected:
//protected feilds
vector<Person> list;
public:
    /*
    * Constructor
    * Requires: none
    * Modifies: vector<Person> list
    * Effects: clears list to make sure it is empty upon start of program
    */
    List ();
/*
     * output function
     * Requires: none
     * Modifies: none
     * Effects: Iterates through entire list vector and prints out all people in users
     *          list.
     */
    virtual void print_entire_list() = 0;

};
#endif //M1OEP_JLEMAHIE_LIST_H
