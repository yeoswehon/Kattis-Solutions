#include <bits/stdc++.h>
using namespace std;

int main() {
    string voter;
    unordered_map<string, int> ht;
    
    // Read votes and count them
    while (getline(cin, voter)) {
        if (voter == "***") {
            break;
        }
        ht[voter]++;
    }
    int max_votes = 0;
    string winner = "";
    bool runoff = false;

    // Find the winner or determine if there's a runoff
    for (auto [name,vote_count]:ht) {
        if (vote_count > max_votes) {
            max_votes = vote_count;
            winner = name;
            runoff = false;
        } else if (vote_count == max_votes) {
            runoff = true;
        }
    }
    if (runoff) {
        cout << "Runoff!";
    }
    else cout << winner;

    return 0;
}
