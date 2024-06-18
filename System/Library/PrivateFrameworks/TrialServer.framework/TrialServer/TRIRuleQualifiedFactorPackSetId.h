@class NSString;
@protocol TRIFactorPackSetId;

@interface TRIRuleQualifiedFactorPackSetId : NSObject <NSCopying>

@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *ident;
@property (readonly, nonatomic) int targetingRuleIndex;

+ (id)factorPackSetIdWithIdent:(id)a0 targetingRuleIndex:(int)a1;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithReplacementTargetingRuleIndex:(int)a0;
- (id)copyWithReplacementIdent:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdent:(id)a0 targetingRuleIndex:(int)a1;
- (BOOL)isEqualToFactorPackSetId:(id)a0;

@end
