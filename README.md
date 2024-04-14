## James LeMahieu - M2OEP - Friend List Abridged 

### Summary of Program
This program is a friend list that could be helpful in icebreaker activities or could help
teachers help remember their classes better and get to know their students better. This program
has two classes a friend class and a friend_list class on top of a merge sort class that was
authored by Lisa Dion. The friend class stores a friends name, descriptor, hometown, favorite
number and favorite letter. The Friend_list class is a vector of friends that you add and do
operations on through using the main menu/main function and the functions within the class. There
is extensive input validation within the program where identical logic ius used multiple times
throughout the program. This program reads in from a text file and writes out to the exact same text file
when a Friend_List object is created so the vector that the person is writing too is "saved" between uses
instead of clearing the vector and restarting every single time the program ends and restarts again. The
Friend_List has a Friend object which is derived from a Person Object used and implemented within it and 
the Friend_List object also is a List object so in future implementations it allows one to derive different
types of people lists from the list abstract class.

### Known Bugs

There are no known compilier or runtime errors at the time of submission. Though there are output irregularities in the way
it appears in the console. I do believe that this is more a PC issues rather than code issue. The
logic error that could cause an issue is that the in_list and where_in_list functions are case-sensitive.
Though not an issue in exiting with code 0 there is a lapse in logic as it requires the user to properly
put in the way their friend's name rather than haphazardly spelling it without any capitalization. This
lapse in logic is "solved" by indicating to the user that their input is case-sensitive whenever they use
a method that implicitly uses the in_list and where_in_list_ function. Another logic error is mergeSort not
consistently sorting the vector correctly. Again this does not affect runtime nor compilation just a logic issue
to be debugged in future implementations.

### Future Work

Future work for this project includes making sure the in_list and where_in_list classes are not case-sensitive
to make user error even less of a variable in the program running correctly. This also includes fixing the
mergeSort issue that has appeared between project 1 and project 2. Other future work could include a more robust 
user interface by either developing a front end UI or incorporating HTML, CSS, JS or some combination of the 3. 
That being said more functions on the vector could be included or an open-ended user input section if they want 
to leave notes on a specific friend and document more about them than just the 5 fields that are currently involved 
with a friend.

### Citations
I did not Author the "mergeSort.h" which originally was Lisa Dion's code provided to here CS2240
students when going over sorting algorithms. I modified the header file by separating it into a "mergeSort.h"
and a "mergeSort.cpp" file as per style requirements in C++. That being said all logic credit goes to
Lisa Dion. Also regarding no discard this is the link to the website that explained it to me:
https://en.cppreference.com/w/cpp/language/attributes/nodiscard.
File input code and file output code logic and functionality was derived form Lisa Dion's Code from CS2240.

### Deserved Grade

I deserve 125 points on this project.

##### Main Program

My main program deserves 35 points because it uses all the concepts introduced in Module 2 with some
implemented multiple times within the program. On top of this there is a large amount of user input that
is included within this program as exemplified within last module's and this module's project. That being said
since I got deducted for lack of complexity within last module I am deducting 5 points because there wasn't
a big change in complexity from this module to the last. That being said I do not it should overshadow and severely
affect the amount of work that I put into implemented module 2 concepts within this project.

##### Testing program

My testing program deserves 20 points because it explicitally tests to the two explicit classes that are used
within the main program while the rest of the classes are implemented within the two classes which covers testing 
the other classes. The Friend Class testing is the stereotypical testing fucntion that is seen throughout 
Module 2. Since Friend_Testing is all void functions with a large amount of input within them please read the
comments to see how te correctly test these functions. Again there is alot less boolean testing because there
are already indicators of whether or not the function was successful within most of the Friend_list functions.
Validation functions are implicitally tested within the public functions of the Friend_List class.

##### Is-A relationship : Friend is a Person

Friend Derives the abstract person class and inherits the name and hometown variables from person as well as select
getters and setters that it defines within its body. This allows for friend to be more customized and streamlined as 
a specific friend rather than just a person. With this the friend object is clearly implemented and used throughout
the function of the main function as a derivative of person making this deserve 20 points.

##### Is-A relationship : Friend_List is a List

Friend_List derives the abstract list class and inherits select functions of the abstract class and subsequently
defines said functions. This again allows the list to be applied not just to friends but also class lists or
enemy lists or worker lists. Since the Friend List class is implemented heavily within the main program and
it derives the list class this deserves 20 points.

##### Has-A relationship : Friend_List has a Friend

Friend_List has a vector of Friends that is implements and heavily uses throughout the program. Essentially the
function of this whole program is reliant on this Has A relationship being robustly implemented and debugged. 
Since this program passes all of its test cases it is safe to say this relationship derserves the full 20
points alotted. 

##### File Input

When constructed the vector of friend objects reads in from a file to see of there are previously entered
friends within the program in past runs. With this it makes sure that all the information is read in correctly
and added to the vector as friends correctly with this it adds a layer of complexity within the program allowing
the saving of friends between runs. That being said this deserves 5 points due to its back end implementation
that is kept away from the user and done without explicit user calls or input.

##### File Output

When the Friend_List is destructed it writes out to the same text file that will be read in by the program when
the vector is constructed the next time the main program is run. With this loop as mentioned above it allows
the saving of friends that have been inputted by the user which allows for a more realistic and functional
friends list than exemplified in Module 1. Since this is an implementation that adds complexity and is
called in the desctructor without user calls or user knowledge this category deserves 5 points.

##### Style and Documentation

I deserve 0 points taken off. I thoroughly commented my code to the specified style guide that Module 1 introduced to us
as well as included description git push and commit descriptions allowing graders and the instructor to
comprehensively track the progress made on this project. As usual my code is organized follow style specifications
as well as indenting specifications.

##### Video

I deserve 0 points taken off for the video as it shows multiple runs of the program due to me wanting to show
the new feature of being able to save the vector as well as me wanting to show off the testing function that was
creating in accordance to the module as well.

##### Lifespan Of Project

I deserve 0 points taken off for the lifespan of the project since this repository was created more than 7 days
before Sunday 02/25/2024. On top of that I made significant contributions to this project for at least three days.
These days include 02/21/2024, 02/24/2024 and 02/25/2024. Due to this I deserve 0 points take off for this.