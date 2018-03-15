#include <iostream>
#include "Block.h"

int main() {
    vector<string> genesisTrans = {"Sun Sent Zhang 10 BITCOINS","Zhang sent 20 BITCOINS to Sun"};;
    Block *genesisBlock = new Block(0, genesisTrans);

    vector<string> block2Trans = {"Sun Sent Zhang 20 BITCOINS","Zhang sent 50 BITCOINS to Sun"};
    Block *block2 = new Block(genesisBlock->getBlockHash(), block2Trans);

    vector<string> block3Trans = {"Sun sent 50 BITCOINS to Liu"};
    Block *block3 = new Block(block2->getBlockHash(), block3Trans);

    cout << "Hash of genesis block"<<endl;
    cout << genesisBlock->getBlockHash() << endl;

    cout << "Hash of block 2" << endl;
    cout<< block2->getBlockHash() << endl;

    cout << "Hash of block 3" << endl;
    cout << block3->getBlockHash() << endl;

    return 0;
}