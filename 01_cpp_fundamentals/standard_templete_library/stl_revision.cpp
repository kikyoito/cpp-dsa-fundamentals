#include <bits/stdc++.h>
using namespace std;

int main() {
    // Pair Revision:
    pair<int, int> p = {3, 4}; // standard pair of two
    cout << p.first << " " << p.second; // meathod to acess numbers or data sets inside pair

    pair<int, pair<int, pair<int, int>>> p = {1, {3, {4, 5}}}; // nested pairs
    cout << p.first << " " << p.second.first << " " p.second.second.first; // way to print the numbers inside nested pair
    return 0;
}