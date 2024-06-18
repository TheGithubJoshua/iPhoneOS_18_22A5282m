@class NSArray, NSString, UIView;

@interface UICandidateViewController : UIViewController <UIPredictiveViewController>

@property (retain, nonatomic) UIView *candidateView;
@property (readonly, nonatomic) NSArray *displayedCandidates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferredCandidateBarHeightForTraitCollection:(id)a0;

- (long long)overrideUserInterfaceStyle;
- (BOOL)requiresKeyboard;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (double)preferredHeightForTraitCollection:(id)a0;
- (void).cxx_destruct;
- (BOOL)hidesExpandableButton;
- (BOOL)_canShowWhileLocked;
- (BOOL)isVisibleForInputDelegate:(id)a0 inputViews:(id)a1;
- (void)viewWillAppear:(BOOL)a0;

@end
