/*
لا الاه الا الله وحده لا شريك له له الملك وله الحمد، وهو علي كل شئ قدير
استغفر الله العظيم الذي لا إلاه إلا هو الحي القيوم وأتوب اليه
سبحان الله، الحمد لله، لا الاه الا الله، الله اكبر، لا حول ولا قوة الا بالله
سبحان الله وبحمده، سبحان الله العظيم
اللهم صلي وسلم وزد وبارك علي عبدك ونبيك محمد
لا إلاه إلا الله وحده هو يتولي الصالحين
لا إلاه إلا الله وحده هو يهدي السبيل
ربي إني ظلمت نفسي، فاغفر لي
ربي إني لما أنزلت اليّ من خيرٍ فقير
حسبي الله لا إلاه إلا هو عليه توكلت وهو رب العرش العظيم
بسم الله نبدأ وعليه نتوكل
*/

#include <bits/stdc++.h>
#define nl "\n"
#define ll long long
#define All(v) v.begin(),v.end()
#define RAll(v) v.rbegin(),v.rend()
#define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;


int main()
{
    ShwaTech

    int n; cin >> n;

    if (n == 1) {
        cout << -1 << nl;
        return 0;
    }

    vector<int> a(n);
    for (int &ai: a) cin >> ai;
    sort(All(a));

    set<int> diffs, ans;
    map<int, int> freq;

    for (int i = 1; i < n; ++i) {
        int each_diff = a[i] - a[i - 1];
        diffs.insert(each_diff);
        freq[each_diff]++;
    }

    // The Arithmetic Progression is Correct, and there is only 1 diff
    // Insert 1 element at The Start and 1 element at The End
    if (diffs.size() == 1) {
        int my_diff = *diffs.begin();

        ans.insert(a[0] - my_diff);          // At The Start
        ans.insert(a.back() + my_diff);      // At The End
    }
    // The Arithmetic Progression is Correct, but Missing 1 element at anywhere
    // But you ensure first that the max diff appears only once
    // Loop and Catch the Position with the different diff and insert new_num at that pos
    else if (diffs.size() == 2 && freq[*diffs.rbegin()] == 1) {
        int my_diff = *diffs.begin();
        for (int i = 1; i < n; ++i) {
            if (a[i] - a[i - 1] == my_diff) continue;

            int new_num = a[i-1] + my_diff;
            if (new_num + my_diff == a[i]) {
                ans.insert(new_num);
                break;
            }
        }
    }

    // If We only have 2 numbers, i need to add the middle element between to the ans
    // so check that the summation of a[0] + a[1] is even so i can find an int number between them
    if (n == 2 && (a[0] + a[1] & 1) == 0) {
        ans.insert((a[0] + a[1]) / 2);
    }

    cout << ans.size() << nl;
    for (int sol: ans) cout << sol << " ";

    return 0;
}

