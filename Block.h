//
// Created by Sun on 15/03/2018.
//

#ifndef BLOCKCHAIN_BLOCK_H
#define BLOCKCHAIN_BLOCK_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Block {
private:
    int preHash_;
    vector<string> transactions_;
    int blockHash_;

public:
    Block(int preHash, vector<string> transactons);
    int getPreHash();
    vector<string> getTransaction();
    int getBlockHash();


};
#endif //BLOCKCHAIN_BLOCK_H
