// unordered_set implemented using hash table
// no sorting, avg O(1) lookup, avg O(1) insertion, avg O(1) deletion

#include <iostream>
#include <unordered_set>

int main ()
{
    std::unordered_set<int> s1;
    s1.insert(10);
    s1.insert(30);
    s1.insert(40);
    s1.insert(10);
    s1.insert(15);
    s1.insert(12);
    s1.insert(25);
    for(int val : s1)
    {
        std::cout<<val<<std::endl;
    }
    std::cout<<s1.count(10)<<std::endl;
    std::cout<<s1.size()<<std::endl;
}