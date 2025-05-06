#include <bits/stdc++.h>
using namespace std;
 
void solve() {
	string s;
	cin >> s;

	int partes = 1;//por lo menos debe existir una parte
	bool patronAscendente = false;//si no existe patrón ascendente no habrá nada que eliminar
	for (int i = 0; i + 1 < (int)(s.size()); i++) {
		partes += (s[i] != s[i + 1]);//Añadir 1 cada que exista diferencia de parecido (nuevo corte)
		patronAscendente |= (s[i] == '0' && s[i + 1] == '1'); // solo basta con ver un patrón ascendente para eliminar un corte innecesario
	}
	cout << partes - patronAscendente << '\n';
}
 
int main() {
	int t; cin >> t; for (int i = 0; i < t; i++) {solve();}
}