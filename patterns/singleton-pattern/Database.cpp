#include <algorithm>
#include <iostream>

#include "Database.hpp"

Database::Database() : dbname_("DBDB")
{}

Database::~Database()
{
    delete dbPtr;
}

Database* Database::getInstance()
{
    if (dbPtr == nullptr)
        dbPtr = new Database();

    return dbPtr;
}

void Database::store(const std::string& name)
{
    names_.push_back(name);
}

void Database::remove(const std::string& name)
{
    names_.erase(std::remove(names_.begin(), names_.end(), name), names_.end());
}

std::string Database::getName() const
{
    return dbname_;
}

void Database::printDB() const
{
    for (const auto& db : names_)
    {
        std::cout << db << "\n";
    }
}

std::size_t Database::size() const
{
    return names_.size();
}