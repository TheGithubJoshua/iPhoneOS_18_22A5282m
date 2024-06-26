@class NSArray;

@interface PKPassUpgradeExpressAutomaticSelectionCriteriaRequest : PKPassUpgradeRequest

@property (readonly, nonatomic) NSArray *technologyTypes;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)asDictionary;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
