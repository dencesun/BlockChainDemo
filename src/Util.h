//
// Created by Sun on 15/03/2018.
//

#ifndef BLOCKCHAIN_UTIL_H
#define BLOCKCHAIN_UTIL_H

#include <string>
#include <cstddef>
#include <iomanip>
#include <functional>
#include <unordered_set>
using namespace std;

struct S {
    string first_name;
    string last_name;
};

bool operator==(const S& lhs, const S& rhs) {
    return lhs.first_name == rhs.first_name && lhs.last_name == rhs.last_name;
}

template<> struct hash<S> {
    typedef S argument_type;
    typedef size_t result_type;
    result_type operator()(argument_type const& s) const noexcept {
        result_type const h1 (hash<string>{}(s.first_name) );
        result_type const h2 (hash<string>{}(s.last_name) );
        return h1 ^ (h2 << 1);
    }
};

template<> struct hash<vector<string>> {
    typedef vector<string> argument_type;
    typedef size_t result_type;
    result_type operator()(argument_type const& s) const noexcept {
        result_type  res = 0;
        for (int i = 0; i<s.size(); ++i) {
            result_type h = hash<string>{}(s[i]);
            res = res^h;
        }
        return res;
//        result_type const h1 (hash<string>{}(s.first_name) );
//        result_type const h2 (hash<string>{}(s.last_name) );
//        return h1 ^ (h2 << 1);
    }
};

#endif //BLOCKCHAIN_UTIL_H
