@interface TRIMisc : NSObject

+ (BOOL)convertFromString:(id)a0 usingBase:(int)a1 toU64:(unsigned long long *)a2;
+ (unsigned long long)roundToOneSignificantDigitWithU64:(unsigned long long)a0;
+ (unsigned long long)unsafeFirstAuthenticationState;
+ (BOOL)convertFromString:(id)a0 usingBase:(int)a1 toI64:(long long *)a2;
+ (id)bestEffortSymbolicateAddress:(void *)a0;

@end
