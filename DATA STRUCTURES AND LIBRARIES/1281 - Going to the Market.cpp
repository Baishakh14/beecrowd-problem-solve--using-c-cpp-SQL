#include<iostream>
#include<string>
using namespace std;

const int MAX_ITEMS = 100;

int main()
{
    int n;
    scanf("%d", &n);
    
    while(n--)
    {
        double total_price = 0.0;
        
        // Input for items in the market
        int market_items;
        scanf("%d", &market_items);
        string market_item_names[MAX_ITEMS];
        double market_item_prices[MAX_ITEMS];
        for(int i = 0; i < market_items; i++)
        {
            cin >> market_item_names[i] >> market_item_prices[i];
        }
        
        // Input for items required
        int required_items;
        scanf("%d", &required_items);
        string required_item_names[MAX_ITEMS];
        int required_item_amounts[MAX_ITEMS];
        for(int i = 0; i < required_items; i++)
        {
            cin >> required_item_names[i] >> required_item_amounts[i];
        }
        
        // Calculate total price
        for(int i = 0; i < required_items; i++)
        {
            for(int j = 0; j < market_items; j++)
            {
                if(required_item_names[i] == market_item_names[j])
                {
                    total_price += required_item_amounts[i] * market_item_prices[j];
                    break;
                }
            }
        }
        
        printf("R$ %.2lf\n", total_price);
    }
    
    return 0;
}
