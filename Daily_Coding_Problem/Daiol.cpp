/* Day 1 - Problem Statement

    Given a list of numbers, return whether any two sums to k. 
    For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

    Bonus: Can you do this in one pass?
*/


/* Problem Meaning

    Apan ko bola hai ki ek paas me dhoondhna hai ki kisi do ka sum==k hai ya nhi?
    Agar hum ith position me hai array ke jiska value x hai..
    toh agar k-x bhi ho array me to solution mil jayega..
    Toh aisa konsa data structure hai jo bata sake ki k-arr[i] present hai ya nhi?
    Map is an Option 

        
*/

// Code --

    bool solve(vector<int> &v,int k){
        map<int,int> mp; //map for storing previous values to check for presence of k-val
        
        for(int x:v){
            if(mp[k-x]) return true;
            mp[x]=1;
            }

        return false;
    }
