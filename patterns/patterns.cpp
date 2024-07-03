#include<iostream>
using namespace std;
void print1 (int n){

   for(int i=1;i<6;i++){
    int num;
    if (i%2==0){
         num=0;
    }
    else{
        num=1;
    }
    for (int j=1;j<=i;j++){
        cout<<num<<" ";
        num=1-num;

    }
    cout<<endl;
   }

}
void print2 (int n){

    int space =2*(n-1);
    for(int i=1;i<=n;i++){
        
     // numbers
     for(int j=1;j<=i;j++){
        cout<<j;
     }
    
    
    // space 
    for(int j=0;j<=space;j++){
        cout<<" ";

    }
    


     // numbers
     for(int j=1;j<=i;j++){
        cout<<j;
     }
     cout<<endl;
     space=space-2;

   
}

}
void print3 (int n){

    
    for (int i=0;i<=n;i++){
         int k=65;
        for(int j=0;j<=(4-i);j++){
            cout<<char(k);
            k++;
        }
        cout<<endl;
    }

}
void print4(int n) {
    for (int i = 1; i <= n; i++) {
        int k = 65; // ASCII value of 'A'
        // leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // characters
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << char(k);
            if (j < i) {
                k++;
            } else {
                k--;
            }
        }

        // trailing spaces (optional, for symmetry)
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}
void print5(int n) {
 
    for (int i=0;i<=n;i++){
         int k=69;
         k-=i;
        for(int j=0;j<=i;j++){
            cout<<char(k);
            k++;
        }
        cout<<endl;
    }


}
void print6(int n) {
   static int S=0;
    for(int i=0;i<n;i++){
        // symbol
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        // spaces
        for(int j=0;j<S;j++){
            cout<<" ";
        }
           // symbol
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        S+=2;
        cout<<endl;
    
    }
         S-=2;
        for(int i=0;i<n;i++){

        // symbol
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        // spaces
        for(int j=0;j<S;j++){
            cout<<" ";
        }
           // symbol
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        S-=2;
        cout<<endl;
    }
}
void print7(int n) {
    static int s=2*n-2;
    for (int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
          for(int j=0;j<s;j++){
            cout<<" ";
        }

        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        s=s-2;
        cout<<endl;
    }
        s=s+4;
    for (int i=1;i<n;i++){
        
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
          for(int j=0;j<s;j++){
            cout<<" ";
        }

        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        s=s+2;
        cout<<endl;
    }
}
int main() {
    print7(6);
    return 0;
}