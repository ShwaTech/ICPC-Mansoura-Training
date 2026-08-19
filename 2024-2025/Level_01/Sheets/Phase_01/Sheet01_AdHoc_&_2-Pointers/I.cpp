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

     int n, t; cin >> n >> t;

     vector<int> a(n);
     for (int &ai: a) cin >> ai;

     int L=0, curr=0, c=0, ans=0;

     for (int R = 0; R < n; R++) {
         curr += a[R];
         c++;

         while (curr > t && L < n) {
             curr -= a[L++];
             c--;
         }

         ans = max(ans, c);
     }

     cout << ans;

     return 0;
 }

// // ---------------------------------
// // -------------- OR ---------------
// // ---------------------------------

 #include <bits/stdc++.h>
 #define nl "\n"
 #define ll long long
 #define All(v) v.begin(),v.end()
 #define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);

 using namespace std;


 int main()
 {
     ShwaTech

     int n; ll t; cin >> n >> t;

     vector<int> a(n);
     for (auto &ai: a) cin >> ai;

     ll L=0, sum=0, ans=0;

     for (int R = 0; R < n; R++) {
         sum += a[R];

         while (sum > t) {
             sum -= a[L++];
         }

         ans = max(ans, R-L+1);
     }

     cout << ans;

     return 0;
 }
