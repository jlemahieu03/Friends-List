//
// Created by James on 1/31/2024.
//

#ifndef M1OEP_JLEMAHIE_FRIEND_LIST_H
#define M1OEP_JLEMAHIE_FRIEND_LIST_H

#include "Friend.h"
#include "List.h"
#include "mergeSort.h"

class Friend_List : public List{
private:
    //private field
    vector<Friend> friend_list;

    //private methods to be hidden from user but for use by program

    /*
     * Recursive Validator
     * Requires: none
     * Modifies: none
     * Effects: validates returns user input of a name to make sure it is correct for use by program
     */
    string input_name() override;
/*
     * Recursive Validator
     * Requires: none
     * Modifies: none
     * Effects: validates returns user input of a descriptor to make sure it is correct for use by program
     */
    string input_friend_descriptor();
/*
     * Recursive Validator
     * Requires: none
     * Modifies: none
     * Effects: validates and returns user input of a hometown to make sure it is correct for use by program
     */
    string input_hometown() override;
/*
     * Recursive Validator
     * Requires: none
     * Modifies: none
     * Effects: validates and returns user input of a number to make sure it is correct for use by program
     */
    double input_friend_fav_num();
/*
     * Recursive Validator
     * Requires: none
     * Modifies: none
     * Effects: validates and returns user input of a letter to make sure it is correct for use by program
     */
    char input_friend_fav_let();
/*
     * Confirmation Method
     * Requires: reference to string that consists a name of a friend object
     * Modifies: none
     * Effects: looks through entire vector to see if there is a friend within the vector that
     *          has that name. If so it returns true. If not it returns false.
     */
    bool in_list(string const &p_name) override;
/*
     * Confirmation Method only used if method in_list returns true
     * Requires: reference to string that consists a name of a friend object
     * Modifies: none
     * Effects: looks through entire vector to see where the specific friend is within the vector that
     *          has that name. When found it returns an integer representing the index where that
     *          friend can be found at.
     */
    int where_in_list(string const &p_name) override;
/*
     * Input output function
     * Requires: none
     * Modifies: none
     * Effects: is solely called in the constructor to bring in the previous list friends from the last time this program was ran
     *          and reads in file input and pushes back the data to the vector in the form of friend objects.
     */
    void load_data_from_file();
/*
     * Input output function
     * Requires: none
     * Modifies: none
     * Effects: is solely called in the destructor where it writes the data stored in the vector to an output txt file to be able
     *          to read in the data for use the next time the program is ran.
     */
    void write_data_to_file();

public:
    /*
     * Constructor
     * Requires: none
     * Modifies: vector<Friend> friend_list
     * Effects: clears friend_list to make sure it is empty upon start of program
     */
    Friend_List();
    /*
     * Destructor
     * Requires: none
     * Modifies: none
     * Effects: writes out to friends.txt file the vector of friends so it can be used
     *          again once program runs again.
     */
    ~Friend_List();
    /*
     * adding function
     * Requires: none
     * Modifies: vector<Friend> friend_list
     * Effects: prompts and validates user input for all the information needed to create a
     *          new friend object to add to the friend list. Once validated creates said new
     *          friend object and adds friend to vector and sorts vector by alphabetical order
     *          based on first name using merge sort
     */
    void add_Friend();
/*
     * removing function
     * Requires: none
     * Modifies: vector<Friend> friend_list
     * Effects: prompts/validates user input for the name the friend they want to remove. Then
     *          makes sure friend is the friend list before removing friend from the friend_list
     *          vector. If not found in vector program informs user and does not modify friend_list.
     */
    void remove_friend();
/*
     * removing function
     * Requires: none
     * Modifies: vector<Friend> friend_list
     * Effects: clears entire friend list by using .clear() method on friend_list vector
     */
    void clear_friend_list();
/*
     * searching function
     * Requires: none
     * Modifies: none
     * Effects: asks and validates user input for a name of a friend they want to search for.
     *          Confirms whether said friend is in the list and then prints out friend's
     *          information to the user.
     */
    void search_friend();
/*
     * searching and description function
     * Requires: none
     * Modifies: none
     * Effects: asks and validates user input for a name of a friend they want to describe.
     *          Confirms whether said friend is in the list and then prints out what you
     *          call said friend to the user.
     */
    void describe_a_friend();
/*
     * output function
     * Requires: none
     * Modifies: none
     * Effects: Iterates through entire friend_list vector and prints out all friends in users
     *          friend list.
     */
    void print_entire_list() override;

/*
     * getter function
     * Requires: none
     * Modifies: none
     * Effects: returns the current size of the friend list
     */
    int get_size();
};
#endif //M1OEP_JLEMAHIE_FRIEND_LIST_H
