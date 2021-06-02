#include "ParsedData.h"

ParsedData::ParsedData(const std::string& url, const std::string& title, const std::string& description, const std::string& text)
{
    _url = url;
    _title = title;
    _description = description;
    _text = text;
}

std::string ParsedData::GetText()
{
    return _text;
}

std::string ParsedData::GetTitle()
{
    return _title;
}

std::string ParsedData::GetDescription()
{
    return _description;
}

std::string ParsedData::GetUrl()
{
    return _url;
}