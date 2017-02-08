// Precompiler Directives
#ifndef CARD_CPP
#define CARD_CPP

// Header Files
#include "Card.h"

// Global Variables
std::string SUIT = "SUIT";

// CARD CLASS IMPLEMENTATIONS
/*
  NOTE: "using namespace std;" has been omitted for this program.
        Normally, when that piece of code is placed right above main,
        you will not need see the 'std::'. This is called a standard
        namespace with the '::' being called the scope resolution 
        operator which looks for where that object is in the "scope"
        of the class. 
        
        For example Card::Card(). This means that Card() belongs or is
        in scope of the Card class. std::cout means that cout belongs to 
        the iostream class which is standard of std. This applies to strings
        and many other objects.
*/

// Default Constructor initializes private data members 
// with default data. The ':' is called an "initializer"
Card::Card() 
   : suit(SUIT), number(0)
   {
    // no implementation
   }
   
// Parameterized constructor to create a card with some input
// from user, function, or system.
Card::Card( std::string s, int num )
   {
    suit = s;
    num = num;
   }
   
// Destructor destroys the object upon program termination
Card::~Card()
   {
    // No implementation
   }
   
// Sets the private member suit by input string of s
void Card::setSuit( std::string s )
   {
    suit = s;
   }
   
// Sets the private member number by input int of num
void Card::setNumber( int num )
   {
    number = num;
   }
   
// Gets the suit from the private data member
// Returns a string
std::string Card::getSuit()
   {
    return suit;
   }
   
// Gets the number from the private data member
// Retruns a int
int Card::getNumber()
   {
    return number;
   }
   
// Prints the deck of cards
// Expects a vector of cards for its arguments
// Loops through the vector up to its size
// Gets the suit and number and prints
void Card::printCards( std::vector<Card> &cardArray )
   {    
    // Loop through the vector up to size
    for( size_t index = 0; index < cardArray.size(); index ++)
       {
        // Print out each card in each index of the vector
        // by getting its suit and number
        std::cout << cardArray[index].getSuit() << " " 
                  << cardArray[index].getNumber() << std::endl;
       } // End For
   }
   
#endif // CARD_CPP










