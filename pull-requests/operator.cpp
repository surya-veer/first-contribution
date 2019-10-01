#include <bits/stdc++.h>

using namespace std;

int main() {
    double meal_cost,tp,tax; double tot; int tt,to;
    cin >> meal_cost;
    int tip_percent;
    cin >> tip_percent;
    int tax_percent;
    cin >> tax_percent;
    tp = tip_percent*0.01 * meal_cost;
    tax = tax_percent*0.01 * meal_cost;
    tot = tp+tax+meal_cost;
    tt=tot; to = tt;
    tt = tot*100; 
    if(tt%100<50)
        cout<<"The total meal cost is "<<to<<" dollars.";
    else
        cout<<"The total meal cost is "<<to+1<<" dollars.";
    return 0;
}


//Author: theNaavik

/*
*/
