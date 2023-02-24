#include "Novel.hpp"

Novel::Novel(){
    novel_genre ="";
    character_list;
    reviews;
    avrg_rating = 0.0;
    film_adaptation = false;
}

Novel::Novel(const std::string title,const std::string author,const int page_count,const std::string genre_novel,const bool is_digital,const bool film_adapt):
Book(title, author, page_count, is_digital){
  novel_genre = genre_novel;
  film_adaptation = film_adapt;
  character_list;
  reviews;
  avrg_rating = 0.0;
}


/**
  @return   : the value of the genre private member
**/
std::string Novel::getGenre() const{
    return novel_genre;
}


/**
  @param  : a string indicating the genre of the book
  @post   : sets sets genre_ private member to the
              value of the parameter
**/
void Novel::setGenre(const std::string &genre_novel){
    novel_genre = genre_novel;
}


/**
  @return   : the vector containing the list of characters for this novel
**/
std::vector<std::string> Novel::getCharacterList() const{
    return character_list;
}


/**
  @return    : a string of all the characters in the
              character_list_ private member, concatenated
              and separated by a space " " .
              For example: "character1 character2 character3"
**/
std::string Novel::getCharacterListString() const{
  std::string total = "";
  for(int i = 0; i < character_list.size();i++){
    total += character_list[i] + " ";
  }
  return total;
}


/**
  @param  : a string indicating a character
  @post   : inserts the character into the character_list_ vector
**/
void Novel::addCharacter(const std::string &character){
    character_list.push_back(character);
}


/**
  @return   : the value of the film_adaptation private member
**/
bool Novel::hasFilmAdaptation() const{
    return film_adaptation;
}



/**
  @post   : sets has_film_adaptation_ private member to true
**/
void Novel::setFilmAdaptation(){
    film_adaptation = true;
}


/**
  @return   : the value of the average rating private member
**/
double Novel::getAverageRating() const{
    return avrg_rating;
}



/**
  @param    : a floating point number (double) indicating
              the score of the  review
  @param    : a string indicating the rating of the review
  @return   : creates and returns a review data type with
              score and rating as indicated by the parameters
*/
review Novel::createReview(const double &review_score,const std::string &review_rating){
  review ratings;
  ratings.score_ = review_score;
  ratings.rating_ = review_rating;
  return ratings;
}


/**
  @param  : a review object
  @post   : inserts the review argument into the reviews_ vector
**/
void Novel::addReview(const review &review){
  reviews.push_back(review);
}


/**
  @post   : retrieves all scores from the reviews_ vector and
            computes the average to set value of the average_rating_
            private member
**/  

void Novel::calculateAverageRating(){
  double total = 0.0;
  for(int i = 0; i < reviews.size(); i++){
    total += reviews[i].score_;
  }
  avrg_rating = total / reviews.size();
}
