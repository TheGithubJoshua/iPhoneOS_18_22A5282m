@class PRSPosterSnapshot;

@interface PBFPosterSnapshotContainer : NSObject {
    struct CGImageBlockSet { } *_imageBlockSet;
}

@property (readonly, nonatomic) PRSPosterSnapshot *posterSnapshot;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPosterSnapshot:(id)a0 imageBlockSet:(struct CGImageBlockSet { } *)a1;

@end
