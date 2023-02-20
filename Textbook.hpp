#ifndef TEXTBOOK_H
#define TEXTBOOK_H
#include <iostream>
#include <string>
#include "Book.hpp"

/* - An enum named `grade_level`
     with values `{NONE,  ELEMENTARY, JUNIOR_HIGH, HIGH_SCHOOL, COLLEGE}`
     in that order
*/
enum grade_level{NONE,  ELEMENTARY, JUNIOR_HIGH, HIGH_SCHOOL, COLLEGE};

class Textbook : public Book{
    /* private
    - a string the represents the subject of the book
    - variable of type grade_level that represents the grade level of the book
    - a boolean that indicates whether the book has review questions or not
    */
    private:
    std::string book_subject;
    int booK_grade_level;
    bool book_review_questions;

    public:
    /** public
    Default constructor.
     Default-initializes all private members.
    */
    Textbook();
    /**
    Parameterized constructor.
    @param     : The title of the book (a string)
    @param     : The author of the book (a string)
     @param     : The number of pages in the book (a positive integer)
    @param     : A flag indicating whether the book is in digital form
                    with DEFAULT VALUE False (a Boolean)
    @param     : The subject of the book (a string)
    @param     : The grade level of the book (of type grade_level)
                  with DEFAULT VALUE NONE
    @param     : A boolean to indicate whether the book has review
                    questions with DEFAULT VALUE False
    @post      : The private members are set to the values of the
                    corresponding parameters.
    */
    Textbook(std::string book_title, std::string book_author, int book_pages, bool is_digital, std::string book_subject, int book_grade_level, bool review_questions);
    void setSubject();
    std::string getSubject();
    void setGradeLevel();
    int getGradeLevel();
    void setReviewQuestions();
    bool checkReviewQuestions();

};

#endif