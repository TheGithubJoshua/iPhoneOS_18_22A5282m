@class NSString, NSPredicate, PKOSVersionRequirementRange;

@interface PKRule : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *predicateFormat;
@property (retain, nonatomic) PKOSVersionRequirementRange *osVersionRequirementRange;
@property (readonly, nonatomic) NSPredicate *predicate;

- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 predicateFormat:(id)a1 osVersionRequirementRange:(id)a2;
- (void)parsePredicateFormat;

@end
