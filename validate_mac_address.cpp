#include <iostream>
#include <string>
#include <regex>
 
int main()
{
    std::string lines[] = {"10:52:1C:02:45:58",
                           "48:3F:DA:4B:1D:60",
                           "48:3F:DA:4B:1D:6H"};
 
    std::regex color_regex("^([0-9A-Fa-f]{2}[:-]){5}([0-9A-Fa-f]{2})$");
 
    // simple match
    for (const auto &line : lines) {
        std::cout << line << ": " << std::boolalpha
                  << std::regex_search(line, color_regex) << '\n';
    }   
    std::cout << '\n';
 
    
}
