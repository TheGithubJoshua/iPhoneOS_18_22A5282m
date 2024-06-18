@class VNClassificationCustomHierarchy, VNSceneObservation;

@interface VNSceneClassificationRequestConfiguration : VNImageBasedRequestConfiguration

@property (retain, nonatomic) VNSceneObservation *sceneObservation;
@property (retain, nonatomic) VNClassificationCustomHierarchy *customHierarchy;
@property (nonatomic) unsigned long long maximumLeafObservations;
@property (nonatomic) unsigned long long maximumHierarchicalObservations;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestClass:(Class)a0;

@end
