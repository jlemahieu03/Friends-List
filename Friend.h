//
// Created by James on 1/30/2024.
//

#ifndef M1OEP_JLEMAHIE_FRIEND_H
#define M1OEP_JLEMAHIE_FRIEND_H

#include "Person.h"
using std::ostream;

class Friend : public Person {
protected:
    string descriptor;
    double fav_num;
    char fav_let;
public:
    /*
     * Constructor
     * Requires: string of friends name, string of the descriptor of friend, string of friends hometown,
     * int of friends favorite number, char of friends favorite letter
     * Modifies: none
     * Effects: creates new friend instance
     */
    Friend(string p_name, string p_descriptor, string p_hometown,
           double p_fav_num, char fav_let);
/*
     * getter
     * Requires: none
     * Modifies: none
     * Effects: returns name of friend
     */
    [[nodiscard]] string get_name() const override;
/*
     * getter
     * Requires: none
     * Modifies: none
     * Effects: returns one word descriptor of friend
     */
    [[nodiscard]] string get_descriptor() const;
/*
     * getter
     * Requires: none
     * Modifies: none
     * Effects: returns hometown of friend
     */
    [[nodiscard]] string get_hometown() const override;
/*
     * getter
     * Requires: none
     * Modifies: none
     * Effects: returns favorite number of friend
     */
    [[nodiscard]] double get_fav_num() const;
/*
     * getter
     * Requires: none
     * Modifies: none
     * Effects: returns favorite letter of friend
     */
    [[nodiscard]] char get_fav_let() const;
/*
     * setter
     * Requires: string of new name for friend instance
     * Modifies: name of the friend instance called on
     * Effects: none
     */
    void set_name(string p_name) override;
/*
     * setter
     * Requires: string of new descriptor for friend instance
     * Modifies: descriptor of the friend instance called on
     * Effects: none
     */
    void set_descriptor(string p_descriptor);
/*
     * setter
     * Requires: string of hometown for friend instance
     * Modifies: hometown of the friend instance called on
     * Effects: none
     */
    void set_hometown(string p_hometown) override;
/*
     * setter
     * Requires: int of new favorite number for friend instance
     * Modifies: favorite number of the friend instance called on
     * Effects: none
     */
    void set_fav_num(double p_fav_num);
/*
     * setter
     * Requires: char of new favorite letter for friend instance
     * Modifies: favorite letter of the friend instance called on
     * Effects: none
     */
    void set_fav_let(char p_fav_let);
/*
     * overloaded == operator
     * Requires: two friend instances
     * Modifies: none
     * Effects: none, but compares the name the friends to determine
     */
    friend bool operator == (const Friend& f_lhs, const Friend& f_rhs);
/*
     * overloaded < operator
     * Requires: two friend instances
     * Modifies: none
     * Effects: none, but compares the name the friends to determine
     */
    friend bool operator < (const Friend& f_lhs, const Friend& f_rhs);
/*
     * overloaded > operator
     * Requires: two friend instances
     * Modifies: none
     * Effects: none, but compares the name the friends to determine
     */
    friend bool operator > (const Friend& f_lhs, const Friend& f_rhs);
/*
     * overloaded <= operator
     * Requires: two friend instances
     * Modifies: none
     * Effects: none, but compares the name the friends to determine
     */
    friend bool operator <= (const Friend& f_lhs, const Friend& f_rhs);
/*
     * overloaded >= operator
     * Requires: two friend instances
     * Modifies: none
     * Effects: none, but compares the name the friends to determine
     */
    friend bool operator >= (const Friend& f_lhs, Friend &f_rhs);
/*
     * overloaded << operator
     * Requires: two friend instances
     * Modifies: none
     * Effects: formats Friend instance to be able to printed out to console
     */
    friend ostream& operator << (ostream& outs, const Friend& p_frnd);
/*
     * function that concatenates the descriptor of a friend and the name of same friend,
     * so you know what to call a certain friend.
     * Requires: one friend instance
     * Modifies: none
     * Effects: returns a string  of concatenated descriptor and name.
     */
    static string describe(Friend &p_friend);
};
#endif //M1OEP_JLEMAHIE_FRIEND_H
