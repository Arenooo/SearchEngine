#include "DataBase.h"

sql::Connection* DataBase::_connection;
sql::Driver* DataBase::_driver;
sql::Statement* DataBase::_statement;

void DataBase::Init(const std::string& host, const std::string& username, const std::string& password, const std::string& schema)
{
    try
    {
        DataBase::_driver = get_driver_instance();
        DataBase::_connection = _driver->connect(host, username, password);
        DataBase::_connection->setSchema(schema);
        DataBase::_statement = _connection->createStatement();
    }
    catch (sql::SQLException& e)
    {
        std::cerr << e.what();
    }
}

sql::ResultSet* DataBase::MakeRequest(const std::string& query)
{
    try
    {
        return _statement->executeQuery(query);
    }
    catch (sql::SQLException& e)
    {
        std::cerr << e.what() << '\n';
        
        return nullptr;
    }
}