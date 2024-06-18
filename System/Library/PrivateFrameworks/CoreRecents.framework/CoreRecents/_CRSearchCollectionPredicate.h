@class NSString, NSArray;

@interface _CRSearchCollectionPredicate : CRSearchPredicate

@property (readonly, copy) NSString *key;
@property (readonly, copy) NSArray *collection;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)asNSPredicate;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithKey:(id)a0 collection:(id)a1;

@end
