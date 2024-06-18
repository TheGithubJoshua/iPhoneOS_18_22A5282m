@class NSArray;

@interface PGSharingFeatures : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *classes;
@property (readonly, nonatomic) NSArray *momentFeatureVectors;
@property (readonly, nonatomic) NSArray *assetFeatureVectors;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithClasses:(id)a0 momentFeatureVectors:(id)a1 assetFeatureVectors:(id)a2;

@end
