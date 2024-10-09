#include <string>

class languageFilter
{
private:
    std::string unfiltered_Text;
    std::string filtered_Text;
    bool debugMode;
public:
    languageFilter();
    languageFilter(std::string);
    ~languageFilter();
};