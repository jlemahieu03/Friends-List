//
// Created by James on 1/30/2024.
//

#include "Friend.h"
#include <iostream>
using std::endl;

Friend::Friend(string p_name, string p_descriptor, string p_hometown,
               double p_fav_num, char p_fav_let) : Person(p_name, p_hometown) {
    descriptor = p_descriptor;
    fav_num = p_fav_num;
    fav_let = p_fav_let;
}

string Friend::get_name() const {
    return name;
}

string Friend::get_descriptor() const{
    return descriptor;
}

string Friend::get_hometown() const{
    return hometown;
}

double Friend::get_fav_num() const{
    return fav_num;
}

char Friend::get_fav_let() const{
    return fav_let;
}

void Friend::set_name(string p_name){
    name = p_name;
}

void Friend::set_descriptor(string p_descriptor){
    descriptor = p_descriptor;
}

void Friend::set_hometown(string p_hometown){
    hometown = p_hometown;
}

void Friend::set_fav_num(double p_fav_num){
    fav_num = p_fav_num;
}
void Friend::set_fav_let(char p_fav_let){
    fav_let = p_fav_let;
}

bool operator == (const Friend& f_lhs, const Friend& f_rhs){
    return f_lhs.name == f_rhs.name;
}

bool operator < (const Friend& f_lhs, const Friend& f_rhs){
    return f_lhs.name.compare(f_rhs.name) < 0;
}

bool operator > (const Friend& f_lhs, const Friend& f_rhs) {
    return f_lhs.name.compare(f_rhs.name) > 0;
}

bool operator <= (const Friend &f_lhs, const Friend &f_rhs){
    return f_lhs.get_name().compare(f_rhs.get_name()) <= 0;
}

bool operator >= ( const Friend &f_lhs, Friend &f_rhs){
    return f_lhs.name.compare(f_rhs.name) >= 0;
}

ostream& operator << (ostream& outs, const Friend &p_frnd){
    outs << p_frnd.get_name() << endl
         << "One Word Descriptor: " << p_frnd.get_descriptor() << endl
         << "Hometown: " << p_frnd.get_hometown() << endl
         << "Favorite Number: " << p_frnd.get_fav_num()<< endl
         << "Favorite Letter: " << p_frnd.get_fav_let() << endl;
    return outs;
}

string Friend::describe(Friend &p_friend){
    string t_name = p_friend.name;
    string t_describe = p_friend.descriptor;

    //returning concatenated version to describe friend
    return t_describe + " " + t_name;
}