#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, p;
    cin >> x >> y >> p;

    int round = 0, o_soldiers = x, e_soldiers = 0, e_life = y;
    int o_sol_diff = 0, e_sol_diff = 0;

    while (o_soldiers > 0 && e_life > 0)
    {
        // 1 step
        if (o_soldiers >= e_life)
        {
            o_sol_diff = o_soldiers - e_life;
            if (o_sol_diff >= 0)
            {
                e_life -= o_soldiers - o_sol_diff;
                e_soldiers -= o_sol_diff;
            }
            else
            {
                round = -1;
                break;
            }
        }
        else
        {
            o_sol_diff = o_soldiers - e_soldiers;
            if (o_sol_diff >= 0)
            {
                e_soldiers -= o_soldiers - o_sol_diff;
                e_life -= o_sol_diff;
            }
            else
            {
                round = -1;
                break;
            }
        }

        // 2 step
        if (e_soldiers >= 0)
        {
            o_soldiers -= e_soldiers;
        }

        // 3 step
        if (e_life > 0)
        {
            e_soldiers += p;
        }
        cout << "OS: " << o_soldiers << " ES: " << e_soldiers << " EL: " << e_life << endl;
        ++round;
    }

    if (o_soldiers <= 0 && e_life > 0)
    {
        round = -1;
    }

    if (o_soldiers <= 0 && e_soldiers > 0)
    {
        round = -1;
    }

    cout << round << endl;
    return 0;
}