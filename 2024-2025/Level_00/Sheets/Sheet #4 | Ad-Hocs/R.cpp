// لا الاه الا الله وحده لا شريك له له الملك وله الحمد، وهو علي كل شئ قدير
// استغفر الله العظيم الذي لا الاه الا هو الحي القيوم واتوب اليه
// سبحان الله، الحمد لله، لا الاه الا الله، الله اكبر، لا حول ولا قوة الا بالله
// سبحان الله وبحمده، سبحان الله العظيم
// اللهم صلي وسلم وزد وبارك علي عبدك ونبيك محمد
// حسبي الله لا الاه الا هو عليه توكلت وهو رب العرش العظيم

#include <bits/stdc++.h>
#define ll long long
#define All(v) v.begin(),v.end()
#define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;


int main()
{
    ShwaTech

    int n; cin >> n;
    vector<int> b(n);
    for (auto &bi: b) cin >> bi;

    //// To get the maximum sum of a subarray using a variable sliding window approach, we implement:
    // Kadane's Algorithm

    ll curr_sum=0, max_sum=LLONG_MIN;

    for (int R = 0; R < n; ++R) {
        curr_sum += b[R];

        max_sum = max(max_sum, curr_sum);

        if (curr_sum < 0) curr_sum = 0;
    }

    cout << max_sum << endl;

    return 0;
}
