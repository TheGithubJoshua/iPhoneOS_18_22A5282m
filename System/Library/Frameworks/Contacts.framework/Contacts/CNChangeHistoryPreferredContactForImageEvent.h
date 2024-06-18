@class CNContact;

@interface CNChangeHistoryPreferredContactForImageEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) CNContact *preferredContact;
@property (readonly, nonatomic) CNContact *unifiedContact;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)acceptEventVisitor:(id)a0;
- (long long)comparisonResultWithinSameClass:(id)a0;
- (id)initWithPreferredContact:(id)a0 unifiedContact:(id)a1;

@end
