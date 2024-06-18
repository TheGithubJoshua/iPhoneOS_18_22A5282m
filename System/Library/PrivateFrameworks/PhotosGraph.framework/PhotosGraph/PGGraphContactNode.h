@class NSString, NSDate;

@interface PGGraphContactNode : PGGraphOptimizedNode

@property (readonly) NSString *name;
@property (readonly) NSString *contactIdentifier;
@property (readonly) NSDate *birthdayDate;
@property (readonly) NSDate *potentialBirthdayDate;

+ (id)filter;
+ (id)filterWithContactIdentifier:(id)a0;

- (void)setLocalProperties:(id)a0;
- (unsigned short)domain;
- (void).cxx_destruct;
- (id)description;
- (id)propertyDictionary;
- (id)label;
- (BOOL)hasProperties:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)initWithName:(id)a0 contactIdentifier:(id)a1 birthdayDate:(id)a2 potentialBirthdayDate:(id)a3;
- (unsigned long long)sexHintForGivenName;

@end
