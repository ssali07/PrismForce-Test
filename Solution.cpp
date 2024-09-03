#include <bits/stdc++.h>
#define vi vector<int>
using namespace std;

int initialPower;

bool recursivelyFight(int index, int power, int skip, int heal, vi k, bool isSkipPrev)
{
    if (power < 0)
        return false;
    if (index == k.size())
        return power >= 0;

    bool possible = false;
    // Normal progression
    possible = possible || recursivelyFight(index + 1, power - k[index], skip, heal, k, false);

    // Regenerate power on specific indices
    if (index == 3 || index == 7)
    {
        if (!isSkipPrev)
        {
            k[index] += k[index - 1] / 2;
        }
    }

    // Skip the current circle
    if (skip > 0)
        possible = possible || recursivelyFight(index + 1, power, skip - 1, heal, k, true);

    // Heal Abhimanyu
    if (heal > 0 && initialPower >= k[index])
        possible = possible || recursivelyFight(index, initialPower, skip, heal - 1, k, false);

    return possible;
}

int main()
{
    // There are 11 circles . Let number of circles be n
    int n = 11;

    int p, a, b;
    cout << "Enter the initialPower , Number of skips and Number of recharge : ";
    cin >> p >> a >> b;
    vi k(n, 0);
    cout << "\nEnter the powers of the enemies guarding each of the 11 circles : ";
    for (int i = 0; i < n; i++)
    {
        cin >> k[i];
    }
    // If number of skips greater than 10 then Abhimanyu can cross definitely
    if (a < 11)
    {
        initialPower = p;
        bool canDefeatRec = recursivelyFight(0, p, a, b, k, false);
        cout << "\nAbhimanyu " << (canDefeatRec ? "can cross the Chakravyuha. " : "can't cross the Chakravyuha!");
    }
    else
    {
        cout << "\nAbhimanyu can cross the Chakravyuha.";
    }
    return 0;
}

/*
Test Case 1:
Input:
Enter the initialPower , Number of skips and Number of recharge : 20 1 3
Enter the powers of the enemies guarding each of the 11 circles : 11 20 10 5 3 2 5 8 6 7 9
Output:
Abhimanyu can cross the Chakravyuha.

Test Case 2:
Input:
Enter the initialPower , Number of skips and Number of recharge : 10 2 1
Enter the powers of the enemies guarding each of the 11 circles : 10 2 5 9 4 9 10 1 5 5 1
Output:
Abhimanyu can't cross the Chakravyuha!
*/