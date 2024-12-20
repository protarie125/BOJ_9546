#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll T, k;

ll Pow2(ll b) {
  ll ret = 1;
  while (b > 0) {
    ret *= 2;
    --b;
  }

  return ret;
}

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> T;
  while (0 < (T--)) {
    cin >> k;
    cout << Pow2(k) - 1 << '\n';
  }

  return 0;
}