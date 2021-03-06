#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
#include <ctime>
#include <numeric>
#include <set>

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define FOR0(i, n) for(i=0;i<n;i++)
#define FOR(i, j, n) for(i=j;i<n;i++)
#define FORD(i, j, k) for(i=j;i>=k;i--)

#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

#define pb push_back
#define ff first
#define ss second

typedef long long ll;
typedef long double ld;

inline long long MAX2(long long a, long long int b) { return (a) > (b) ? (a) : (b); }

inline long long MAX3(long long a, long long b, long long c) {
    return (a) > (b) ? ((a) > (c) ? (a) : (c)) : ((b) > (c) ? (b) : (c));
}

inline long long MIN2(long long a, long long b) { return (a) < (b) ? (a) : (b); }

inline long long MIN3(long long a, long long b, long long c) {
    return (a) < (b) ? ((a) < (c) ? (a) : (c)) : ((b) < (c) ? (b) : (c));
}

using namespace std;

int main() {
    faster;

    string input;
    string result = "";

    while ((cin.peek() != '\n') && (cin.peek() != EOF)) {
        cin >> input;
        bool last_is_vowel = false;

        string value = "";

        for (int i = 0; i < input.size(); ++i) {
            char c = input.at(i);

            last_is_vowel = c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
            value += c;

            if (last_is_vowel) {
                i += 2;
            }

        }

        result += value + " ";
    }

    cout << result << endl;
    cerr << endl << "Time elapsed : " << clock() * 1000.0 / CLOCKS_PER_SEC << " ms" << '\n';
}