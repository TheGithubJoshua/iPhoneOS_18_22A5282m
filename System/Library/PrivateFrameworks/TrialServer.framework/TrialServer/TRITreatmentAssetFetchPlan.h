@class NSDictionary, TRIGenericUniqueRequiredAssets;

@interface TRITreatmentAssetFetchPlan : NSObject <NSCopying>

@property (readonly, nonatomic) TRIGenericUniqueRequiredAssets *metadataForRequestedUnlinkedAssets;
@property (readonly, nonatomic) NSDictionary *fetchPlansForTreatmentIds;

+ (id)planWithMetadataForRequestedUnlinkedAssets:(id)a0 fetchPlansForTreatmentIds:(id)a1;

- (id)init;
- (unsigned long long)hash;
- (id)copyWithReplacementFetchPlansForTreatmentIds:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementMetadataForRequestedUnlinkedAssets:(id)a0;
- (BOOL)isEqualToPlan:(id)a0;
- (id)initWithMetadataForRequestedUnlinkedAssets:(id)a0 fetchPlansForTreatmentIds:(id)a1;

@end
