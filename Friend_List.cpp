//
// Created by James on 1/31/2024.
//

#include "Friend_List.h"
#include <fstream>
#include <iostream>
#include <sstream>
using std::cout, std::cin, std::stringstream, std::ifstream, std::ofstream, std:: endl;

string Friend_List::input_name(){
//declaring necessary variables for validation
    string in_string;

    //prompting user for input and then reading input
    cout << "Enter your friend's first name. This input is Case Sensitive: ";
    getline(cin, in_string);

    //checking if input is empty or not and calling recursive function if empty
    if (in_string.empty()){
        cout << "No input. ";
        cin.clear();
        return input_name();
    }

    //checking if there are spaces in input and calling recursive function if there are spaces
    for (int i = 0; i < in_string.length(); ++i){
        if (isspace(in_string[i])){
            cout << "Invalid input. A space indicates more than one name. ";
            cin.clear();
            return input_name();
        }
    }

    //checking if any of the characters are not alphabet letters
    for (int i = 0; i < in_string.length(); ++i){
        if (toupper(in_string[i])<'A' || toupper(in_string[i]) > 'Z') {
            cout << "Invalid input. Non-alphabetical characters are not allowed. ";
            cin.clear();
            return input_name();
        }
    }

    //returning validated input
    return in_string;
}

string Friend_List ::input_friend_descriptor(){
    string in_string;

    //prompting user for input and then reading input
    cout << "Enter one word to describe your friend: ";
    getline(cin, in_string);

    //checking if input is empty or not and calling recursive function if empty
    if (in_string.empty()){
        cout << "No input. ";
        cin.clear();
        return input_friend_descriptor();
    }

    //checking if there are spaces in input and calling recursive function if there are spaces
    for (int i = 0; i < in_string.length(); ++i){
        if (isspace(in_string[i])){
            cout << "Invalid input. A space indicates more than one word. ";
            cin.clear();
            return input_friend_descriptor();
        }
    }

    //checking if any of the characters are not alphabet letters
    for (int i = 0; i < in_string.length(); ++i){
        if (toupper(in_string[i])<'A' || toupper(in_string[i]) > 'Z') {
            cout << "Invalid input. Non-alphabetical characters are not allowed ";
            cin.clear();
            return input_friend_descriptor();
        }
    }

    //returning validated input
    return in_string;
}

string Friend_List::input_hometown() {

    string in_string;

    //prompting user for input and then reading input
    cout << "Enter your friend's hometown: ";
    getline(cin, in_string);

    //checking if input is empty or not and calling recursive function if empty
    if (in_string.empty()){
        cout << "No input. ";
        cin.clear();
        return input_hometown();
    }

    //checking if there are spaces in input and calling recursive function if there are spaces
    for (int i = 0; i < in_string.length(); ++i){
        if (isspace(in_string[i])){
            cout << "Invalid input. A space indicates more than one hometown. ";
            cin.clear();
            return input_hometown();
        }
    }

    //checking if any of the characters are not alphabet letters
    for (int i = 0; i < in_string.length(); ++i){
        if (toupper(in_string[i])<'A' || toupper(in_string[i]) > 'Z') {
            cout << "Invalid input. Non-alphabetical characters are not allowed. ";
            cin.clear();
            return input_hometown();
        }
    }
    //returning validated input
    return in_string;
}

double Friend_List::input_friend_fav_num(){
//declaring necessary variables for validation
    string in_string;
    stringstream ss;
    double d_number;

    //Prompting user for input and reading input in
    cout << "Enter your friend's favorite number: ";
    getline(cin, in_string);

    //checking if string is empty and calling recursive call if it is
    if (in_string.empty()){
        cout << "No input. ";
        cin.clear();
        return input_friend_fav_num();
    }

    //seeing if there are spaces in string indicating it is not a single number. Calling recursive function if true.
    for (int i = 0; i < in_string.length(); ++i){
        if (isspace(in_string[i])){
            cout << "Invalid input. Numbers do not have spaces. ";
            cin.clear();
            return input_friend_fav_num();
        }
    }

    //Seeing if the string can be converted to a floating point value. If it cannot recursive function is called.
    ss << in_string;
    if (!(ss >> d_number)){
        cout << "Invalid Input. Input is not a number. ";
        ss.clear();
        cin.clear();
        return input_friend_fav_num();
    }

    //checking is there is anything off accepted number in stringstream. If there is
    //then recursive call
    ss.clear();
    getline(ss, in_string, '\n');
    if (!(in_string.empty())){
        cout << "Invalid Input. Input is not a number. ";
        ss.clear();
        cin.clear();
        return input_friend_fav_num();
    }

    return d_number;
}

char Friend_List::input_friend_fav_let(){
    string in_string;

    //prompting user for input and reading in user input.
    cout << "Enter your friend's favorite letter: ";
    getline(cin, in_string);

    //checking if there was no input and calling recursive function if empty
    if (in_string.empty()){
        cout << "No input. ";
        cin.clear();
        return input_friend_fav_let();
    }

    //checking if input is longer than one character and calling recursive function if it is
    if (in_string.length() > 1){
        cout << "Invalid Input. Only one letter is allowed. ";
        cin.clear();
        return input_friend_fav_let();
    }

    for (int i = 0; i < in_string.length(); ++i){
        if (isspace(in_string[i])){
            cout << "Invalid input. Letters do not have spaces. ";
            cin.clear();
            return input_friend_fav_let();
        }
    }
    //checking if any of the characters are not alphabet letters
    for (int i = 0; i < in_string.length(); ++i){
        if (toupper(in_string[i])<'A' || toupper(in_string[i]) > 'Z') {
            cout << "Invalid input. Only letters A-Z are allowed.";
            cin.clear();
            return input_friend_fav_let();
        }
    }

    //returning validated input
    return in_string[0];
}

