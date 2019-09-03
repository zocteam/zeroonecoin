// Copyright (c) 2010 Satoshi Nakamoto
// Copyright (c) 2009-2019 The Bitcoin Core developers
// Copyright (c) 2014-2019 The Dash Core developers
// Copyright (c) 2018-2019 The ZeroOne Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "chainparams.h"
#include "consensus/merkle.h"

#include "tinyformat.h"
#include "util.h"
#include "utilstrencodings.h"

#include "arith_uint256.h"

#include <assert.h>

#include <boost/assign/list_of.hpp>

#include "chainparamsseeds.h"
#include <stdio.h>


static CBlock CreateGenesisBlock(const char* pszTimestamp, const CScript& genesisOutputScript, uint32_t nTime, uint32_t nNonce, uint32_t nBits, int32_t nVersion, const CAmount& genesisReward)
{
    CMutableTransaction txNew;
    txNew.nVersion = 1;
    txNew.vin.resize(1);
    txNew.vout.resize(1);
    txNew.vin[0].scriptSig = CScript() << 486604799 << CScriptNum(4) << std::vector<unsigned char>((const unsigned char*)pszTimestamp, (const unsigned char*)pszTimestamp + strlen(pszTimestamp));
    txNew.vout[0].nValue = genesisReward;
    txNew.vout[0].scriptPubKey = genesisOutputScript;

    CBlock genesis;
    genesis.nTime    = nTime;
    genesis.nBits    = nBits;
    genesis.nNonce   = nNonce;
    genesis.nVersion = nVersion;
    genesis.vtx.push_back(MakeTransactionRef(std::move(txNew)));
    genesis.hashPrevBlock.SetNull();
    genesis.hashMerkleRoot = BlockMerkleRoot(genesis);
    return genesis;
}


static CBlock CreateGenesisBlock(uint32_t nTime, uint32_t nNonce, uint32_t nBits, int32_t nVersion, const CAmount& genesisReward)
{
    const char* pszTimestamp = "This is the new era of ZeroOne coin starting this moment 2018.01.31 13:30";
    const CScript genesisOutputScript = CScript() << ParseHex("04ac504344f1658fcc0947a10fcbe08baa1ece29f4d46bc5cad704221d7d85bbdd940f1c28a006f36f2453e2b12facf3dd6eb8a788739e7b7a594468e63af33515") << OP_CHECKSIG;
    return CreateGenesisBlock(pszTimestamp, genesisOutputScript, nTime, nNonce, nBits, nVersion, genesisReward);
}

/**
 * Main network
 */
/**
 * What makes a good checkpoint block?
 * + Is surrounded by blocks with reasonable timestamps
 *   (no blocks before with a timestamp after, none after with
 *    timestamp before)
 * + Contains no strange transactions
 */


