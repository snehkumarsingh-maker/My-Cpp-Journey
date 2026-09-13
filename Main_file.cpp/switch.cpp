#include<iostream>
using namespace std;

int main () {

    int num = 1;
    char ch = '1';

    //ye jo switch ke under num likha h ye switch ko check krne ki command h ki hmare systum ko abhi num ke cases check krne.
    // isiki jga agar hum ch likhte to switch statement ch ke cases check krta.

    switch(num) {
        // (Bhai  case ke bagal me 1 and '1' iskiye likha h kyuki switch statement me case 
        // ke andar jo value di jati h wo us variable ke type ke sath match karni chahiye jo (int and char) me likhi h upar 
        
        case 1: cout<<"First case"<<endl;
                cout<<"First again"<<endl;
                break;
        case '1': cout<<"Second case"<<endl;
                break;

        // Ye case tb use hoga jb switch ke under jo variable h wo kisi bhi case ke sath match na kare to ye default case execute hoga.

        default: cout<<"Default case"<<endl;
        
    }


}