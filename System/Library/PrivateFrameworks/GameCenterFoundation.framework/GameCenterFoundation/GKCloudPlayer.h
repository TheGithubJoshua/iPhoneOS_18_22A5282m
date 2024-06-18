@class NSString;

@interface GKCloudPlayer : GKBasePlayer <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *name;

+ (void)getCurrentSignedInPlayerForContainer:(id)a0 completionHandler:(id /* block */)a1;

- (id)initWithCoder:(id)a0;
- (id)displayName;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)playerID;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
