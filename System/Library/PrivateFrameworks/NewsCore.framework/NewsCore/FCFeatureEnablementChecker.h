@interface FCFeatureEnablementChecker : NSObject

+ (BOOL)enabledInConfig:(id)a0 forKey:(id)a1 withDefaultLevel:(unsigned long long)a2;
+ (BOOL)enabledForCurrentLevel:(unsigned long long)a0;
+ (unsigned long long)currentSeedTestBit;

@end
