@interface OADProperties : NSObject {
    OADProperties *mParent;
    unsigned char mIsMerged : 1;
    unsigned char mIsMergedWithParent : 1;
}

+ (id)defaultProperties;

- (void)setParent:(id)a0;
- (id)init;
- (id)parent;
- (void)setMerged:(BOOL)a0;
- (unsigned long long)hash;
- (id)initWithDefaults;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isMerged;
- (void)flatten;
- (void)changeParentPreservingEffectiveValues:(id)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)isMergedPropertyForSelector:(SEL)a0;
- (BOOL)isMergedWithParent;
- (id)overrideForSelector:(SEL)a0;
- (id)overrideForSelector:(SEL)a0 mustExist:(BOOL)a1;
- (void)p_setParent:(id)a0;
- (id)possiblyInexistentOverrideForSelector:(SEL)a0;
- (void)removeUnnecessaryOverrides;
- (void)setMergedWithParent:(BOOL)a0;

@end
