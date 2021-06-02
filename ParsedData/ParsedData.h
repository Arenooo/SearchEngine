#ifndef PARSED_DATA_H
#define PARSED_DATA_H

#include <string>

class ParsedData
{
    std::string _url;
    std::string _title;
    std::string _description;
    std::string _text;

public:

    ParsedData(const std::string& url, const std::string& title, const std::string& description, const std::string& text);
    
    std::string GetUrl();
    std::string GetTitle();
    std::string GetDescription();
    std::string GetText();
};

#endif