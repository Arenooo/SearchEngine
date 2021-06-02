#ifndef DATA_BASE_H
#define DATA_BASE_H

#include <string>

#include <mysql_connection.h>
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

class DataBase
{
    static sql::Driver* _driver;
    static sql::Connection* _connection;
    static sql::Statement* _statement;

public:

    static void Init(const std::string& host, const std::string& username, const std::string& password, const std::string& schema);
    
    static sql::ResultSet* MakeRequest(const std::string& query);
};

#endif