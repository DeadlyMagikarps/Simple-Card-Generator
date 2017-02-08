// Header Files
#include <iostream>
#include <vector>
#include <string>
#include "Card.h"

// Global Variables
static const int NUM_OF_SUITS = 4;

// Main Program
int main()
  {   
   // Creates a card object
   Card card;
   
   // Creates vector of cards
   std::vector<Card> cardArray;
   
   // Construct Arrays
   std::string suitArray[] = { "Heart", "Spade", "Clubs", "Diamond" };
   int numArray[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
 
   // Indexes for the arrays
   int suitIndex, numIndex;
   
   // This first for loop goes through each suit only once
   for( suitIndex = 0; suitIndex < NUM_OF_SUITS; suitIndex++ )
      {
       // sets the first suit from the suitArray to the data member
       card.setSuit( suitArray[ suitIndex ] );
   
       // This loop will go through the numArray and assign exactly 
       // one number for the current suit being accessed
       for( numIndex = 0; numIndex < 13; numIndex++ )
          {
           // Sets the number for the current numArray index
           card.setNumber( numArray[numIndex] );
           
           // Pushes the entire "card" into a vector with both
           // data members 'suit' and 'number'
           cardArray.push_back( card );
          } // End Inner For
      } // End Outer For
     
   // Print deck of cards
   card.printCards( cardArray ); 
  
   // Return successful program
   return 0;
  }
   
