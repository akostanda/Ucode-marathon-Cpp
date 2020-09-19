#include "algorithmUtils.h"

#include<iostream>
#include<vector>

bool isAqual(std::vector<int>& v, int n) {
    for (auto i : v)
        return i == n;
    return false;
}

int main() {

    // IsInRange(20, 20, 100) ? std::cout << "true" << "\n" : std::cout << "false" << "\n";
    // IsInRange(100, {20, 100}) ? std::cout << "true" << "\n" : std::cout << "false" << "\n";

    // IsInsideRange(20, 20, 100) ? std::cout << "true" << "\n" : std::cout << "false" << "\n";
    // IsInsideRange(100, {20, 100}) ? std::cout << "true" << "\n" : std::cout << "false" << "\n";

    // int n = 20;
    // Modify(n, 95) ? std::cout << "true" << "\n" : std::cout << "false" << "\n";
    // Modify(n, 95) ? std::cout << "true" << "\n" : std::cout << "false" << "\n";

    // std::vector<int> v = {1, 3, 5, 654, 4, 3, 65, 78, 3};
    // for (auto i : v)
    //     std::cout << i << " ";
    // std::cout << "\n ";
    // RemoveAll(v, 3);
    // for (auto i : v)
    //     std::cout << i << " ";

    // std::vector<int> v = {1, 3, 5, -654, 4, -3, 65, -78, 3, 0};
    // for (auto i : v)
    //     std::cout << i << " ";
    // std::cout << "\n ";
    // RemoveAllIf(v, [](int n){
    //     if (n > 0)
    //         return true;
    //     return false;
    // });
    // for (auto i : v)
    //     std::cout << i << " ";

    // std::vector<int> v = {1, 3, 5, -654, 4, -3, 65, -78, 3, 0};
    // for (auto i : v)
    //     std::cout << i << " ";
    // std::cout << "\n";
    // std::vector <int>::iterator it = Find(v, 4);
    // std::cout << *it << "\n";
    // for (auto i : v)
    //     std::cout << i << " ";

    // std::vector<int> v = {100, 3, 5, -654, 4, -3, 65, -78, 3, 0};
    // for (auto i : v)
    //     std::cout << i << " ";
    // std::cout << "\n";
    // std::vector <int>::iterator it = FindIf(v, [](int n){
    //     if (n > 10 && n < 70)
    //         return true;
    //     return false;
    // });
    // std::cout << *it << "\n";
    // for (auto i : v)
    //     std::cout << i << " ";

    // std::vector<int> v = {100, 3, 5, -654, 4, -3, 65, -78, 3, 0};
    // Contains(v, -654) ? std::cout << "true" << "\n" : std::cout << "false" << "\n";
    // Contains(v, 1010) ? std::cout << "true" << "\n" : std::cout << "false" << "\n";

    // std::vector<int> v = {100, 3, 5, -654, 4, -3, 65, -78, 3, 0};
    // Contains(v, [](int n){
    //     if (n > 10 && n < 70)
    //         return true;
    //     return false;
    // }) ? std::cout << "true" << "\n" : std::cout << "false" << "\n";
    // Contains(v, [](int n){
    //     if (n > 10 && n < 50)
    //         return true;
    //     return false;
    // }) ? std::cout << "true" << "\n" : std::cout << "false" << "\n";

    // std::cout << Min(1, 2, 3, 5) << "\n";

    // std::cout << Max("AAA", "BBB", "CCC" , "www") << "\n";

    // std::vector<int> v = {100, 3, 5, -654, 4, -3, 65, -78, 3, 0};
    // std::vector<std::string> s = {"AAA", "BBB", "CCC", "DDD", "EEE", "FFF"};
    // std::cout << MaxElement(v) << "\n";
    // std::cout << MaxElement(s) << "\n";
    // std::cout << MinElement(v) << "\n";
    // std::cout << MinElement(s) << "\n";

    // std::vector<int> v = {100, 3, 5, -654, 4, -3, 65, -78, 3, 0};
    // std::vector<std::string> s = {"AAA", "BBB", "CCC", "DDD", "EEE", "FFF"};
    // std::cout << MaxElement(v, [](int a, int b){
    //     if (a < b)
    //         return true;
    //     return false;
    // }) << "\n";
    // std::cout << MaxElement(s, [](std::string a, std::string b){
    //     if (a < b)
    //         return true;
    //     return false;
    // }) << "\n";
    // std::cout << MinElement(v, [](int a, int b){
    //     if (a < b)
    //         return true;
    //     return false;
    // }) << "\n";
    // std::cout << MinElement(s, [](std::string a, std::string b){
    //     if (a < b)
    //         return true;
    //     return false;
    // }) << "\n";

    // std::vector<int> v = {100, 3, 5, -654, 4, -3, 65, -78, 3, 0};
    // std::vector<std::string> s = {"FFF", "CCC", "BBB", "DDD", "EEE", "AAA"};
    // Sort(v);
    // Sort(s);
    // for (auto& i : v)
    //     std::cout << i << " ";
    // std::cout << "\n";
    // for (auto& i : s)
    //     std::cout << i << " ";

    // std::vector<int> v = {100, 3, 5, -654, 4, -3, 65, -78, 3, 0};
    // std::vector<std::string> s = {"FFF", "CCC", "BBB", "DDD", "EEE", "AAA"};
    // Sort(v, [](int a, int b) {
    //     return a < b;
    // });
    // Sort(s, [](std::string a, std::string b) {
    //     return a < b;
    // });
    // for (auto& i : v)
    //     std::cout << i << " ";
    // std::cout << "\n";
    // for (auto& i : s)
    //     std::cout << i << " ";

    // std::vector<int> v = {100, 3, 5, -654, 4, -3, 65, -78, 3, 0, 100, 3, 0};
    // std::vector<std::string> s = {"FFF", "CCC", "FFF", "DDD", "CCC", "AAA", "DDD"};
    // Unique(v);
    // Unique(s);
    // for (auto& i : v)
    //     std::cout << i << " ";
    // std::cout << "\n";
    // for (auto& i : s)
    //     std::cout << i << " ";

    // std::vector<int> v = {100, 3, 5, -654, 4, -3, 65, -78, 3, 0, 100, 3, 0};
    // std::vector<std::string> s = {"FFF", "CCC", "FFF", "DDD", "CCC", "AAA", "DDD"};
    // Unique(v, [](int a, int b) {
    //     return a != b;
    // });
    // Unique(s, [](std::string a, std::string b) {
    //     return a != b;
    // });
    // for (auto& i : v)
    //     std::cout << i << " ";
    // std::cout << "\n";
    // for (auto& i : s)
    //     std::cout << i << " ";

    // std::vector<int> v = {100, 3, 5, -654, 4, -3, 65, -78, 3, 0, 100, 3, 0};
    // ForEach(v, [](int& a) {
    //     a *= 3;
    // });
    // for (auto i : v)
    //     std::cout << i << " ";
    
    // std::vector<int> v = {100, 3, 5, -654, 4, -3, 65, -78, 3, 0, 100, 3, 0};
    // std::vector<std::string> s = {"FFF", "CCC", "FFF", "DDD", "CCC", "AAA", "DDD"};
    // std::cout <<IndexOf(v, -3) << "\n";
    // std::cout <<IndexOf(s, "FFF") << "\n";

    std::vector<int> v = {100, 3, 5, -654, 4, -3, 65, -78, 3, 0, 100, 3, 0};
    std::vector<std::string> s = {"FFF", "CCC", "FFF", "DDD", "CCC", "AAA", "DDD"};
    std::cout <<IndexOf(v, [](int a) {
        return a == -3;
    }) << "\n";
    std::cout <<IndexOf(s, [](std::string a) {
        return a == "DDD";
    }) << "\n";

    return 0;
}
