/*Vocabulary
 gathered->reunida
 to hold-> sostener
 próxima-> upcoming
*/
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
using ii=pair<int, int>;
#define vi vector<int>
#define pb push_back
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define f first
#define s second
const int mod=1e9+7,MOD=998244353;
const int inf=1e9;
const int N=2e5+10;
int a[N];
/*Ideas que solucionan el Problema
Sea p la permutacion de 1 a n el orden en que ellos deciden 
decir la tarea 
*/
int main(){
    fast
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;//nice- llena el vector a
        int mx = *max_element(a.begin(), a.end());//máximo del vector a
        int cmx = count(a.begin(), a.end(), mx);//cantidad de personas
        // que tienen la maxima cantidad de tareas por decir
        int k = count(a.begin(), a.end(), mx - 1);//cantidad de personas
        //que tienen la cantidad mx-1 (maximo -1) por decir
        int ans = 1, sub = 1;
       
        for (long long i = 1; i <= n; ++i) {
            ans = ans * i % MOD;//factorial de n
            if (i != k + 1) sub = sub * i % MOD;//es lo mismo
            //que lo anterior(factorial de n), solo que omite el número k+1
        }
        //CALCULO DE PERMUTACIONES BAD
        //si hay solo 1 máximo, consideramos al seguiente elemento máximo mx-1 
       //suponiendo que tiene k veces que se repite, entonces n-k-1 no nos importa
       //donde estén, n*n-1*n-2 ... *k+2 donde  n-(k+2)=n-k-1-1.(la diferencia de 
       //los extremos es la cantidad de elementos -1)
       // Ahora el problema se reduce a permutar k+1 elementos, donde el elemento
       //final debe ser el máximo, por lo tanto su posición es fija, pero los demás
       //elementos k pueden variar sus posiciones en cualquier orden
       //, entonces se le multiplica 
       // por k! 
        if (cmx == 1) ans = (ans - sub + MOD) % MOD;//
        //en caso de haber más de un máximo, todas las permutaciones son good
        cout << ans << '\n';        
    }
}