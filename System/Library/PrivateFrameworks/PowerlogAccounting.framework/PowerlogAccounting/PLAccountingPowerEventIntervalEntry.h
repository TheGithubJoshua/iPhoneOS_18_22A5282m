@interface PLAccountingPowerEventIntervalEntry : PLAccountingPowerEventEntry

+ (void)load;
+ (int)classDirectionality;
+ (id)entryKey;

- (id)initWithRootNodeID:(id)a0 withPower:(double)a1 withStartDate:(id)a2 withEndDate:(id)a3;
- (BOOL)canMergeWithEvent:(id)a0;

@end
