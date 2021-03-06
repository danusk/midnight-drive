#pragma once
#include <stdexcept> 
#include <string>

class FileNotFound : public std::runtime_error
{
public:
    virtual const char* what() const noexcept;
    FileNotFound(std::string msg) : std::runtime_error(msg.c_str()) {}
    FileNotFound(const char * msg) : std::runtime_error(msg) {}
    std::string resolve();

private:
    std::string resolvePath();
    void exit();
};
