@class NSArray, NSMutableArray, UIPageControl;
@protocol _UIPageIndicatorFeedDelegate;

@interface _UIPageIndicatorFeed : NSObject {
    UIPageControl *_pageControl;
}

@property (retain, nonatomic) NSMutableArray *activeQueue;
@property (retain, nonatomic) NSMutableArray *reuseQueue;
@property (readonly, nonatomic) NSArray *indicators;
@property (weak, nonatomic) id<_UIPageIndicatorFeedDelegate> delegate;

- (void)invalidateIndicators;
- (id)indicatorForPage:(long long)a0;
- (void)updateReuseQueue;
- (void)prepareIndicatorsFrom:(long long)a0 to:(long long)a1;
- (void)reloadIndicatorImages;
- (id)indicatorForPage:(long long)a0 forSizeOnly:(BOOL)a1;
- (struct CGSize { double x0; double x1; })indicatorSizeForCustomImage:(id)a0;
- (void)reloadIndicatorImageForPage:(long long)a0;
- (void).cxx_destruct;
- (BOOL)_isPageWithinActiveBounds:(long long)a0;
- (struct CGSize { double x0; double x1; })indicatorSizeForPage:(long long)a0;
- (id)initWithPageControl:(id)a0;
- (id)activeIndicatorForPage:(long long)a0;

@end
