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

bool Can (int n, int k, int a, int pos, vector<int> &shots) {
    vector<bool> shots_pos(n+1);
    for (int i = 0; i < pos; ++i) {
        shots_pos[shots[i]] = true;
    }

    int total_ships=0, empty_cells=0;
    for (int i = 1; i <= n; ++i) {

        if (!shots_pos[i]) {
            empty_cells++;
        } else {
            empty_cells=0;
        }

        if (empty_cells == a) {
            total_ships++;
            empty_cells=0;
            i++; // Let an Empty Cell After Each Group of Ships ??
        }
    }

    return total_ships < k;
}


int main()
{
    ShwaTech

    int n, k, a, m;
    cin >> n >> k >> a >> m;

    vector<int> shots(m);
    for (int &shot: shots) cin >> shot;

    int L=0, R=m, ans=-1;
    while (L <= R) {
        int mid = L + (R - L) / 2;

        if (Can(n, k, a, mid, shots)) {
            ans = mid;
            R = mid - 1;
        } else {
            L = mid + 1;
        }
    }

    cout << ans;


    return 0;
}
