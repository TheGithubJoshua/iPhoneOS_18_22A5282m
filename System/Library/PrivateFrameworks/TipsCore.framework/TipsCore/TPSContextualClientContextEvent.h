@class NSArray;

@interface TPSContextualClientContextEvent : TPSContextualEvent

@property (copy, nonatomic) NSArray *conditions;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)clientContextKeys;

@end
