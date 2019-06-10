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
#define ITER(coll, it) for(it = coll.begin(); it != coll.end(); it++)
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
typedef map<string, int> msi;

const double eps = 1e-9;
const double pi = 2*acos((double) 0);

msi lovers;

int main() {
    int nn;
    cin >> nn;

    string name;
    REP(i, nn) {
        cin >> name;
        lovers[name]++;
        getline(cin, name);
    }

    msi::iterator it;
    ITER(lovers, it) {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}
