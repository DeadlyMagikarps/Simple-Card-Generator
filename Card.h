// Precompiler Directives
#ifndef CARD_H
#define CARD_H

// Header Files
#include <iostream>
#include <vector>
#include <string>

// Begin Card Class Definition
class Card{

   public:
   
      // Constructors/Destrutors
      Card();                         // Default Constructor
      Card( std::string s, int num ); // Parameterized Constructor
      ~Card();                        // Destructor
   
      // Set Data Members
      void setSuit( std::string s );
      void setNumber( int num );
   
      // Get Data Members
      std::string getSuit();
      int getNumber();
      
      // Accessors
      void printCards( std::vector<Card> &cardArray );
   
   private:

      std::string suit;
      int number;
};

#endif
