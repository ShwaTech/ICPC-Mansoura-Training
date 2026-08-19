// لا الاه الا الله وحده لا شريك له له الملك وله الحمد، وهو علي كل شئ قدير
// استغفر الله العظيم الذي لا الاه الا هو الحي القيوم واتوب اليه
// سبحان الله، الحمد لله، لا الاه الا الله، الله اكبر، لا حول ولا قوة الا بالله
// سبحان الله وبحمده، سبحان الله العظيم
// اللهم صلي وسلم وزد وبارك علي عبدك ونبيك محمد
// حسبي الله لا الاه الا هو عليه توكلت وهو رب العرش العظيم

#include <bits/stdc++.h>
#define nl "\n"
#define ll long long
#define All(v) v.begin(),v.end()
#define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;


int main()
{
    ShwaTech

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;

        vector<ll> fence(n+1);
        for (int i = 1; i <= n; ++i) cin >> fence[i];

        if (fence[1] != n) {
            cout << "NO\n";
            continue;
        }

        vector<ll> rotated_fence(n+1, 0);

        for (int i = 1; i <= n; ++i) {
            rotated_fence[fence[i]]++;
        }

        for (int i = n-1; i >= 1; --i) {
            rotated_fence[i] += rotated_fence[i+1];
        }

        cout << (fence == rotated_fence ? "YES\n" : "NO\n");

    }

    return 0;
}

// // -----------------------------------------------
// // -------------------- OR -----------------------
// // -----------------------------------------------

#include <bits/stdc++.h>
#define nl "\n"
#define ll long long
#define All(v) v.begin(),v.end()
#define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;


int main()
{
    ShwaTech

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;

        vector<ll> fence(n);
        for (ll &fence_i: fence) cin >> fence_i;

        if (fence[0] != n) {
            cout << "NO\n";
            continue;
        }

        vector<ll> partial(n+1);

        for (int i = 0; i < n; ++i) {
            partial[0]++;
            partial[fence[i]]--;
        }

        for (int i = 1; i < n; ++i) {
            partial[i] += partial[i-1];
        }

        bool flag=true;
        for (int i = 0; i < n; ++i) {
            if (fence[i] != partial[i]) {
                flag=false;
                break;
            }
        }

        cout << (flag ? "YES\n" : "NO\n");
    }

    return 0;
}

// // -----------------------------------------------
// // -------------------- OR -----------------------
// // -----------------------------------------------

#include <bits/stdc++.h>
#define nl "\n"
#define ll long long
#define All(v) v.begin(),v.end()
#define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;


int main()
{
    ShwaTech

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;

        vector<ll> fence(n+1);
        for (int i = 1; i <= n; ++i) cin >> fence[i];

        if (fence[1] != n) {
            cout << "NO\n";
            continue;
        }

        bool flag=true;
        for (int i = 1; i <= n; ++i) {
            if (fence[fence[i]] < i) {
                flag=false;
                break;
            }
        }

        cout << (flag ? "YES\n" : "NO\n");
    }

    return 0;
}
