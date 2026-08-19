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
// لا الاه الا الله وحده لا شريك له له الملك وله الحمد، وهو علي كل شئ قدير
// استغفر الله العظيم الذي لا الاه الا هو الحي القيوم واتوب اليه
// سبحان الله، الحمد لله، لا الاه الا الله، الله اكبر، لا حول ولا قوة الا بالله
// سبحان الله وبحمده، سبحان الله العظيم
// اللهم صلي وسلم وزد وبارك علي عبدك ونبيك محمد
// حسبي الله لا الاه الا هو عليه توكلت وهو رب العرش العظيم

using namespace std;

struct SegmentTree {
public:
    SegmentTree (int _n) : n (_n) {
        tree.resize(4 * n, 0);
    }

    int query (int x, int y) {
        return query(x, y, 0, n - 1, 0);
    }

    void update (int idx, int val) {
        update(idx, val, 0, n - 1, 0);
    }

private:
    vector<int> tree;
    int n;

    int query (int x, int y, int l, int r, int i) {
        if (r < x || y < l) return 0;
        if (l >= x && r <= y) return tree[i];

        int m = (l + r) >> 1;

        return (
            query(x, y, l, m, i*2+1) +
            query(x, y, m+1, r, i*2+2)
        );
    }

    void update (int idx, int val, int l, int r, int i) {
        if (l == r) {
            tree[i] += val;
            return;
        }

        int m = (l + r) >> 1;

        if (m >= idx) update(idx, val, l, m, i*2+1);
        else update(idx, val, m+1, r, i*2+2);

        tree[i] = tree[i * 2 + 1] + tree[i * 2 + 2];
    }
};


int main()
{
    ShwaTech

    int n; cin >> n;
    vector<int> a(n);
    vector<pair<int, int>> ele_and_idx;

    for (int j = 0; j < n; j++) {
        cin >> a[j];
        ele_and_idx.push_back({a[j], j});
    }

    sort(All(ele_and_idx));

    map<int, int> position;
    for (int j = 0; j < n; j++) {
        position[ele_and_idx[j].first] = j;
    }

    SegmentTree seg_tree(n);
    ll ans=0;

    for (int j = 0; j < n; j++) {
        int pos = position[a[j]];

        ll greater_in_left = seg_tree.query(pos+1, n-1);
        ll smaller_in_left = j - greater_in_left;

        ll smaller_in_right = pos - smaller_in_left;
        ll greater_in_right = (n - pos - 1) - greater_in_left;

        ans += greater_in_left * smaller_in_right;

        seg_tree.update(pos, 1);
    }

    cout << ans;

    return 0;
}
