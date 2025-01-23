#include <iostream>
using namespace std;

int main() {
    cout<<"Welcome!!! to surat municiple corporation..."<<endl<<"---------------------------------------------"<<endl;
    int current_unit , previous_unit , total_consumed_unit;
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
                if(total_consumed_unit >= 0){
    if(total_consumed_unit == 0 && total_consumed_unit <= 100){
        cout<<"Your bill is: "<<total_consumed_unit*10<<"₹";
    }else if(total_consumed_unit == 101 && total_consumed_unit <= 250){
        cout<<"Your bill is: "<<total_consumed_unit*15<<"₹";
    }else if(total_consumed_unit == 251 && total_consumed_unit <= 350){
        cout<<"Your bill is: "<<total_consumed_unit*25<<"₹";
    }else{
        cout<<"Your bill is: "<<total_consumed_unit*35<<"₹";
    }
                }
    return 0;
}