#include <iostream>
using namespace std;
int cnt[1000002];

int main()
{
    int TC; cin >> TC;
    while (TC--)
    {
        int n; cin >> n;
        memset (cnt, 0, sizeof(cnt));
        for(int i = 0; i < n; ++i){
            int x; cin >> x;
            if(x > 0) cnt[x] = 1;
        }
        for(int i = 1; i <= 1000001; ++i){
            if(cnt[1] == 0){
                cout << i << endl;
                break;
            }
        }
       
    }
    
    return 0;
}