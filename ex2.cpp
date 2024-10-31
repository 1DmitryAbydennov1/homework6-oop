#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iterator>

void reverseVectorAndStrings(std::vector<std::string>& strings) 
{
    std::for_each(strings.begin(), strings.end(), [](std::string& s) 
    {
        std::reverse(s.begin(), s.end());
    });

    std::reverse(strings.begin(), strings.end());
}

int main() {

    std::vector<std::string> strings((std::istream_iterator<std::string>(std::cin)),
                                     std::istream_iterator<std::string>());

    reverseVectorAndStrings(strings);

    std::for_each(strings.begin(), strings.end(), [](const std::string& s) 
    {
        std::cout << s << " ";
    });

    return 0;
}
