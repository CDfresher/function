#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{


     vector<int> int1,prices;
     int a;
     while(cin>>a)
        prices.push_back(a);

        for(auto it1=prices.begin();it1!=prices.end();it1++)
            {
            int n1=*(it1+1);

            if(*it1<*(it1+1))
            {
            for(auto it2=it1+2;it2!=prices.end();it2++)
                {
                if(*it2>n1)
                    n1=*it2;

                if(*it2<n1)
                    break;
               }
                int1.push_back(n1-*it1);
           }
       }
        if(int1.size()>=2)
            {
            auto it=max(int1.begin(),int1.end());
            int n=*it;
            int1.erase(it,it);
            it=max(int1.begin(),int1.end());
           cout<< n+*it;
        }
        if(int1.size()==1)
            cout<< int1.front();
         if(int1.size()==0)
            cout<< 0;

    return 0;
}
