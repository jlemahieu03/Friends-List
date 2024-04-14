//
// Created by James on 2/24/2024.
//

#ifndef M1OEP_JLEMAHIE_PERSON_H
#define M1OEP_JLEMAHIE_PERSON_H

#include <string>
using std::string;

class Person{
protected:
    //private fields
    string name, hometown;
public:
    /*
     * Constructor
     * Requires: string of persons name, string of persons hometown
     * Modifies: none
     * Effects: creates new new person object.
     */
    Person(string p_name, string p_hometown);
    /*
     *  virtual getter
     * Requires: none
     * Modifies: none
     * Effects: returns name of person
     */
    virtual string get_name() const = 0;
/*
     *  virtual getter
     * Requires: none
     * Modifies: none
     * Effects: returns hometown of person
     */
    virtual string get_hometown() const = 0;
/*
     * virtual setter
     * Requires: string of new name for person instance
     * Modifies: name of the person instance called on
     * Effects: none
     */
    virtual void set_name(string p_name) = 0;
/*
     * virtual setter
     * Requires: string of new hometown for person instance
     * Modifies: hometown of the person instance called on
     * Effects: none
     */
    virtual void set_hometown(string p_hometown) = 0;
};
#endif //M1OEP_JLEMAHIE_PERSON_H
