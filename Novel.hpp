#ifndef NOVEL_H
#define NOVEL_H
#include <iostream>
#include <string>
#include <vector>
#include "Book.hpp"

struct review {
    double score_;
    std::string rating_;
};

class Novel : public Book{
/* - a string indicating the genre of the novel
  - a vector of strings storing the characters
    in the novel (a character list)
  - a vector of reviews (type review defined in the above struct)
    storing the reviews for this novel
  - a floating point number (double) storing the average rating
  - a boolean indicating whether a film adaptation for this
    novel exists
*/
private:
    std::string novel_genre;
    std::vector<std::string> character_list;
    std::vector<std::string> reviews;
    double avrg_rating;
    bool film_adaptation;
    
public:

/**
  Default constructor.
  Default-initializes all private members.
*/
Novel();

/**
  Parameterized constructor.
  @param     : The title of the book (a string)
  @param     : The author of the book (a string)
  @param     : The number of pages in the book (a positive integer)
  @param     : A flag indicating whether the book is in digital form
                with DEFAULT VALUE False (a Boolean)
  @param     : The genre of the novel (a string)
  @param     : A flag indicating whether there is a film adaptation
                for this novel with DEFAULT VALUE False (a Boolean)
*/
Novel(std::string title, std::string author, int page_count, bool is_digital, std::string genre_novel, bool film_adapt);
std::string getGenre() const;
void setGenre(const std::string genre_novel);
std::vector<std::string> getCharacterList() const;
std::vector<std::string> getCharacterListString();
void addCharacter(std::string character);
bool hasFilmAdaptation();
void setFilmAdaptation();
double getAverageRating();
double createReview(double review_score, std::string review_rating);
void addReview();
void calculateAverageRating();


};
#endif