bool Friend_List::in_list(string const &p_name){
    //going through list to search if it is in list
    for (Friend &i: friend_list){
        if (p_name == i.get_name())
            return true;
    }
    return false;
}

int Friend_List::where_in_list(string const &p_name) {
    //finding index for friend
    for (int i = 0; i < friend_list.size(); ++i){
        if (p_name == friend_list[i].get_name())
            return i;
    }
    return -1;
}

void Friend_List::load_data_from_file() {
    ifstream in_file;
    in_file.open("../friends.txt");

    //declaring variables to be read in to be constructed into a County object as well as index and counter variables
    string name, descriptor, hometown;
    double fav_num;
    char fav_let;
    char comma;

    name = descriptor = hometown = "N/A";
    fav_num = -1;
    fav_let = ',';

    //while loop to read through entire csv file
    while (in_file && in_file.peek() != EOF) {

        //reading in name of the friend
        getline(in_file, name, ',');

        //reading in friend descriptor
        getline(in_file, descriptor, ',');

        //reading in friend hometown
        getline(in_file, hometown, ',');

        //reading in friend's favorite number
        in_file >> fav_num;
        in_file >> comma;

        //reading in number of miles of passenger/transit rail
        if (in_file.peek() != '\r' && in_file.peek() != '\n'){
            in_file >> fav_let;
        }

        friend_list.push_back(Friend(name, descriptor, hometown, fav_num, fav_let));

    }
    //closing the csv file
    in_file.close();
}

void Friend_List::write_data_to_file() {
    ofstream out_file;
    out_file.open("../friends.txt");
    for (Friend &f: friend_list) {
        if (f.get_name() != friend_list.back().get_name()) {
            out_file << f.get_name() << ','
                     << f.get_descriptor() << ','
                     << f.get_hometown() << ','
                     << f.get_fav_num() << ','
                     << f.get_fav_let() << endl;
        } else {
            out_file << f.get_name() << ','
                     << f.get_descriptor() << ','
                     << f.get_hometown() << ','
                     << f.get_fav_num() << ','
                     << f.get_fav_let();
        }
    }
    out_file.close();
}

Friend_List::Friend_List() : List(){
    //making list is clear upon creation
    friend_list.clear();
    load_data_from_file();
    mergeSort(friend_list);
}

Friend_List::~Friend_List(){
    mergeSort(friend_list);
    write_data_to_file();
}

void Friend_List::add_Friend() {
    //getting necessary input to create a new friend instance
    string t_name = Friend_List::input_name();
    string t_descriptor = Friend_List::input_friend_descriptor();
    string t_hometown = Friend_List::input_hometown();
    double t_fav_num = Friend_List::input_friend_fav_num();
    char t_fav_let =  Friend_List::input_friend_fav_let();

    //creating new friend instance
    Friend t_friend( t_name, t_descriptor,
                    t_hometown, t_fav_num, t_fav_let);

    //adding friend to friend list and sorting list to be alphabetical
    friend_list.push_back(t_friend);
    mergeSort(friend_list);

    //printing out to user that it was added successfully
    cout << t_name << " successfully added to your friend list!" << endl;
}

void Friend_List::remove_friend() {
    //getting friend's name that you want to remove
    string t_name = input_name();

    //acting accordingly if name is not in list
    if (!(in_list(t_name))){
        cout << t_name << " is not a friend in the list." << endl;
    } else {
        //finding where in the list the friend is and then removing the friend from the list
        int place = where_in_list(t_name);
        friend_list.erase(friend_list.begin()+place);
        cout << t_name << " was successfully removed form the list." << endl;
    }
}

void Friend_List::clear_friend_list(){
    //clearing the list
    friend_list.clear();
    cout << "Your friend list had been cleared." << endl;
}

void Friend_List::search_friend(){
    //asking the name of friend you want to search
    cout << "Ready to search for a friend.";
    string t_name = input_name();

    //acting accordingly if friend is not in list
    if (!(in_list(t_name))){
        cout << t_name << " is not in you friend list." << endl;
    } else {
        //finding where in the friend is and then printing out friend's information
        int place = where_in_list(t_name);
        cout << "Here is your friend's information:" << endl << friend_list[place];
    }
}

void Friend_List::describe_a_friend() {
    //asking which friend you want to describe
    cout << "Who do you want to describe?";
    string t_name = input_name();

    //acting accordingly if name is not in list
    if (!(in_list(t_name))){
        cout << t_name << " is not in your friend list." << endl;
    } else {
        //finding where in list and then describing specific friend
        int place = where_in_list(t_name);
        string t_descriptor_friend = Friend::describe(friend_list[place]);
        cout << "You should describe " << t_name << " as: " << t_descriptor_friend << endl;
    }
}

void Friend_List::print_entire_list(){
    //printing out entire friend list
    cout << "Here is your list of " << friend_list.size() << " friends." << endl;
    for (Friend &i: friend_list){
        cout << i << endl;
    }
}

int Friend_List::get_size() {
    return friend_list.size();
}




