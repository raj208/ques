


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    
    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    vector<int> maxPrices(n, 0);
    maxPrices[n - 1] = prices[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        maxPrices[i] = max(maxPrices[i + 1], prices[i]);
    }

    int maxProfit = 0;

    for (int i = 0; i < n; i++) {
        maxProfit = max(maxProfit, maxPrices[i] - prices[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<maxPrices[i]<<" ";
    }
    
    cout << "Maximum Profit: " << maxProfit;

    return 0;
}
