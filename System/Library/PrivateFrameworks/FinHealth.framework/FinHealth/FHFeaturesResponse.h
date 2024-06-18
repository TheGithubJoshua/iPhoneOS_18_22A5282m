@class NSArray, NSString;

@interface FHFeaturesResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *smartFeatures;
@property (readonly, copy, nonatomic) NSArray *aggregateFeatures;
@property (readonly, copy, nonatomic) NSArray *compoundFeatures;
@property (readonly, copy, nonatomic) NSString *transactionIdentifier;
@property (readonly, copy, nonatomic) NSArray *aggregateFeaturesWithProcessingWindow;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithSmartFeatures:(id)a0 aggregateFeatureswithProcessingWindow:(id)a1 compoundFeatures:(id)a2 transactionID:(id)a3;

@end
