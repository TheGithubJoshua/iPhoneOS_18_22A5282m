@class NSString;
@protocol TRIAssetId;

@interface TRIAssetIdFactorName : NSObject <NSCopying>

@property (readonly, nonatomic) NSString<TRIAssetId> *assetId;
@property (readonly, nonatomic) NSString *factorName;

+ (id)nameWithAssetId:(id)a0 factorName:(id)a1;

- (id)init;
- (id)copyWithReplacementAssetId:(id)a0;
- (id)copyWithReplacementFactorName:(id)a0;
- (unsigned long long)hash;
- (id)initWithAssetId:(id)a0 factorName:(id)a1;
- (BOOL)isEqualToName:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
