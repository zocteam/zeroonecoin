Benchmarking
============

01coin has an internal benchmarking framework, with benchmarks for cryptographic algorithms such as SHA1, SHA256, SHA512 and RIPEMD160. As well as the rolling bloom filter.

After compiling 01coin, the benchmarks can be run with:
`src/bench/bench_zeroone`

The output will look similar to:
```
#Benchmark,count,min,max,average,min_cycles,max_cycles,average_cycles
Base58CheckEncode,114688,0.000005732537829,0.000012499513105,0.000008897766488,18344,39999,28473
Base58Decode,393216,0.000002289736585,0.000003563633072,0.000002547894837,7327,11403,8153
Base58Encode,229376,0.000003515742719,0.000007341615856,0.000005036891837,11251,23493,16118
CCheckQueueSpeed,6144,0.000114226713777,0.000195927917957,0.000164919455225,365541,626985,527755
CCheckQueueSpeedPrevectorJob,512,0.001142561435699,0.003147330135107,0.002267281524837,3656257,10071694,7255487
CCoinsCaching,65536,0.000011122698197,0.000030841911212,0.000016168076399,35593,98697,51739
CoinSelection,352,0.002365998923779,0.003732815384865,0.002895672890273,7571407,11945344,9266394
```

More benchmarks are potentially needed for, in no particular order:
- Script Validation?
- CCoinDBView caching?
- Coins database?
- Memory pool?
- Wallet coin selection?

...List TBD
