#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

void solve_travel(unordered_map<string, vector<float>> locations, float max_hours)
{
    int common_divisor = 0;
    for (auto const &[name, data] : locations)
    {
        int t = static_cast<int>(data[0] * 10);
        if (common_divisor == 0)
            common_divisor = t;
        else
            common_divisor = std::gcd(common_divisor, t);
    }
    float base_unit = common_divisor / 10.0;
    int capacity = static_cast<int>(max_hours / base_unit);

    vector<string> names;
    vector<int> weights;
    vector<int> values;
    for (auto const &[name, data] : locations)
    {
        names.push_back(name);
        weights.push_back(static_cast<int>(data[0] / base_unit));
        values.push_back(static_cast<int>(data[1]));
    }

    int n = names.size();
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int w = 1; w <= capacity; w++)
        {
            if (weights[i - 1] <= w)
            {
                dp[i][w] = max(dp[i - 1][w], values[i - 1] + dp[i - 1][w - weights[i - 1]]);
            }
            else
            {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    cout << "Total Rating: " << dp[n][capacity] << endl;
    cout << "Places to visit: " << endl;
    int w = capacity;
    for (int i = n; i > 0; i--)
    {
        if (dp[i][w] != dp[i - 1][w])
        {
            cout << "- " << names[i - 1] << endl;
            w -= weights[i - 1];
        }
    }
}

int main()
{
    unordered_map<string, vector<float>> travel_places;

    travel_places["Chorsu"] = {1.5, 6};
    travel_places["Mustaqillik maydoni"] = {0.5, 7};
    travel_places["Ko'kaldosh madrassasi"] = {1, 8};
    travel_places["Minor masjidi"] = {0.5, 8};
    travel_places["Hastimom"] = {1, 9};
    travel_places["Oloy bozor"] = {1, 10};
    travel_places["Amir Temur muzeyi"] = {2, 8};

    solve_travel(travel_places, 4.0);

    return 0;
}