@class NSURL;

@interface CLAvailabilityTileParser : NSObject {
    struct shared_ptr<AvailabilityTile> { struct AvailabilityTile *__ptr_; struct __shared_weak_count *__cntrl_; } _avlTile;
}

@property (readonly, nonatomic) NSURL *path;

+ (BOOL)generateAvlTileFromJSON:(id)a0 atPath:(id)a1;
+ (void)_setParamOverrides:(void *)a0 fromDict:(id)a1;

- (id)init;
- (int)numTotalExpectedExteriorsInVenues;
- (id)initWithTilePathIncrementalIO:(id)a0;
- (id)initWithEmptyTile;
- (unsigned long long)venuesCount;
- (BOOL)tileIsOpenForIncrementalIO;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void *)getAvlTile;
- (int)numVenuesExpected;
- (BOOL)getNextVenueBoundsIncrementally:(void *)a0;
- (BOOL)_openTileFileForIncrementalIO;

@end
