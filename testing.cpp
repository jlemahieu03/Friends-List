//
// Created by James on 2/25/2024.
//

#include "Friend.h"
#include "Friend_List.h"
#include <iostream>
using std::cout, std::endl;

//declaring test functions
bool test_Friend();
bool test_Friend_List();

int main(){
    if (test_Friend()){
        cout << "Passed all Friend Test Cases" << endl;
    }
    if (test_Friend_List()){
        cout << "Passed all Friend_List Test cases" << endl;
    }
    return 0;
}

bool test_Friend(){
    bool passed = true;
    std::string test_s = "test";
    Friend test( test_s, test_s, test_s, -1, 'L');

    //testing constructor
    if (test.get_name() != "test"){
        passed = false;
        cout << "FAILED Constructor Name" << endl;
    }
    if (test.get_descriptor() != "test"){
        passed = false;
        cout << "FAILED Constructor descriptor" << endl;
    }
    if (test.get_hometown() != "test"){
        passed = false;
        cout << "FAILED Constructor hometown" << endl;
    }
    if (test.get_fav_num() != -1){
        passed = false;
        cout << "FAILED Constructor favorite number" << endl;
    }
    if (test.get_fav_let() != 'L'){
        passed = false;
        cout << "FAILED Constructor favorite letter" << endl;
    }

    //testing setters
    test.set_name( "James");
    test.set_descriptor( "Jolly");
    test.set_hometown( "Concord");
    test.set_fav_num(3);
    test.set_fav_let('C');
    if (test.get_name() != "James"){
        passed = false;
        cout << "FAILED name setter" << endl;
    }
    if (test.get_descriptor() != "Jolly"){
        passed = false;
        cout << "FAILED descriptor setter" << endl;
    }
    if (test.get_hometown() != "Concord"){
        passed = false;
        cout << "FAILED hometown setter" << endl;
    }
    if (test.get_fav_num() != 3){
        passed = false;
        cout << "FAILED favorite number setter" << endl;
    }
    if (test.get_fav_let() != 'C'){
        passed = false;
        cout << "FAILED favorite letter setter" << endl;
    }

    //testing descriptor function
    if(Friend::describe(test) != "Jolly James"){
        passed = false;
        cout << "FAILED descriptor test" << endl;
    }

    //testing overloaded operators
    Friend test_2( test_s, test_s, test_s, -1, 'L');
    Friend test_3( test_s, test_s, test_s, -1, 'L');

    if (!(test_2 == test_3)){
        passed = false;
        cout << "FAILED equal equal to operator" << endl;
    }
    if (test_2 == test){
        passed = false;
        cout << "FAILED not equal to equal to operator" << endl;
    }
    if (!(test < test_2)){
        passed = false;
        cout << "FAILED J < T case" << endl;
    }
    if (test_2 < test){
        passed = false;
        cout << "FAILED T < J case" << endl;
    }
    if (test_2 < test_3){
        passed = false;
        cout << "FAILED T < T case" << endl;
    }
    if (test > test_2){
        passed = false;
        cout << "FAILED J > T case" << endl;
    }
    if (!(test_2 > test)){
        passed = false;
        cout << "FAILED T > J case" << endl;
    }
    if (test_2 > test_3){
        passed = false;
        cout << "FAILED T > T case" << endl;
    }
    if (!(test <= test_2)){
        passed = false;
        cout << "FAILED J <= T case" << endl;
    }
    if (test_2 <= test){
        passed = false;
        cout << "FAILED T <= J case" << endl;
    }
    if (!(test_2 <= test_3)){
        passed = false;
        cout << "FAILED T <= T case" << endl;
    }
    if (test >= test_2){
        passed = false;
        cout << "FAILED J >= T case" << endl;
    }
    if (!(test_2 >= test)){
        passed = false;
        cout << "FAILED T >= J case" << endl;
    }
    if (!(test_2 >= test_3)){
        passed = false;
        cout << "FAILED T >= T case" << endl;
    }
    return passed;
}

bool test_Friend_List(){
    bool passed = true;
    Friend_List test;
    if (test.get_size() != 0){
        passed = false;
        cout << "FAILED reading in from empty file" << endl;
    }
    test.add_Friend(); //put in test, test, test -1 and 'L'
    if (test.get_size() != 1){
        passed = false;
        cout << "FAILED add_Friend case" << endl;
    }

    test.search_friend(); //search for test will say if it is in list.
        // if test is not in vector, where_in_list and in_list is wrong.

    test.search_friend(); //search for James will say it is not in list.
        //if James is said to be in the list then where_in_list and in_list are wrongs

    test.add_Friend(); //Use James, test, test, -1, 'L'
    test.print_entire_list(); // if james is not first then merge sort is not working correctly

    test.remove_friend(); //remove test
    if (test.get_size() != 1){
        passed = false;
        cout << "FAILED remove_Friend case" << endl;
    }
    test.search_friend();//search for test, if it is said that it is still in list then remove friend is wrong

    test.clear_friend_list();
    if (test.get_size() != 0){
        passed = false;
        cout << "FAILED clear entire list test case" << endl;
    }
    return passed;
}