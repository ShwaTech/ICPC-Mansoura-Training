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

    int n; cin >> n;

    if (n == 1) {
        cout << "1 0";
        return 0;
    }

    vector<int> a(n);
    for (int &ai: a) cin >> ai;

    int L=1, R=n-2;
    ll sum_x=a[0], sum_y=a[n-1];
    int cnt_x=1, cnt_y=1;

    while (L <= R) {
        if (sum_x <= sum_y) {
            sum_x += a[L++];
            cnt_x++;
        } else {
            sum_y += a[R--];
            cnt_y++;
        }
    }

    cout << cnt_x << " " << cnt_y;

    return 0;
}