class CMainParams : public CChainParams {
public:
    CMainParams() {
        strNetworkID = "main";
        consensus.nSubsidyHalvingInterval = 210384; // one year
        consensus.nMasternodePaymentsStartBlock = 1152; // not true, but it's ok as long as it's less then nMasternodePaymentsIncreaseBlock
        consensus.nMasternodePaymentsIncreaseBlock = 158000; // not used
        consensus.nMasternodePaymentsIncreasePeriod = 576*30; // not used
        consensus.nInstantSendConfirmationsRequired = 6;
        consensus.nInstantSendKeepLock = 24;
        consensus.nBudgetPaymentsStartBlock = 159550; // 2x/11/2018
        consensus.nBudgetPaymentsCycleBlocks = 17532; // 1month blocks (365.25d*24h*60m*60s/12m/150s)
        consensus.nBudgetPaymentsWindowBlocks = 100;
        consensus.nBudgetProposalEstablishingTime = 60*60*24;
        consensus.nSuperblockStartBlock = 159551; // 2x/11/2018
        consensus.nSuperblockStartHash = uint256();
        consensus.nSuperblockCycle = 17532; // 1month number blocks (365.25d*24h*60m*60s/12m/150s)
        consensus.nGovernanceMinQuorum = 10;
        consensus.nGovernanceFilterElements = 20000;
        consensus.nMasternodeMinimumConfirmations = 15;
        consensus.BIP34Height = 120000;
        consensus.BIP34Hash = uint256S("0x0");
        consensus.BIP65Height = 120000;
        consensus.BIP66Height = 120000;
        consensus.DIP0001Height = 9999999;
        consensus.powLimit = uint256S("00000fffff000000000000000000000000000000000000000000000000000000");
        consensus.nPowTargetTimespan = 60 * 60; // ZeroOne: 1 hour, 24 blocks
        consensus.nPowTargetSpacing = 2.5 * 60; // ZeroOne: 150 seconds
        consensus.fPowAllowMinDifficultyBlocks = false;
        consensus.fPowNoRetargeting = false;
        consensus.nRuleChangeActivationThreshold = 1916; // 95% of 2016
        consensus.nMinerConfirmationWindow = 2016; // nPowTargetTimespan / nPowTargetSpacing
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].bit = 28;
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].nStartTime = 1199145601; // January 1, 2008
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].nTimeout = 1230767999; // December 31, 2008
        consensus.nPowDGWHeight = 300;
        consensus.nPowKGWHeight = 300;

        // Deployment of BIP68, BIP112, and BIP113.
        consensus.vDeployments[Consensus::DEPLOYMENT_CSV].bit = 0;
        consensus.vDeployments[Consensus::DEPLOYMENT_CSV].nStartTime = 1502280000; // Aug 9th, 2017
        consensus.vDeployments[Consensus::DEPLOYMENT_CSV].nTimeout = 1533816000; // Aug 9th, 2018

        // Deployment of DIP0001
        consensus.vDeployments[Consensus::DEPLOYMENT_DIP0001].bit = 1;
        consensus.vDeployments[Consensus::DEPLOYMENT_DIP0001].nStartTime = 1508025600; // Oct 15th, 2017
        consensus.vDeployments[Consensus::DEPLOYMENT_DIP0001].nTimeout = 1539561600; // Oct 15th, 2018
        consensus.vDeployments[Consensus::DEPLOYMENT_DIP0001].nWindowSize = 4032;
        consensus.vDeployments[Consensus::DEPLOYMENT_DIP0001].nThreshold = 3226; // 80% of 4032

        // Deployment of BIP147
        consensus.vDeployments[Consensus::DEPLOYMENT_BIP147].bit = 2;
        consensus.vDeployments[Consensus::DEPLOYMENT_BIP147].nStartTime = 1524477600; // Apr 23th, 2018
        consensus.vDeployments[Consensus::DEPLOYMENT_BIP147].nTimeout = 1556013600; // Apr 23th, 2019
        consensus.vDeployments[Consensus::DEPLOYMENT_BIP147].nWindowSize = 4032;
        consensus.vDeployments[Consensus::DEPLOYMENT_BIP147].nThreshold = 3226; // 80% of 4032

        // The best chain should have at least this much work.
        consensus.nMinimumChainWork = uint256S("0x0000000000000000000000000000000000000000000000000026d386e4a143b1"); // 303181

        // By default assume that the signatures in ancestors of this block are valid.
        consensus.defaultAssumeValid = uint256S("0x00000000270c57081c1a6c1c0e1c08eaf892577325e73a6921e6ef96fe027897"); // 303181


        /**
         * The message start string is designed to be unlikely to occur in normal data.
         * The characters are rarely used upper ASCII, not valid as UTF-8, and produce
         * a large 32-bit integer with any alignment.
         */
        pchMessageStart[0] = 0x1a;
        pchMessageStart[1] = 0xb2;
        pchMessageStart[2] = 0xc3;
        pchMessageStart[3] = 0xd4;

        nDefaultPort = 10000;
        nPruneAfterHeight = 100000;

        genesis = CreateGenesisBlock(1517407200, 324878, 0x1e0ffff0, 1, 50 * COIN);
        consensus.hashGenesisBlock = genesis.GetHash();

        assert(consensus.hashGenesisBlock == uint256S("0x00000c8e2be06ce7e6ea78cd9f6ea60e22821d70f8c8fbb714b6baa7b4f2150c"));
        assert(genesis.hashMerkleRoot == uint256S("0xac77519bea8d4afceb11cfafd74d19643f660d5f94fd89c84ca84f884fa20648"));

        vSeeds.push_back(CDNSSeedData("01coin.io", "seed1.01coin.io"));
        vSeeds.push_back(CDNSSeedData("01coin.io", "seed2.01coin.io"));
        vSeeds.push_back(CDNSSeedData("01coin.io", "seed3.01coin.io"));
        vSeeds.push_back(CDNSSeedData("01coin.io", "seed4.01coin.io"));
        vSeeds.push_back(CDNSSeedData("01coin.io", "seed5.01coin.io"));
        vSeeds.push_back(CDNSSeedData("01coin.io", "seed6.01coin.io"));
        vSeeds.push_back(CDNSSeedData("01coin.io", "seed7.01coin.io"));
        vSeeds.push_back(CDNSSeedData("01coin.io", "seed8.01coin.io"));
        vSeeds.push_back(CDNSSeedData("01coin.io", "seed9.01coin.io"));
        vSeeds.push_back(CDNSSeedData("01coin.io", "seed10.01coin.io"));

        // ZeroOne addresses start with 'Z'
        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1,80);
        // ZeroOne script addresses start with '5'
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1,10);
        // ZeroOne private keys start with '5' or 'G' (?)
        base58Prefixes[SECRET_KEY] =     std::vector<unsigned char>(1,198);
        // ZeroOne BIP32 pubkeys start with 'xpub' (Bitcoin defaults)
        base58Prefixes[EXT_PUBLIC_KEY] = boost::assign::list_of(0x04)(0x88)(0xB2)(0x1E).convert_to_container<std::vector<unsigned char> >();
        // ZeroOne BIP32 prvkeys start with 'xprv' (Bitcoin defaults)
        base58Prefixes[EXT_SECRET_KEY] = boost::assign::list_of(0x04)(0x88)(0xAD)(0xE4).convert_to_container<std::vector<unsigned char> >();

        // ZeroOne BIP44 coin type was '5'
        nExtCoinType = 5;

        vFixedSeeds = std::vector<SeedSpec6>(pnSeed6_main, pnSeed6_main + ARRAYLEN(pnSeed6_main));

        fMiningRequiresPeers = true;
        fDefaultConsistencyChecks = false;
        fRequireStandard = true;
        fMineBlocksOnDemand = false;
        fAllowMultipleAddressesFromGroup = false;
        fAllowMultiplePorts = false;

        nPoolMaxTransactions = 3;
        nFulfilledRequestExpireTime = 60*60; // fulfilled requests expire in 1 hour

        strSporkAddress = "ZKMVhZfkKCMoGKRKa3yPTZKBugsd2hpn6U";

        checkpointData = (CCheckpointData) {
            boost::assign::map_list_of
            ( 101101, uint256S("0x000000001136784bed466075637c1885dc415c3bd65d7989bd159e7d851bc9f2"))
            ( 202202, uint256S("0x000000002ab69b401bac78c200a92bb1c8c2273ba2217f07cf8f8d935f252e9f"))
            ( 303202, uint256S("0x0000000095e87ff2246bc208bab6beaf4884dc18ef02bce5d672fd5cc91898fc"))
        };

        chainTxData = ChainTxData{
            1567534245,// * UNIX timestamp of last known number of transactions
            109482,    // * total number of transactions between genesis and that timestamp  (transactions from gettxoutsetinfo)
                       //   (the tx=... number in the SetBestChain debug.log lines)
            0.002      // * estimated number of transactions per second after that timestamp (109482/(1567534245-1517407200)=0.002)
        };
    }
};
static CMainParams mainParams;

