@interface PLAccountingDistributionEventBackwardEntry : PLAccountingDistributionEventEntry

+ (void)load;
+ (int)classDirectionality;
+ (id)entryKey;

- (id)initWithDistributionID:(id)a0 withChildNodeNameToWeight:(id)a1 withEndDate:(id)a2;

@end
