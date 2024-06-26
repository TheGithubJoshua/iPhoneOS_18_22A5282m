@class NSString;

@interface _CRMatchTextPredicate : CRSearchPredicate

@property (readonly, copy) NSString *key;
@property (readonly, copy) NSString *text;
@property (readonly) unsigned long long comparison;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)asNSPredicate;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithKey:(id)a0 text:(id)a1 comparison:(unsigned long long)a2;

@end