/**
 * Testnet (v3)
 */
class CTestNetParams : public CChainParams {
public:
    CTestNetParams() {
        strNetworkID = "test";
        consensus.nSubsidyHalvingInterval = 210384;
        consensus.nMasternodePaymentsStartBlock = 300; // not true, but it's ok as long as it's less then nMasternodePaymentsIncreaseBlock
        consensus.nMasternodePaymentsIncreaseBlock = 158000;
        consensus.nMasternodePaymentsIncreasePeriod = 576*30;
        consensus.nInstantSendConfirmationsRequired = 2;
        consensus.nInstantSendKeepLock = 6;
        consensus.nBudgetPaymentsStartBlock = 48120; // 1x/11/2018
        consensus.nBudgetPaymentsCycleBlocks = 50;
        consensus.nBudgetPaymentsWindowBlocks = 10;
        consensus.nBudgetProposalEstablishingTime = 60*20;
        consensus.nSuperblockStartBlock = 48121; // NOTE: Should satisfy nSuperblockStartBlock > nBudgetPaymentsStartBlock
        consensus.nSuperblockStartHash = uint256S("0");
        consensus.nSuperblockCycle = 24; // Superblocks can be issued hourly on testnet
        consensus.nGovernanceMinQuorum = 1;
        consensus.nGovernanceFilterElements = 500;
        consensus.nMasternodeMinimumConfirmations = 1;
        consensus.BIP34Height = 32553; // FIX
        consensus.BIP34Hash = uint256S("0x0"); // FIX
        consensus.BIP65Height = 32553; // 0000039cf01242c7f921dcb4806a5994bc003b48c1973ae0c89b67809c2bb2ab
        consensus.BIP66Height = 32553; // 0000002acdd29a14583540cb72e1c5cc83783560e38fa7081495d474fe1671f7
        consensus.DIP0001Height = 9999999;
        consensus.powLimit = uint256S("00000fffff000000000000000000000000000000000000000000000000000000");
        consensus.nPowTargetTimespan = 60 * 60; // ZeroOne: 1 hour, 24 blocks
        consensus.nPowTargetSpacing = 2.5 * 60; // ZeroOne: 150 seconds
        consensus.fPowAllowMinDifficultyBlocks = true;
        consensus.fPowNoRetargeting = false;
        consensus.nRuleChangeActivationThreshold = 1512; // 75% for testchains
        consensus.nMinerConfirmationWindow = 2016; // nPowTargetTimespan / nPowTargetSpacing
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].bit = 28;
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].nStartTime = 1199145601; // January 1, 2008
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].nTimeout = 1230767999; // December 31, 2008
        consensus.nPowDGWHeight = 350;
        consensus.nPowKGWHeight = 350;

        // Deployment of BIP68, BIP112, and BIP113.
        consensus.vDeployments[Consensus::DEPLOYMENT_CSV].bit = 0;
        consensus.vDeployments[Consensus::DEPLOYMENT_CSV].nStartTime = 1502280000; // Aug 9th, 2017
        consensus.vDeployments[Consensus::DEPLOYMENT_CSV].nTimeout = 1533816000; // Aug 9th, 2018

        // Deployment of DIP0001
        consensus.vDeployments[Consensus::DEPLOYMENT_DIP0001].bit = 1;
        consensus.vDeployments[Consensus::DEPLOYMENT_DIP0001].nStartTime = 1505692800; // Sep 18th, 2017
        consensus.vDeployments[Consensus::DEPLOYMENT_DIP0001].nTimeout = 1537228800; // Sep 18th, 2018
        consensus.vDeployments[Consensus::DEPLOYMENT_DIP0001].nWindowSize = 100;
        consensus.vDeployments[Consensus::DEPLOYMENT_DIP0001].nThreshold = 50; // 50% of 100

        // Deployment of BIP147
        consensus.vDeployments[Consensus::DEPLOYMENT_BIP147].bit = 2;
        consensus.vDeployments[Consensus::DEPLOYMENT_BIP147].nStartTime = 1517792400; // Feb 5th, 2018
        consensus.vDeployments[Consensus::DEPLOYMENT_BIP147].nTimeout = 1549328400; // Feb 5th, 2019
        consensus.vDeployments[Consensus::DEPLOYMENT_BIP147].nWindowSize = 100;
        consensus.vDeployments[Consensus::DEPLOYMENT_BIP147].nThreshold = 50; // 50% of 100

        // The best chain should have at least this much work.
        consensus.nMinimumChainWork = uint256S("0x0000000000000000000000000000000000000000000000000000005328bc5753"); // 58802

        // By default assume that the signatures in ancestors of this block are valid.
        consensus.defaultAssumeValid = uint256S("0x000000730644fcea8b9943c2b28e741da29fddb09886969f3a93b60ac4529359"); // 58802

        pchMessageStart[0] = 0xd1;
        pchMessageStart[1] = 0x2b;
        pchMessageStart[2] = 0xb3;
        pchMessageStart[3] = 0x7a;
        nDefaultPort = 10002;
        nPruneAfterHeight = 1000;

        genesis = CreateGenesisBlock(1522852335, 1869206, 0x1e0ffff0, 1, 50 * COIN);
        consensus.hashGenesisBlock = genesis.GetHash();
        assert(consensus.hashGenesisBlock == uint256S("0x00000ebe61e5bc70bc968b9cf4e5ed85ec996a85a68853361557876ae37a1648"));
        assert(genesis.hashMerkleRoot == uint256S("0xac77519bea8d4afceb11cfafd74d19643f660d5f94fd89c84ca84f884fa20648"));

        vFixedSeeds.clear();
        vFixedSeeds = std::vector<SeedSpec6>(pnSeed6_test, pnSeed6_test + ARRAYLEN(pnSeed6_test));
        vSeeds.clear();
        vSeeds.push_back(CDNSSeedData("01coin.io", "testseed1.01coin.io"));
        vSeeds.push_back(CDNSSeedData("01coin.io", "testseed2.01coin.io"));
        vSeeds.push_back(CDNSSeedData("01coin.io", "testseed3.01coin.io"));
        vSeeds.push_back(CDNSSeedData("01coin.io", "testseed4.01coin.io"));
        vSeeds.push_back(CDNSSeedData("01coin.io", "testseed5.01coin.io"));

        // Testnet ZeroOne addresses start with 'n'
        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1,112);
        // Testnet ZeroOne script addresses start with '9'
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1,20);
        // Testnet private keys start with '9' or 'c' (Bitcoin defaults) (?)
        base58Prefixes[SECRET_KEY] =     std::vector<unsigned char>(1,240);
        // Testnet ZeroOne BIP32 pubkeys start with 'tpub' (Bitcoin defaults)
        base58Prefixes[EXT_PUBLIC_KEY] = boost::assign::list_of(0x04)(0x35)(0x87)(0xCF).convert_to_container<std::vector<unsigned char> >();
        // Testnet ZeroOne BIP32 prvkeys start with 'tprv' (Bitcoin defaults)
        base58Prefixes[EXT_SECRET_KEY] = boost::assign::list_of(0x04)(0x35)(0x83)(0x94).convert_to_container<std::vector<unsigned char> >();

        // ZeroOne BIP44 coin type is '1'
        nExtCoinType = 1;

        fMiningRequiresPeers = true;
        fDefaultConsistencyChecks = false;
        fRequireStandard = false;
        fMineBlocksOnDemand = false;
        fAllowMultipleAddressesFromGroup = false;
        fAllowMultiplePorts = false;

        nPoolMaxTransactions = 3;
        nFulfilledRequestExpireTime = 5*60; // fulfilled requests expire in 5 minutes

        strSporkAddress = "nJqRtXk5iKZTv7R5Xs8jUEX5E7LBZFTmMu";

        checkpointData = (CCheckpointData) {
            boost::assign::map_list_of
            ( 10101, uint256S("0x000001e73cada5795a61a93a3ecb8670bb472ef2436bb9af4742f2afde7539af"))
            ( 20202, uint256S("0x00000b2ec737f6bdca4b61b2d7eca2258cf492dbd57d9efc96ab487542283ff2"))
            ( 30303, uint256S("0x00000c7c0529792aed25d679445000231c32c1440c2f5d135573790f30e93ee8"))
            ( 40404, uint256S("0x00000c8afa54dd0191f1622b6c0cf09bc7dcfe59d06ad1f14970038eb94a18bc"))
            ( 50505, uint256S("0x000002b5145f677980f59dd2ea2ab18e3d9470a72c20c058b3e7b5a96e717407"))
        };

        chainTxData = ChainTxData{
            1567534245,// * UNIX timestamp of last known number of transactions
            49418,     // * total number of transactions between genesis and that timestamp (transactions from gettxoutsetinfo)
                       //   (the tx=... number in the SetBestChain debug.log lines)
            0.001      // * estimated number of transactions per second after that timestamp (49418/(1567534245-1517407200)=0.001)
        };

    }
};
static CTestNetParams testNetParams;


