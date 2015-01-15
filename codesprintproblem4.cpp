#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
#include<cstring>
using namespace std;
std::size_t compute_change_needed(const std::string& s)
{
    int hash[26] = { 0 };

    for(int i=0;i<s.length();i++) {
        // Assuming only valid char : a-z
        hash[s[i] - 'a']++;
    }
    std::sort(hash,hash+26, std::greater<int>{});
    std::size_t ans = s.length();
    for(std::size_t i = 1; i != 27; ++i) {
        if(s.length() % i != 0) {
            continue;
        }
        int eachshouldhave = s.length() / i;
        std::size_t moves = 0;
        for(std::size_t j = 0; j != i; j++) {
            moves += std::abs(eachshouldhave - hash[j]);
        }
        ans = std::min(ans, moves);
    }
    return ans;
}
int main(){
	cout<<compute_change_needed("badcomm");
}
