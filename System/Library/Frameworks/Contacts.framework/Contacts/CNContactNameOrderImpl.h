@interface CNContactNameOrderImpl : NSObject

+ (id)givenNameFirstOrder;
+ (id)defaultOrder;
+ (id)familyNameFirstOrder;
+ (id)defaultSortOrder;
+ (id)orderForSortOrder:(long long)a0;
+ (id)defaultNewContactOrder;

- (long long)nameOrder;
- (id)phoneticNameProperties;
- (id)nameProperties;
- (id)sortingNameProperties;

@end
