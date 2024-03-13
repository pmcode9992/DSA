#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int nums[3] = {3, 2, 4};
    int target = 6;
    unordered_map<int, int> hash;
    for (int i : nums)
    {
        hash[i] = target - i;
    }
    for (const auto& [key, value] : hash)
    {
       cout<<key<<" : "<<value<<endl;
       
    }
    
    return 0;
}