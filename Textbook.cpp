#include "Textbook.hpp"

Textbook::Textbook(){
  book_subject_ = "";
  book_grade_level_ = NONE;
  book_review_questions = false;
}

Textbook::Textbook(std::string title, std::string author, int page_count, std::string book_subject, bool is_digital = false, grade_level book_grade_level, bool review_questions = false):
Book(title, author, page_count, is_digital), book_subject_(book_subject), book_grade_level_(book_grade_level), book_review_questions(review_questions){}

/**
  @param  : a reference to a string representing the the subject of the book
  @post   : sets the private member variable to the value of the parameter
**/
void Textbook::setSubject(std::string& book_subject){
  this->book_subject_ = book_subject;
}


/**
  @return  : the subject of the textbook
**/
std::string Textbook::getSubject(){
  return this->book_subject_;
}


/**
  @param  : a reference to a grade_level
  @post   : sets the private member variable to the value of the parameter
**/
void Textbook::setGradeLevel(grade_level& grade_level_){
  this->book_grade_level_ = grade_level_;
}


/**
  @return  : a string representative of the grade_level
            (e.g. if the grade level is JUNIOR_HIGH,
            it returns "JUNIOR HIGH")
**/
int Textbook::getGradeLevel(){
  std::cout << "\"";
  return this->book_grade_level_;
  std::cout << "\"";
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
bool Textbook::checkReviewQuestions(){
  return this->book_review_questions;
}
