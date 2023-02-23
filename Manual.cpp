#include "Manual.hpp"

Manual::Manual(){
    url = "";
    device_name = "";
    visual_aid = false;
    website = false;
}

Manual::Manual(const std::string title,const std::string author,const int page_count,const bool is_digital,const std::string name_of_device,const std::string url_format,const bool present_aid):
Book(title, author, page_count, is_digital), device_name{name_of_device}, url{url_format}, visual_aid{present_aid}{}


/**
  @param  : a reference to a string representing the device
  @post   : sets the private member variable to the value of the parameter
**/
void Manual::setDevice(const std::string &name_of_device){
    this->device_name = name_of_device;
};


/**
  @return  : the variable indicating the device the manual is for
**/
std::string Manual::getDevice() const{
    return device_name;
};


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
    std::regex regPattern("https://www\\.[a-zA-Z0-9]+\\.[a-zA-Z]{2,}");

    if (std::regex_match(url_format, regPattern)) {
      this->url = url_format;
    } else {
      url = "Broken Link";
    }
    website = true;
    return website;
};


/**
  @return  : the url for the website
**/
std::string Manual::getWebsite() const{
    return url;
};


/**
  @param  : a boolean
  @post   : sets the private member variable indicating the presence
            of a visual aid to the value of the parameter
**/
void Manual::setVisualAid(const bool present_aid){
    this->visual_aid = present_aid;
};


/**
  @return  : the has website flag
**/
bool Manual::hasWebsite() const{
    return website;
};

/**
  @return  : the visual aid flag
**/
bool Manual::hasVisualAid() const{
    return visual_aid;
};
