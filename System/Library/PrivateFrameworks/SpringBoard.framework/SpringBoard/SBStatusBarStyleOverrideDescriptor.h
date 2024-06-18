@interface SBStatusBarStyleOverrideDescriptor : NSObject

@property (readonly, nonatomic) unsigned long long overrides;
@property (readonly, nonatomic) int pid;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithOverrides:(unsigned long long)a0 pid:(int)a1;

@end
