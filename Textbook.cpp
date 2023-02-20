#include <iostream>
#include <string>
#include "Textbook.hpp"

Textbook::Textbook(){

}

Textbook::Textbook(std::string book_title, std::string book_author, int book_pages, bool is_digital, std::string book_subject, int book_grade_level, bool review_questions){

}

/**
  @param  : a reference to a string representing the the subject of the book
  @post   : sets the private member variable to the value of the parameter
**/
void Textbook::setSubject(){

}


/**
  @return  : the subject of the textbook
**/
std::string Textbook::getSubject(){

}


/**
  @param  : a reference to a grade_level
  @post   : sets the private member variable to the value of the parameter
**/
void Textbook::setGradeLevel(){

}


/**
  @return  : a string representative of the grade_level
            (e.g. if the grade level is JUNIOR_HIGH,
            it returns "JUNIOR HIGH")
**/
int Textbook::getGradeLevel(){

}


/**
  @post   : sets the review question flag to True
**/
void Textbook::setReviewQuestions(){

}


/**
  @return  : the flag indicating if the texbook has review questions
**/
bool Textbook::checkReviewQuestions(){

}
