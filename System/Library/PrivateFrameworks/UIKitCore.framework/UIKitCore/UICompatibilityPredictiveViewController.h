@class NSArray, NSString, UIView;

@interface UICompatibilityPredictiveViewController : UIViewController <UIPredictiveViewController>

@property (retain, nonatomic) UIView *customView;
@property (readonly, nonatomic) NSArray *displayedCandidates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)requiresKeyboard;
- (void)viewDidLayoutSubviews;
- (double)preferredHeightForTraitCollection:(id)a0;
- (void).cxx_destruct;
- (BOOL)hidesExpandableButton;
- (BOOL)_canShowWhileLocked;
- (BOOL)isVisibleForInputDelegate:(id)a0 inputViews:(id)a1;

@end
