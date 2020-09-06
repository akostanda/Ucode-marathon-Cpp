#include "walletManager.h"

Wallet* createWallet(int value) {
  Wallet* new_wallet = new Wallet;
  new_wallet->septims = value;
  return new_wallet;
}

void destroyWallet(Wallet* wallet) { delete wallet; }

Wallet* createWallets(int amount) {
  Wallet* new_wallet = new Wallet[amount];
  return new_wallet;
}

void destroyWallets(Wallet* wallet) { delete[] wallet; }
