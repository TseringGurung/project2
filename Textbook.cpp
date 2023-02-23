#include "Textbook.hpp"

Textbook::Textbook(){
  book_subject_ = "";
  book_grade_level_ = NONE;
  book_review_questions = false;
}

Textbook::Textbook(const std::string title,const std::string author,const int page_count,const std::string book_subject,const grade_level book_grade_level,const bool is_digital,const bool review_questions):
Book(title, author, page_count, is_digital), book_subject_(book_subject), book_grade_level_(book_grade_level), book_review_questions(review_questions){}

/**
  @param  : a reference to a string representing the the subject of the book
  @post   : sets the private member variable to the value of the parameter
**/
void Textbook::setSubject(const std::string& book_subject){
  this->book_subject_ = book_subject;
}


/**
  @return  : the subject of the textbook
**/
std::string Textbook::getSubject() const{
  return this->book_subject_;
}


/**
  @param  : a reference to a grade_level
  @post   : sets the private member variable to the value of the parameter
**/
void Textbook::setGradeLevel(const grade_level& grade_level_){
  this->book_grade_level_ = grade_level_;
}


/**
  @return  : a string representative of the grade_level
            (e.g. if the grade level is JUNIOR_HIGH,
            it returns "JUNIOR HIGH")
**/
std::string Textbook::getGradeLevel() const{
  switch (book_grade_level_) {
        case grade_level::ELEMENTARY:
            return "ELEMENTARY";
        case grade_level::JUNIOR_HIGH:
            return "JUNIOR HIGH";
        case grade_level::HIGH_SCHOOL:
            return "HIGH SCHOOL";
        case grade_level::COLLEGE:
            return "COLLEGE";
        default:
            return "NONE";
    }
}

/**
  @post   : sets the review question flag to True
**/
void Textbook::setReviewQuestions(){
  this->book_review_questions = true;
}


/**
  @return  : the flag indicating if the texbook has review questions
**/
bool Textbook::checkReviewQuestions() const{
  return this->book_review_questions;
}
