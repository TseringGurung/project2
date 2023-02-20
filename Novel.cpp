#include "Novel.hpp"

Novel::Novel(){

}

Novel::Novel(std::string book_title, std::string book_author, int book_page, bool is_digital, std::string genre_novel, bool film_adapt){}


/**
  @return   : the value of the genre private member
**/
std::string Novel::getGenre(){
  
}


/**
  @param  : a string indicating the genre of the book
  @post   : sets sets genre_ private member to the
              value of the parameter
**/
void Novel::setGenre(){

}


/**
  @return   : the vector containing the list of characters for this novel
**/
std::vector<std::string> Novel::getCharacterList(){

}


/**
  @return    : a string of all the characters in the
              character_list_ private member, concatenated
              and separated by a space " " .
              For example: "character1 character2 character3"
**/
std::vector<std::string> Novel::getCharacterListString(){

}


/**
  @param  : a string indicating a character
  @post   : inserts the character into the character_list_ vector
**/
std::string Novel::addCharacter(){

}


/**
  @return   : the value of the film_adaptation private member
**/
void Novel::hasFilmAdaptation(){

}



/**
  @post   : sets has_film_adaptation_ private member to true
**/
bool Novel::setFilmAdaptation(){

}


/**
  @return   : the value of the average rating private member
**/
std::string Novel::getAverageRating(){

}



/**
  @param    : a floating point number (double) indicating
              the score of the  review
  @param    : a string indicating the rating of the review
  @return   : creates and returns a review data type with
              score and rating as indicated by the parameters
*/
double Novel::createReview(){

}


/**
  @param  : a review object
  @post   : inserts the review argument into the reviews_ vector
**/
void Novel::addReview(){

}


/**
  @post   : retrieves all scores from the reviews_ vector and
            computes the average to set value of the average_rating_
            private member
**/  
void Novel::calculateAverageRating(){

}

