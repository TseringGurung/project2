/*
Name: Tsering Gurung
Date: 02/24/2023
Class: CS 235
Professor: Tiziana Ligorio
Assignment: Manual.cpp
Project 2: Create a Manual class with Book Inherited.
*/

#include "Manual.hpp"

/*Default Constructor*/
Manual::Manual(){
    url = "";
    device_name = "";
    visual_aid = false;
    website = false;
}

/*Parameterized Constructor*/
Manual::Manual(const std::string title,const std::string author,const int page_count,const std::string name_of_device,const bool is_digital,const std::string url_format,const bool present_aid):
Book(title, author, page_count, is_digital){
  device_name = name_of_device;
  url = url_format;
  visual_aid = present_aid;
  website = false;
  //The parameterized constructor will give the url string a default value of empty strinig if no value is pass to the constructor for it.
  setWebsite(url);
  if(url == "Broken Link"){
    url = "";
    website = false;
  }
} 

/**
  @param  : a reference to a string representing the device
  @post   : sets the private member variable to the value of the parameter
**/
void Manual::setDevice(const std::string &name_of_device){
   device_name = name_of_device;
}


/**
  @return  : the variable indicating the device the manual is for
**/
std::string Manual::getDevice() const{
    return device_name;
}


/**
  @param   : a reference to a website link (string) that is in the format
             'https://www.something.something'
             or 'http://www.something.something'
             with the last 'something' being at least 2 characters
  @return  : has_website_ flag (a boolean)
  @post    : If the link is not correctly formatted,
             store "Broken Link" in the link member variable (see <regex>)
             and either way set the has website flag to True
**/
bool Manual::setWebsite(const std::string &url_format){
    std::regex regPattern("(https?://)([\\w\\d-]+\\.?)+[A-Za-z]{2,}(/[\\w\\d-]*)*");

    if (std::regex_match(url_format, regPattern)) {
      url = url_format;
      website = true;
    } else {
      url = "Broken Link";
      website = true;
    }
    return website;
}


/**
  @return  : the url for the website
**/
std::string Manual::getWebsite() const{
    return url;
}


/**
  @param  : a boolean
  @post   : sets the private member variable indicating the presence
            of a visual aid to the value of the parameter
**/
void Manual::setVisualAid(const bool &present_aid){
    visual_aid = present_aid;
}


/**
  @return  : the visual aid flag
**/
bool Manual::hasVisualAid() const{
    return visual_aid;
}


/**
  @return  : the has website flag
**/
bool Manual::hasWebsite() const{
    return website;
}
