#ifndef __DATABASE_HPP__
#define __DATABASE_HPP__

#include <vector>
#include <string>

class Database
{
public:
    ~Database();

    static Database* getInstance();

    void store(const std::string&);
    void remove(const std::string&);
    std::string getName() const;
    void printDB() const;

    std::size_t size() const;

    Database(const Database&) = delete;
    void operator=(Database&) = delete;

private:
    Database();

    static Database* dbPtr;

    std::string dbname_;
    std::vector<std::string> names_;
};

#endif  // __DATABASE_HPP__

