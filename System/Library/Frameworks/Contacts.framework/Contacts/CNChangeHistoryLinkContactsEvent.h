@class CNContact;

@interface CNChangeHistoryLinkContactsEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) CNContact *fromContact;
@property (readonly, nonatomic) CNContact *toContact;
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
- (id)initWithFromContact:(id)a0 toContact:(id)a1 unifiedContact:(id)a2;

@end
