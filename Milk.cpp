#include <iostream>
using namespace std;
int main() {
 double Milk_carton = 3.78 ;
 double Producing_per_liter = 0.38;
 double Profit_per_carton = 0.27;
 double Milk_Produced;
 cout<< "How much Milk was produced this morning?";
 cin>> Milk_Produced;
 int Full_Milk_Cartons = Milk_Produced - Milk_carton ;
 double Cost_of_milk = Producing_per_liter * Milk_Produced ;
 double Total_Profit = Full_Milk_Cartons * Profit_per_carton ;
 cout<<"Full Milk Cartons "<< Full_Milk_Cartons<< endl
     <<"Cost To Produce The Milk "<< Cost_of_milk<< endl
     <<"The Total Profit "<< Total_Profit;

    return 0;
}
