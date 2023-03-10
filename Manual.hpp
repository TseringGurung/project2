/*
Name: Tsering Gurung
Date: 02/24/2023
Class: CS 235
Professor: Tiziana Ligorio
Assignment: Manual.hpp
Project 2: Create a Manual class with Book Inherited.
*/

#ifndef MANUAL_HPP
#define MANUAL_HPP
#include "Book.hpp"
#include <iostream>
#include <string>
#include <regex>

class Manual: public Book{
    /*
    - a string that represents a url
    - a string that represents the name of the device
    - a boolean indicating whether the Manual has a visual aid
    - a boolean indicating whether the Manual has a website
    */
    private:
        std::string url;
        std::string device_name;
        bool visual_aid;
        bool website;

    public:
    /**
    Default constructor.
    Default-initializes all private members.
    */
    Manual();

    /**
    Parameterized constructor.
    @param     : The title of the book (a string)
    @param     : The author of the book (a string)
    @param     : The number of pages in the book (a positive integer)
    @param     : A flag indicating whether the book is in digital form
                    with DEFAULT VALUE False (a Boolean)
    @param     : The name of the device (a string)
    @param     : The URL that is in the format
                    'https://www.something.something'
                    or 'http://www.something.something'
                with the last 'something' being at least 2 characters
                    with DEFAULT VALUE empty string (a string)
    @param     : A Boolean indicating the presence of a visual aid
                     with DEFAULT VALUE False
    @post      : The private members are set to the values of the
                    corresponding parameters.
                    If a URL is provided, the website flag is set to True.
                    If the URL is ill-formatted, the website is set to
                    empty string and the website flag is set to False.
    */
    Manual(const std::string title, const std::string author, const int page_count, const std::string name_of_device, const bool is_digital = false, const std::string url_format = "", const bool present_aid = false);
    void setDevice(const std::string &name_of_device);
    std::string getDevice() const;
    bool setWebsite(const std::string &url_format);
    std::string getWebsite() const;
    void setVisualAid(const bool &present_aid);
    bool hasVisualAid() const;
    bool hasWebsite() const;
};

#endif
