@interface SBLegacyServices : NSObject

+ (void)_configure;
+ (void)setFunction:(void *)a0 forSymbol:(const char *)a1;
+ (void)start;
+ (void)checkInPorts;
+ (id)workloop;

@end
