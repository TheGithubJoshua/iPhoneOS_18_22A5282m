@class UIScrollView, NSString;

@interface _UIScrollViewRefreshControlHost : NSObject <_UIRefreshControlHosting> {
    UIScrollView *_scrollView;
    BOOL _refreshControlAutomaticContentOffsetAdjustmentEnabledNeedsReset;
    BOOL _refreshControlAutomaticContentOffsetAdjustmentEnabledWhenLastIdle;
}

@property (readonly) BOOL refreshControlInsetsAffectScrollViewRubberBanding;
@property (readonly, weak) UIScrollView *scrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)incrementInsetHeight:(double)a0;
- (void)decrementInsetHeight:(double)a0;
- (id)initWithScrollView:(id)a0;
- (void).cxx_destruct;
- (void)refreshControl:(id)a0 didChangeToState:(long long)a1 fromState:(long long)a2;

@end
