@class NSString, NSDate;

@interface TRINamespaceStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *namespaceName;
@property (readonly, nonatomic) unsigned int compatibilityVersion;
@property (readonly, nonatomic) NSDate *lastFetchAttempt;
@property (readonly, nonatomic) BOOL lastFetchWasSuccess;

+ (id)statusFromData:(id)a0;
+ (id)statusWithNamespaceName:(id)a0 compatibilityVersion:(unsigned int)a1 lastFetchAttempt:(id)a2 lastFetchWasSuccess:(BOOL)a3;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToStatus:(id)a0;
- (id)init;
- (id)copyWithReplacementCompatibilityVersion:(unsigned int)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)asData;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementLastFetchAttempt:(id)a0;
- (id)copyWithReplacementLastFetchWasSuccess:(BOOL)a0;
- (id)copyWithReplacementNamespaceName:(id)a0;
- (id)initWithNamespaceName:(id)a0 compatibilityVersion:(unsigned int)a1 lastFetchAttempt:(id)a2 lastFetchWasSuccess:(BOOL)a3;

@end
