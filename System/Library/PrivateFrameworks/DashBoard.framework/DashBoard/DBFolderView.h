@class DBScrollButton, NSLayoutConstraint;
@protocol DBEnvironment;

@interface DBFolderView : SBRootFolderView

@property (nonatomic) BOOL buttonUXEnabled;
@property (retain, nonatomic) DBScrollButton *scrollLeftButton;
@property (retain, nonatomic) DBScrollButton *scrollRightButton;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } listViewInsets;
@property (retain, nonatomic) NSLayoutConstraint *leadingScrollArrowLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *trailingScrollArrowTrailingConstraint;
@property (weak, nonatomic) id<DBEnvironment> environment;

+ (unsigned long long)countOfAdditionalPagesToKeepVisibleInOneDirection;
+ (double)maximumPageControlHeightForInteractionAffordances:(unsigned long long)a0;
+ (Class)_scrollViewClass;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_showsButtons;
- (void)_updateScrollButtonStatesForIndex:(long long)a0;
- (void)setLeadingCustomViewVisibilityProgress:(double)a0;
- (long long)orientation;
- (BOOL)_useParallaxOnPageControl;
- (double)pageControlAreaHeight;
- (BOOL)hidesOffscreenCustomPageViews;
- (double)_offsetToCenterPageControlInSpaceForPageControl;
- (void)_layoutSubviews;
- (void)_scrollButtonPressed:(id)a0;
- (void)_updatePageControlToIndex:(long long)a0;
- (long long)iconVisibilityHandling;
- (BOOL)shouldInstallFocusGuides;
- (long long)defaultPageIndex;
- (id)_newPageControl;
- (double)internalDockPageControlVerticalMargin;
- (id)initWithConfiguration:(id)a0;
- (void)_updateIconListFrames;
- (double)_listViewSideInset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_listViewVerticalInset;
- (void).cxx_destruct;

@end
