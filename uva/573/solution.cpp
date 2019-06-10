#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <deque>
#include <map>
#include <set>
#include <sstream>
#include <cstdio>
#include <cstring>
#include <queue>

#define FOR(a,b,c) for(long long a = (b); a < (c); a++)
#define FORE(a,b,c) for(long long a = (b); a <= (c); a++)
#define FORD(a,b,c) for(long long a = (b); a > (c); a--)
#define REP(a,b) FOR(a,0,b)
#define REPE(a,b) FORE(a,1,b)
#define SZ(c) ((int) c.size())
#define ALL(c) (c).begin(), (c).end()
#define PB push_back
#define MP make_pair

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef pair<long long, long long> pll;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<string> vs;
typedef vector<long long> vll;
typedef vector<pll> vpll;

const double eps = 1e-9;
const double pi = 2*acos((double) 0);

int main() {
    int nh, nu, nd, nf;
    
    while(cin >> nh >> nu >> nd >> nf && nh != 0) {
        int nday = 0, nheight = 0, nfatigue = nu * nf;

        nh *= 100;
        nu *= 100;
        nd *= 100;

        do {
            nday++;
            nheight += nu;
            if (nheight > nh) break;
            nheight -= nd;
            nu = max(0, nu - nfatigue);
        } while(nheight >= 0 && nheight <= nh);

        if (nheight < 0) cout << "failure ";
        else cout << "success ";

        cout << "on day " << nday << endl;
    }

    return 0;
}
