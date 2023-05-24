/**
 * Author: GNU
 * Description: order\_of\_key, find\_by\_order (order = num less)
 * Time: O(\log N)
 */
#include <bits/extc++.h> /** keep-include */
using namespace __gnu_pbds;

template<class T>
using Tree = tree<T, null_type, less<T>, rb_tree_tag,
    tree_order_statistics_node_update>;
