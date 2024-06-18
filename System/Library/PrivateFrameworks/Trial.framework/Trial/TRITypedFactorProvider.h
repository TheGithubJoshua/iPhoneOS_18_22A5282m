@class NSString;
@protocol TRINamespaceFactorProviding;

@interface TRITypedFactorProvider : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) id<TRINamespaceFactorProviding> provider;
@property (readonly, nonatomic) NSString *logDesc;

+ (id)providerWithType:(unsigned long long)a0 provider:(id)a1 logDesc:(id)a2;

- (id)init;
- (id)copyWithReplacementType:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)copyWithReplacementProvider:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(unsigned long long)a0 provider:(id)a1 logDesc:(id)a2;
- (BOOL)isEqualToProvider:(id)a0;
- (id)copyWithReplacementLogDesc:(id)a0;

@end
