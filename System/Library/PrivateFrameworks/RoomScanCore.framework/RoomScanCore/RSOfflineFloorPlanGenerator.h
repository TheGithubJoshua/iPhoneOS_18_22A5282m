@class RSDoorWindowPostProcessor, RSBayWindowFPRemoval, RSOutsideObjectRemoval, RSStructurePostProcess, NSMutableDictionary, RSCurvedWallDetection, RSOfflineKeyframeAccumulation, RSNonUniformHeightEstimation, RSOpeningHeightAlignment, RSDeduplicateOpeningOpenDoor, RSOfflineGeometryCalculation, RSDoorWindowOfflineDetector, RSOfflineProjection2DZNode, RSOnlineOfflineAssociation, RSWallOpeningOfflineDetector;

@interface RSOfflineFloorPlanGenerator : RSFloorPlanGeneratorBase {
    RSDoorWindowOfflineDetector *_doorWindowDetector;
    RSWallOpeningOfflineDetector *_wallOpeningDetector;
    RSOfflineKeyframeAccumulation *_accumulator;
    RSOfflineGeometryCalculation *_geometryEstimator;
    RSCurvedWallDetection *_curvedWallDetector;
    RSOfflineProjection2DZNode *_projector;
    RSBayWindowFPRemoval *_baywindowFPRemoval;
    RSStructurePostProcess *_structurePostprocess;
    RSDeduplicateOpeningOpenDoor *_deduplicateOpeningOpenDoor;
    RSOnlineOfflineAssociation *_onlineOfflineAssociation;
    RSNonUniformHeightEstimation *_heightEstimator;
    RSOpeningHeightAlignment *_openingHeightAlignment;
    RSOutsideObjectRemoval *_removeOutsideObject;
    RSDoorWindowPostProcessor *_doorWindowPostProcessor;
    BOOL _wallOpeningMergeEnabled;
    BOOL _openingReplaceOpendoorEnabled;
    BOOL _opendoorReplaceOpeningEnabled;
    NSMutableDictionary *_debugInfo;
    BOOL _enableLiveDump;
}

- (id)init;
- (void)clear;
- (void).cxx_destruct;
- (id)getDebugInfo;
- (id)beautifyObjects:(id)a0 withFloorPlan:(id)a1;
- (id)generateFloorPlanWithKeyframes:(id)a0 initialAsset:(id)a1;
- (id)generateFloorPlanWithKeyframes:(id)a0 initialAsset:(id)a1 error:(id *)a2;
- (id)geometryMeta;
- (const void *)lmapOfWall;
- (void)setDoorWindowBeautificationEnable:(BOOL)a0;
- (void)setLiveDumpEnable:(BOOL)a0;
- (void)setNonUniformHeightEnable:(BOOL)a0;
- (void)setOpendoorReplaceOpeningEnable:(BOOL)a0;
- (void)setOpeningReplaceOpendoorEnable:(BOOL)a0;
- (void)setWallOpeningMergeEnable:(BOOL)a0;

@end
