@interface PLAccountingPowerEventForwardEntry : PLAccountingPowerEventEntry

+ (void)load;
+ (int)classDirectionality;
+ (id)entryKey;

- (BOOL)canMergeWithEvent:(id)a0;
- (id)initWithRootNodeID:(id)a0 withPower:(double)a1 withStartDate:(id)a2;

@end
