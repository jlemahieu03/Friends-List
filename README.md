## Friend List

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
