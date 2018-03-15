//
// Created by Sun on 15/03/2018.
//
#include "Block.h"
#include "Util.h"

Block::Block(int preHash, vector<string> transactons) {
    preHash_ = preHash;
    transactions_ = transactons;

    long long h1= static_cast<long long>(hash<vector<string>>{}(transactions_));
    long long h2 = static_cast<long long>(hash<string>{}(to_string(preHash_)));

    S obj = {to_string(h1), to_string(h2)};
    blockHash_ = hash<S>{}(obj);
}

int Block::getPreHash() {
    return preHash_;
}

vector<string> Block::getTransaction() {
    return transactions_;
}

int Block::getBlockHash() {
    return blockHash_;
}
