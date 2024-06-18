@class NSNumber;

@interface PLAccountingDistributionRuleEntry : PLAccountingRuleEntry

@property (readonly, nonatomic) NSNumber *nodeID;
@property (readonly, nonatomic) NSNumber *rootNodeID;
@property (readonly, nonatomic) NSNumber *distributionID;

+ (void)load;
+ (id)entryKey;

- (unsigned long long)hash;
- (id)initWithNodeID:(id)a0 withRootNodeID:(id)a1 withDistributionID:(id)a2 withEntryDate:(id)a3;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
