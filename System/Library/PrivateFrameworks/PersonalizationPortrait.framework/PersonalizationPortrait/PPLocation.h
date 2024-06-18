@class NSString, PPLocationRecord, CLPlacemark, NSSet;

@interface PPLocation : NSObject <NSCopying, NSSecureCoding, MLFeatureProvider>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *clusterIdentifier;
@property (readonly, nonatomic) CLPlacemark *placemark;
@property (readonly, nonatomic) unsigned short category;
@property (readonly, nonatomic) PPLocationRecord *mostRelevantRecord;
@property (readonly, nonatomic) NSSet *featureNames;

+ (unsigned short)categoryForDescription:(id)a0;
+ (id)describeCategory:(unsigned short)a0;
+ (id)clusterIdentifierFromPlacemark:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)featureValueForName:(id)a0;
- (BOOL)isEqualToLocation:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)customizedDescription;
- (id)initWithPlacemark:(id)a0 category:(unsigned short)a1 mostRelevantRecord:(id)a2;

@end
