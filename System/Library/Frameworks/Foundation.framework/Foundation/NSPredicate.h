@class NSString;

@interface NSPredicate : NSObject <NSSecureCoding, NSCopying> {
    struct _predicateFlags { unsigned char _evaluationBlocked : 1; unsigned int _reservedPredicateFlags : 31; } _predicateFlags;
    unsigned int reserved;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *predicateFormat;

+ (void)initialize;
+ (id)newStringFrom:(id)a0 usingUnicodeTransforms:(unsigned long long)a1;
+ (struct __CFLocale { } *)retainedLocale;
+ (id)predicateWithBlock:(id /* block */)a0;
+ (id)predicateWithFormat:(id)a0;
+ (id)predicateWithFormat:(id)a0 argumentArray:(id)a1;
+ (id)predicateWithFormat:(id)a0 arguments:(char *)a1;
+ (id)predicateWithValue:(BOOL)a0;

- (BOOL)evaluateWithObject:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)allowEvaluation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)predicateWithSubstitutionVariables:(id)a0;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (BOOL)_allowsEvaluation;
- (void)_validateForMetadataQueryScopes:(id)a0;
- (id)generateMetadataDescription;

@end
