@interface PLAccountingDistributionEventForwardEntry : PLAccountingDistributionEventEntry

+ (void)load;
+ (int)classDirectionality;
+ (id)entryKey;

- (id)initWithDistributionID:(id)a0 withChildNodeNameToWeight:(id)a1 withStartDate:(id)a2;

@end
