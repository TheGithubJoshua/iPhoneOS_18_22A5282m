@class NSNumber;

@interface PLAccountingQualificationRuleEntry : PLAccountingRuleEntry

@property (readonly, nonatomic) NSNumber *rootNodeID;
@property (readonly, nonatomic) NSNumber *qualificationID;

+ (void)load;
+ (id)entryKey;

- (id)initWithRootNodeID:(id)a0 withQualificationID:(id)a1 withEntryDate:(id)a2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
