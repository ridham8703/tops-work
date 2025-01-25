#include <iostream>
using namespace std;

int main() {
    cout<<"Welcome!!! to surat municiple corporation..."<<endl<<"---------------------------------------------"<<endl;
    int current_unit , previous_unit , total_consumed_unit , bill;
        cout<<"Please enter your current unit: "<<endl;
        cin>>current_unit;
        
            cout<<"Please enter your previous unit: "<<endl;
            cin>>previous_unit;
            
                 cout<<"--------------------------------"<< endl;
                total_consumed_unit = current_unit - previous_unit;
                
    if(current_unit >= previous_unit){
        cout<< "Total unit = "<<total_consumed_unit<< endl;
    }else{
        cout<< "Please check your meter "<< endl;
    }
                cout<<"--------------------------------"<< endl;
                if (total_consumed_unit >= 0) {
        if (total_consumed_unit <= 100) {
            bill = total_consumed_unit * 10;
        } else if (total_consumed_unit <= 250) {
            bill = total_consumed_unit * 15;
        } else if (total_consumed_unit <= 350) {
            bill = total_consumed_unit * 25;
        } else {
            bill = total_consumed_unit * 35;
        }
                }
                cout<<"total bill : "<<bill <<endl;
                cout<<"--------------------------------"<< endl;
                if (bill > 5000) {
        bill -= (bill * 0.30); 
    } else if (bill > 2000) {
        bill -= (bill * 0.20); 
    } else if (bill > 1000) {
        bill -= (bill * 0.10); 
    }

    cout << "Your total bill after discount is: " << bill << endl;
                
                
                
    return 0;
}



//1000 uper bill hoi to 10% dicount
//2000 uper bill hoi to 20% dicount
//5000 uper bill hoi to 30% dicount