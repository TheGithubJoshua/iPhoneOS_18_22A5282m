@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface TSDMagicMoveTextureZOrderer : NSObject {
    NSArray *_zOrderMatches;
    NSArray *_outgoingTexturesInZOrder;
    NSArray *_incomingTexturesInZOrder;
    double *_percentTexturesTimes;
    NSArray *_percentTextures;
    NSObject<OS_dispatch_queue> *_resultQueue;
}

@property (readonly, nonatomic) unsigned long long zOrderIntersectionsCount;
@property (readonly, nonatomic) NSArray *flattenableAnimationMatches;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAnimationMatches:(id)a0;
- (void)p_addFlattenableAnimationMatches:(id)a0 toArray:(id)a1;
- (void)p_addVisibleTexturesFromMatches:(id)a0 toArray:(id)a1 interpolatedPercent:(double)a2;
- (void)p_adjustZOrdererMatchesZIndexByTextureType:(id)a0;
- (unsigned long long)p_bestZIndexForUnassignedMatch:(id)a0 inMatchArray:(id)a1;
- (void)p_calculateTextureArraysFromIntersections;
- (id)p_debugDescription;
- (id)p_newArrayBySortingMatches:(id)a0 withInterpolatedPercent:(double)a1;
- (void)p_setupZOrderMatchesWithAnimationMatches:(id)a0;
- (unsigned long long)p_zIntersectionsBetweenZOrdererMatches:(id)a0;
- (id)texturedRectanglesAtPercent:(double)a0;
- (id)p_outgoingTextureMatchesInZOrder;
- (id)p_outgoingTextureMatchesInZOrderWithTextureSets:(id)a0;
- (id)p_textureSetsInZOrderMatches;
- (id)p_uniqueIntersections;
- (id)p_zOrderMatchForTextureRectangle:(id)a0 withTextureSets:(id)a1;

@end
