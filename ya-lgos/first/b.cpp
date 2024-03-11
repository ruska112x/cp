#include <bits/stdc++.h>

using namespace std;

int main()
{
    int g11, g12, g21, g22, h, r = 0;
    scanf("%d:%d", &g11, &g21);
    scanf("%d:%d", &g12, &g22);
    scanf("%d", &h);

    auto l = [&](){
        if (g11 + g12 > g21 + g22){
            return true;
        }
        if (g11 + g12 == g21 + g22){
            if (h == 2){
                return g11 > g22;
            }
            else {
                return g12 > g21;
            }
        }
        return false;
    };
    
    while (!l()){
        r++;
        g12++;
    }
    cout << r << endl;
}
