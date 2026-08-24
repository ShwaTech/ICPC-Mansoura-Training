// لا الاه الا الله وحده لا شريك له له الملك وله الحمد، وهو علي كل شئ قدير
// استغفر الله العظيم الذي لا الاه الا هو الحي القيوم واتوب اليه
// سبحان الله، الحمد لله، لا الاه الا الله، الله اكبر، لا حول ولا قوة الا بالله
// سبحان الله وبحمده، سبحان الله العظيم
// اللهم صلي وسلم وزد وبارك علي عبدك ونبيك محمد
// لا الاه الا الله وحده هو يتولي الصالحين
// ربي اني ظلمت نفسي، فاغفر لي
// حسبي الله لا الاه الا هو عليه توكلت وهو رب العرش العظيم
// بسم الله نبدأ وعليه نتوكل

#include <bits/stdc++.h>
#define nl "\n"
#define ll long long
#define All(v) v.begin(),v.end()
#define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

const int MAX=1e5+10;

int freq[MAX];


int Binary_Search (int k, vector<ll> &products_prefix, int ans=0) {
    int L=1, R=MAX;

    while (L <= R) {
        int mid = L + (R - L) / 2;

        if (products_prefix[mid] >= k) {
            ans = mid;
            R = mid - 1;
        } else {
            L = mid + 1;
        }
    }

    return ans;
}


int main()
{
    ShwaTech

    int n; cin >> n;

    vector<int> machines(n);

    for (int machine_i: machines) {
        cin >> machine_i;

        freq[machine_i]++;
    }

    vector<ll> products_prefix(MAX);
    for (int i = 1; i < MAX; ++i) {
        for (int j = i; j < MAX; j += i) {
            products_prefix[j] += freq[i];
        }
    }

    for (int i = 1; i < MAX; ++i) {
        products_prefix[i] += products_prefix[i - 1];
    }

    int Q; cin >> Q;
    while (Q--) {
        int k; cin >> k;

        cout << Binary_Search(k, products_prefix) << nl;
    }

    return 0;
}
