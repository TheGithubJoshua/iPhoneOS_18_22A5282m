@class UIViewController, NSString, SBIcon, SBIconView, SBHIconManager, UIView;

@interface SBHIconShareSheetManager : NSObject

@property (weak, nonatomic) SBHIconManager *iconManager;
@property (weak, nonatomic) SBIconView *iconView;
@property (weak, nonatomic) SBIcon *iconWithShareSheetHidingForRotationAnimation;
@property (copy, nonatomic) NSString *locationOfIconWithShareSheetHiddenForRotationAnimation;
@property (retain, nonatomic) UIView *fakeSourceView;
@property (retain, nonatomic) UIViewController *shareSheetViewController;
@property (nonatomic) BOOL queuedToPresentShareSheet;
@property (nonatomic) BOOL iconShareSheetsAreHiddenForRotation;
@property (readonly, nonatomic) BOOL areAnyAppIconShareSheetsShowing;

- (id)initWithIconManager:(id)a0;
- (void)dismissIconShareSheetsIfNecessaryAndCleanUp;
- (void)_presentShareSheet:(id)a0 forIconView:(id)a1;
- (void)presentShareSheetForIconView:(id)a0;
- (void)_appIconForceTouchControllerDidDismissNotification:(id)a0;
- (void).cxx_destruct;
- (void)_createFakeSourceViewForIconView:(id)a0;
- (id)_shareSheetPresentationViewControllerForIconView:(id)a0;
- (void)showIconShareSheetsIfAnyWereHiddenForRotationAnimation;
- (void)dealloc;
- (void)_queueShareSheetPresentation:(id)a0 forIconView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_iconViewFrameInScreenCoordinateSpace:(id)a0;
- (void)hideIconShareSheetsIfAnyForRotationAnimation;

@end
