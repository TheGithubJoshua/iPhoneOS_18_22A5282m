@class NSString;

@interface FFFeatureIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *domainName;
@property (readonly, nonatomic) NSString *featureName;

+ (id)identifierFromString:(id)a0;

- (id)initWithDomain:(id)a0 feature:(id)a1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
