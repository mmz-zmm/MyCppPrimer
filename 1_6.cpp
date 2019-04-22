#include <iostream>
#include "Sales_data.h"
using namespace std;

// 假设每个ISBN书号的所有销售记录在文件中是聚在一起保存的
int main()
{
    Sales_data total;
    double totalPrice;
    if(cin >> total.bookNo >> total.units_sold >> totalPrice){
        total.revenue = total.units_sold * totalPrice;

        Sales_data trans;
        double transPrice;
        while(cin >>trans.bookNo >> trans.units_sold >> transPrice) {
            trans.revenue = trans.units_sold * transPrice;

            if( total.bookNo == trans.bookNo){
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            }else{
                cout << total.bookNo <<" "<<total.units_sold <<" "<<total.revenue << " ";
                if(total.units_sold != 0){
                    cout << total.revenue /total.units_sold <<endl;
                }else{
                    cout << "(no sales)"<<endl;
                }

                total.bookNo = trans.bookNo;
                total.units_sold = trans.units_sold;
                total.revenue = trans.revenue;
            }
        }
        cout << total.bookNo <<" "<<total.units_sold <<" "<<total.revenue << " ";
        if(total.units_sold != 0){
            cout << total.revenue /total.units_sold <<endl;
        }else{
            cout << "(no sales)"<<endl;
        }

        return 0;
    } else {
        cerr << "No data?"<<endl;
        return - 1;
    }

}