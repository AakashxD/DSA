#include <iostream>
#include <vector>

using namespace std;

int coinChangeWays(const vector<int>& coins, int amount, int index) {
    // If the amount is 0, there is one solution (do not include any coin)
    if (amount == 0) {
        return 1;
    }

    // If the amount is negative or there are no more coin denominations to consider
    if (amount < 0 || index == coins.size()) {
        return 0;
    }

    // Include the current coin at index 'index' and recur with the remaining amount
    int includeCurrent = coinChangeWays(coins, amount - coins[index], index);

    // Exclude the current coin at index 'index' and recur with the same amount
    int excludeCurrent = coinChangeWays(coins, amount, index + 1);

    // Sum the two possibilities
    return includeCurrent + excludeCurrent;
}

int main() {
    vector<int> coins = {1, 2, 5};
    int amount = 10;

    int ways = coinChangeWays(coins, amount, 0);

    cout << "Number of ways to make change: " << ways << endl;

    return 0;
}