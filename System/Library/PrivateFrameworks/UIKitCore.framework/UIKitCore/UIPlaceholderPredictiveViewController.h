@class NSArray, NSString;

@interface UIPlaceholderPredictiveViewController : UIViewController <UIPredictiveViewController>

@property (readonly, nonatomic) NSArray *displayedCandidates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)requiresKeyboard;
- (double)preferredHeightForTraitCollection:(id)a0;
- (BOOL)hidesExpandableButton;
- (BOOL)_canShowWhileLocked;
- (BOOL)isVisibleForInputDelegate:(id)a0 inputViews:(id)a1;
- (id)_currentTextSuggestions;
- (BOOL)_isVisibleForAutocorrectionType:(long long)a0;

@end
