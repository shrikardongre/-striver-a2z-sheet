  #include<iostream>
  using namespace std;
 
 int evenlyDivides(int N){
        int count=0 ;
        while (N>0){
            int digit=N%10;
            
            if ( digit!=0 && N%digit==0){
                count ++;
            }
            
                N=N/10;
            
        }
           return count ;
    }
  
    int main()
    {
        cout<<evenlyDivides(2446);
        return 0;
    }