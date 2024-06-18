@class PXLayoutGenerator;
@protocol PXFeedViewLayoutSpec;

@interface PXFeedSublayoutComposition : PXGGeneratedSublayoutComposition {
    PXLayoutGenerator *_cachedLayoutGenerator;
}

@property (retain, nonatomic) id<PXFeedViewLayoutSpec> spec;
@property (readonly, nonatomic) long long scrollableAxis;

- (id)configuredLayoutGenerator;
- (void).cxx_destruct;
- (void)visibleRectDidChange;

@end
