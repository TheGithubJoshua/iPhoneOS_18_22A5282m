@class APOdmlAssetManager;

@interface APOdmlAssetManagersForPlacement : NSObject

@property (readonly, nonatomic) APOdmlAssetManager *runtimeAssetManager;
@property (readonly, nonatomic) APOdmlAssetManager *counterfactualAssetManager;

- (void).cxx_destruct;
- (id)initWithPlacementType:(unsigned long long)a0 trialClient:(id)a1;
- (id)assetManagerForType:(unsigned long long)a0;

@end
