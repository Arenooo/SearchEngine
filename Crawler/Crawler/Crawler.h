#ifndef CRAWLER_H
#define CRAWLER_H

#include "../PageLoader/PageLoader.cpp"
#include "../ParsedData/ParsedData.cpp"
#include "../DataBase/DataBase.cpp"

#include <fstream>
#include <gumbo.h>
#include <assert.h>
#include <vector>
#include <set>
#include <algorithm>
#include <queue>

class Crawler
{
    static std::string _domain;
    static std::string _startUrl;
    static std::string _currentUrl;
    static std::string _redirectedUrl;
    static std::set<std::string> _visitedUrls;
    
    static std::vector<std::string> _ends;
    static std::vector<std::string> _starts;
    
    static std::vector<std::string> GetLinks(const std::string& document);
    static bool IsValidUrl(std::string& url);

    static std::string ToUpper(const std::string& str);
    static std::string RemoveLastDir(const std::string& str);
    static std::string GetText(GumboNode* node, std::string& title, std::string& description);
    static std::string GetDomain(std::string& url);
    static void GetLinks(GumboNode* node, std::set<std::string>& links);
    static std::pair<std::set<std::string>, ParsedData> Parse(const std::string& document);

public:

    static std::vector<ParsedData> Begin(const std::string& startUrl);
};

#endif