/**
 * Regression test
 */
class CRegTestParams : public CChainParams {
public:
    CRegTestParams() {
        strNetworkID = "regtest";
        consensus.nSubsidyHalvingInterval = 150;
        consensus.nMasternodePaymentsStartBlock = 240;
        consensus.nMasternodePaymentsIncreaseBlock = 350;
        consensus.nMasternodePaymentsIncreasePeriod = 10;
        consensus.nInstantSendConfirmationsRequired = 2;
        consensus.nInstantSendKeepLock = 6;
        consensus.nBudgetPaymentsStartBlock = 1000;
        consensus.nBudgetPaymentsCycleBlocks = 50;
        consensus.nBudgetPaymentsWindowBlocks = 10;
        consensus.nSuperblockStartBlock = 1500;
        consensus.nSuperblockStartHash = uint256(); // do not check this on regtest
        consensus.nSuperblockCycle = 10;
        consensus.nGovernanceMinQuorum = 1;
        consensus.nGovernanceFilterElements = 100;
        consensus.nMasternodeMinimumConfirmations = 1;
        consensus.BIP34Height = 100000000; // BIP34 has not activated on regtest (far in the future so block v1 are not rejected in tests)
        consensus.BIP34Hash = uint256();
        consensus.BIP65Height = 1351; // BIP65 activated on regtest (Used in rpc activation tests)
        consensus.BIP66Height = 1251; // BIP66 activated on regtest (Used in rpc activation tests)
        consensus.DIP0001Height = 2000;
        consensus.powLimit = uint256S("7fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff");
        consensus.nPowTargetTimespan = 60 * 60; // ZeroOne: 1 hour, 24 blocks
        consensus.nPowTargetSpacing = 2.5 * 60; // ZeroOne: 150 seconds
        consensus.fPowAllowMinDifficultyBlocks = true;
        consensus.fPowNoRetargeting = true;
        consensus.nRuleChangeActivationThreshold = 108; // 75% for testchains
        consensus.nMinerConfirmationWindow = 144; // Faster than normal for regtest (144 instead of 2016)
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].bit = 28;
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].nStartTime = 0;
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].nTimeout = 999999999999ULL;
        consensus.vDeployments[Consensus::DEPLOYMENT_CSV].bit = 0;
        consensus.vDeployments[Consensus::DEPLOYMENT_CSV].nStartTime = 0;
        consensus.vDeployments[Consensus::DEPLOYMENT_CSV].nTimeout = 999999999999ULL;
        consensus.nPowDGWHeight = 300;
        consensus.nPowKGWHeight = 300;

        // The best chain should have at least this much work.
        consensus.nMinimumChainWork = uint256S("0x00");

        // By default assume that the signatures in ancestors of this block are valid.
        consensus.defaultAssumeValid = uint256S("0x00");

        pchMessageStart[0] = 0xa1;
        pchMessageStart[1] = 0xb3;
        pchMessageStart[2] = 0xd5;
        pchMessageStart[3] = 0x7b;
        nDefaultPort = 10010;
        nPruneAfterHeight = 1000;

        genesis = CreateGenesisBlock(1517407200, 2, 0x207fffff, 1, 50 * COIN);
        consensus.hashGenesisBlock = genesis.GetHash();
        assert(consensus.hashGenesisBlock == uint256S("0x1914dc2be327e62ffa37b9fb4b8fd9507fec61448bae9a82ea5e33b3e7cba128"));
        assert(genesis.hashMerkleRoot == uint256S("0xac77519bea8d4afceb11cfafd74d19643f660d5f94fd89c84ca84f884fa20648"));

        vFixedSeeds.clear(); //!< Regtest mode doesn't have any fixed seeds.
        vSeeds.clear();      //!< Regtest mode doesn't have any DNS seeds.

        fMiningRequiresPeers = false;
        fDefaultConsistencyChecks = true;
        fRequireStandard = false;
        fMineBlocksOnDemand = true;
        fAllowMultipleAddressesFromGroup = true;
        fAllowMultiplePorts = true;

        nFulfilledRequestExpireTime = 5*60*100; // fulfilled requests expire in 5 minutes

        // privKey: cP4EKFyJsHT39LDqgdcB43Y3YXjNyjb5Fuas1GQSeAtjnZWmZEQK
        strSporkAddress = "yj949n1UH6fDhw6HtVE5VMj2iSTaSWBMcW";

        // Regtest ZeroOne addresses start with 'n'
        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1,112);
        // Regtest ZeroOne script addresses start with '9'
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1,20);
        // Regtest private keys start with '9' or 'c' (Bitcoin defaults) (?)
        base58Prefixes[SECRET_KEY] =     std::vector<unsigned char>(1,240);
        // Regtest ZeroOne BIP32 pubkeys start with 'tpub' (Bitcoin defaults)
        base58Prefixes[EXT_PUBLIC_KEY] = boost::assign::list_of(0x04)(0x35)(0x87)(0xCF).convert_to_container<std::vector<unsigned char> >();
        // Regtest ZeroOne BIP32 prvkeys start with 'tprv' (Bitcoin defaults)
        base58Prefixes[EXT_SECRET_KEY] = boost::assign::list_of(0x04)(0x35)(0x83)(0x94).convert_to_container<std::vector<unsigned char> >();

        // ZeroOne BIP44 coin type is '1'
        nExtCoinType = 1;
   }

    void UpdateBIP9Parameters(Consensus::DeploymentPos d, int64_t nStartTime, int64_t nTimeout)
    {
        consensus.vDeployments[d].nStartTime = nStartTime;
        consensus.vDeployments[d].nTimeout = nTimeout;
    }
};
static CRegTestParams regTestParams;

static CChainParams *pCurrentParams = 0;

const CChainParams &Params() {
    assert(pCurrentParams);
    return *pCurrentParams;
}

CChainParams& Params(const std::string& chain)
{
    if (chain == CBaseChainParams::MAIN)
        return mainParams;
    else if (chain == CBaseChainParams::TESTNET)
            return testNetParams;
    else if (chain == CBaseChainParams::REGTEST)
            return regTestParams;
    else
        throw std::runtime_error(strprintf("%s: Unknown chain %s.", __func__, chain));
}

void SelectParams(const std::string& network)
{
    SelectBaseParams(network);
    pCurrentParams = &Params(network);
}

void UpdateRegtestBIP9Parameters(Consensus::DeploymentPos d, int64_t nStartTime, int64_t nTimeout)
{
    regTestParams.UpdateBIP9Parameters(d, nStartTime, nTimeout);
}
