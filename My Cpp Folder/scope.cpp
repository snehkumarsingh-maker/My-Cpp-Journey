// bro yha hm code likh rhe h array me jo number h usko update krne ke liye 
// jaise for me upadate nhi hota h but isme hota h to ye ussi ka code h to methord deakh bus 



#include<iostream>
using namespace std;

// usme bus abhi hmm computer ko array or n ka bta the h ki ye kush to he 


void update(int arr[], int n)   {

    cout<< "Inside the function"<< endl;

    //updating array's first element
    arr[0] = 120;

    // printing the array
    for(int i = 0; i<3; i++){
        cout<<arr[i]<<" ";

    } cout<<endl;



    cout<<"Going back to main function"<< endl;



}
//sbse starting me hum int main ka function hi bnate h to ye inportant he dhyan me rkhna ki hm iska function bna rhe h 
int main () {
    // isme hmne computer ko ye btaya ki array me kon konse elenents h 
    int arr[6] = {1,3,4,6,7,0};
 
    // the hum yha upar wala jo void wala code h uske perspective se bta rhe h ki bhai array ki us value ko update kro 
    update(arr,6);

    // Them hm yha brta rhe h ki jo updated array h na usko print kro or agar array update nhi hua to vhi purana wala print ho jyega.
    
    // printing the array
    cout<<"Going back to main function"<< endl;
    for(int i = 0; i<6; i++){
        cout<<arr[i]<<" ";

    } cout<<endl;
    return 0;
}