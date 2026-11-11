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
#define ld long double
#define All(v) v.begin(),v.end()
#define RAll(v) v.rbegin(),v.rend()
#define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;



int main()
{
    ShwaTech

    int n, k; string s;
    cin >> n >> k >> s;

    int L=0, R=0, a=0, b=0, ans=0;
    while (L < n) {
        while ( (R < n) && ( a + (s[R] == 'a' ? 1 : 0) <= k || b + (s[R] == 'b' ? 1 : 0) <= k ) ) {
            if (s[R] == 'a') a++;
            else b++;

            ans = max(ans, R - L + 1);
            R++;
        }

        if (s[L] == 'a') a--;
        else b--;
        L++;
    }

    cout << ans << nl;

    return 0;
}


// ------------------------------------------------------------------------------------------------------------------------------------
// --------------------------------------------------------- OR -----------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------------------------------


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
#define ld long double
#define All(v) v.begin(),v.end()
#define RAll(v) v.rbegin(),v.rend()
#define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;


int TheBest (string &s, int k, char target) {
    int L=0, cnt=0, ans=0;

    for (int R = 0; R < s.size(); R++) {
        // Count characters that must be changed.
        if (s[R] != target) cnt++;

        // Shrink the window if we exceed k changes.
        while (cnt > k) {
            if (s[L] != target) cnt--;
            L++;
        }

        // Update the maximum valid window.
        ans = max(ans, R - L + 1);
    }

    return ans;
}


int main()
{
    ShwaTech

    int n, k; string s;
    cin >> n >> k >> s;

    int best_a = TheBest(s, k, 'a');
    int best_b = TheBest(s, k, 'b');

    cout << max(best_a, best_b);

    return 0;
}



