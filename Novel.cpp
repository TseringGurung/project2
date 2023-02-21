#include "Novel.hpp"

Novel::Novel(){
    novel_genre ="";
    character_list = {};
    reviews = {};
    avrg_rating = 0;
    film_adaptation = false;
}

Novel::Novel(std::string title, std::string author, int page_count, bool is_digital, std::string genre_novel, bool film_adapt){}


/**
  @return   : the value of the genre private member
**/
std::string Novel::getGenre() const{
    return this->novel_genre;
}


/**
  @param  : a string indicating the genre of the book
  @post   : sets sets genre_ private member to the
              value of the parameter
**/
void Novel::setGenre(const std::string genre_novel){
    this->novel_genre = genre_novel;
}


/**
  @return   : the vector containing the list of characters for this novel
**/
std::vector<std::string> Novel::getCharacterList() const{
    return this->character_list;
}


/**
  @return    : a string of all the characters in the
              character_list_ private member, concatenated
              and separated by a space " " .
              For example: "character1 character2 character3"
**/
std::vector<std::string> Novel::getCharacterListString() const{
    
}


/**
  @param  : a string indicating a character
  @post   : inserts the character into the character_list_ vector
**/
void Novel::addCharacter(const std::string character){
    character_list.push_back(character);
}


/**
  @return   : the value of the film_adaptation private member
**/
bool Novel::hasFilmAdaptation() const{
    return this->film_adaptation;
}



/**
  @post   : sets has_film_adaptation_ private member to true
**/
void Novel::setFilmAdaptation(){
    this->film_adaptation = true;
}


/**
  @return   : the value of the average rating private member
**/
double Novel::getAverageRating() const{
    return this->avrg_rating;
}



/**
  @param    : a floating point number (double) indicating
              the score of the  review
  @param    : a string indicating the rating of the review
  @return   : creates and returns a review data type with
              score and rating as indicated by the parameters
*/
double Novel::createReview(const double review_score,const std::string review_rating){
  return createReview(review_score, review_rating);
}


/**
  @param  : a review object
  @post   : inserts the review argument into the reviews_ vector
**/
void Novel::addReview(const std::string review){
  reviews.push_back(review);
}


/**
  @post   : retrieves all scores from the reviews_ vector and
            computes the average to set value of the average_rating_
            private member
**/  
void Novel::calculateAverageRating() const{

}

