@interface CNChangeHistoryDropEverythingEvent : CNChangeHistoryEvent

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)acceptEventVisitor:(id)a0;

@end
