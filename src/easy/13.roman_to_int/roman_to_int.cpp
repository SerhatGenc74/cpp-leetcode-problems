#include <unordered_map>
#include <string>
#include <iostream>

int romanToInt(std::string s)
{

    int sum = 0;
    std::unordered_map<char, int> map;

    map['I'] = 1;
    map['V'] = 5;
    map['X'] = 10;
    map['L'] = 50;
    map['C'] = 100;
    map['D'] = 500;
    map['M'] = 1000;

    for (int i = 0; i < s.length(); i++)
    {

        if (i + 1 < s.length() && map[s[i]] < map[s[i + 1]])
        {
            sum += (map[s[i + 1]] - map[s[i]]);
            i++;
        }
        else
        {
            sum += map[s[i]];
        }
    }
    return sum;
}

int main()
{
    std::cout << romanToInt("MCMXCIV");
}