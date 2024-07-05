#include <bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define pb push_back
#define umap unordered_map
#define f(i, x, n) for(ll i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void polyIntegration(ll a, ll b, ll c, ll l, ll r, ll& up);
void minimize(ll& up, ll& down);
 
int main() {
    optimize();
    
    ll t;
    cin >> t;

    while (t--) {
        ll a, b, c, l, r;
        cin >> a >> b >> c >> l >> r;

        double d = pow(b, 2) - 4*a*c;

        ll up, down = 6;

        if (d > 0) {
            double in1 = (-b + sqrt(pow(b, 2)-4*a*c))/2*a; 
            double in2 = (-b - sqrt(pow(b, 2)-4*a*c))/2*a;

            if ((in1 >= l && in1 <= r) && (in2 >= l && in2 <= r)) { 
                ll u1, u2, u3;

                polyIntegration(a, b, c, l, (in1 <= in2) ? in1 : in2, u1);
                polyIntegration(a, b, c, (in1 <= in2) ? in1 : in2, (in1 <= in2) ? in2 : in1, u2);
                polyIntegration(a, b, c, (in1 <= in2) ? in2 : in1, r, u3);

                up = u1 + u2 + u3;
            } else if ((in1 >= l && in1 <= r) && (in2 < l || in2 > r)) { 
                ll u1, u2;

                polyIntegration(a, b, c, l, in1, u1);
                polyIntegration(a, b, c, in1, r, u2);

                up = u1 + u2;
            } else if ((in2 >= l && in2 <= r) && (in1 < l || in1 > r)) { 
                ll u1, u2;

                polyIntegration(a, b, c, l, in2, u1);
                polyIntegration(a, b, c, in2, r, u2);

                up = u1 + u2;
            } else { 
                polyIntegration(a, b, c, l, r, up);
            }
        } else if (d == 0) {
            double in1 = -b/2*a;

            if (in1 >= l && in1 <= r) {
                ll u1, u2;

                polyIntegration(a, b, c, l, in1, u1);
                polyIntegration(a, b, c, in1, r, u2);

                up = u1 + u2;
            } else {
                polyIntegration(a, b, c, l, r, up);
            }
        } else {
            polyIntegration(a, b, c, l, r, up);
        }

        minimize(up, down);
        
        cout << up << "/" << down << endl;
    }
}

void polyIntegration(ll a, ll b, ll c, ll l, ll r, ll& up) {
    up = abs((2*a*(pow(r, 3)-pow(l, 3))) + (3*b*(pow(r, 2)-pow(l, 2))) + (6*c*(r-l)));
}

void minimize(ll& up, ll& down) {
    if (up % down == 0) {
        up = up/down;
        down = 1;
    } else {
        ll i = down/2;

        while (i >= 2) {
            if (up % i == 0 && down % i == 0) {
                up /= i;
                down /= i;
                continue;
            } else {
                i--;
            }
        }
    }
}
