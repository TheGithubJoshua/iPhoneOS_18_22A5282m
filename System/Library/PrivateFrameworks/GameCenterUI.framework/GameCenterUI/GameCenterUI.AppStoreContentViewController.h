@class UIScrollView;

@interface GameCenterUI.AppStoreContentViewController : GameCenterUI.BaseViewController {
    void /* unknown type, empty encoding */ pageMetricsPresenter;
    void /* unknown type, empty encoding */ dataPresenter;
    void /* unknown type, empty encoding */ appStoreContentView;
    void /* unknown type, empty encoding */ startTime;
    void /* unknown type, empty encoding */ kvoTokens;
}

@property (nonatomic) void /* unknown type, empty encoding */ preferredLargeTitleDisplayMode;
@property (nonatomic, retain) void /* unknown type, empty encoding */ bootstrapPresenter;
@property (nonatomic, readonly) UIScrollView *scrollView;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithGameRecord:(id)a0;

@end
