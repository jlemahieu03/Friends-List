
#include "Friend_List.h"
#include <iostream>
#include <sstream>
using std::cin, std::cout, std::endl, std::stringstream;

//declaring method that is only useful and pertains to the main method.
int validate_user_choice();

//TODO: need to do markdown file
int main() {
    //welcoming user to program
    cout << "Welcome to your friend list!!" << endl;\
    //creating list
    Friend_List user_list;
    //getting user choice
    int choice = validate_user_choice();
    //calling appropriate function
    while (choice != 7){
        if (choice == 1)
            user_list.add_Friend();
        if (choice == 2)
            user_list.remove_friend();
        if (choice == 3)
            user_list.search_friend();
        if (choice == 4)
            user_list.describe_a_friend();
        if (choice == 5)
            user_list.print_entire_list();
        if (choice == 6)
            user_list.clear_friend_list();
        choice = validate_user_choice();
    }
    //exiting code
    cout << "Bye Bye." << endl;
    return 0;
};


int validate_user_choice() {
    //declaring necessary variables for validation
    string in_string;
    stringstream ss;
    int i_number;

    //Prompting user for input and reading input in
    cout << "What do you want to do?" << endl
         << "1. Add friend to list." << endl
         << "2. Remove friend from list." << endl
         << "3. Search for a friend." << endl
         << "4. Describe a friend." << endl
         << "5. Print your entire friend list." << endl
         << "6. Clear your entire friend list." << endl
         << "7. Exit" << endl
         << "Please enter numbers 1, 2, 3, 4, 5, 6, or 7 to indicate your choice: ";

    getline(cin, in_string);

    //checking if string is empty and calling recursive call if it is
    if (in_string.empty()) {
        cout << "No input. ";
        cin.clear();
        return validate_user_choice();
    }

    //seeing if there are spaces in string indicating it is not a single number. Calling recursive function if true.
    for (int i = 0; i < in_string.length(); ++i) {
        if (isspace(in_string[i])) {
            cout << "Invalid input. Numbers do not have spaces.";
            cin.clear();
            return validate_user_choice();
        }
    }

    //seeing if there are spaces in string indicating it is not a single number. Calling recursive function if true.
    for (int i = 0; i < in_string.length(); ++i) {
        if (isspace(in_string[i]) || in_string[i] == '.') {
            cout << "Invalid input. Input does not allow decimal numbers.";
            cin.clear();
            return validate_user_choice();
        }
    }
    //Seeing if the string can be converted to an integer value. If it cannot recursive function is called.
    ss << in_string;
    if (!(ss >> i_number)) {
        cout << "Invalid Input. Input is not a number.";
        ss.clear();
        cin.clear();
        return validate_user_choice();
    }

    //checking is there is anything off accepted number in stringstream. If there is
    //then recursive call
    ss.clear();
    getline(ss, in_string, '\n');
    if (!(in_string.empty())) {
        cout << "Invalid Input. Input is not a number.";
        ss.clear();
        cin.clear();
        return validate_user_choice();
    }

    //making sure number inputted is between 1 and 5
    if (i_number < 1 || i_number > 7){
        cout << "Invalid Input. Input is not between 1 and 7.";
        ss.clear();
        cin.clear();
        return validate_user_choice();
    }

    // returning validated input
    return i_number;
}