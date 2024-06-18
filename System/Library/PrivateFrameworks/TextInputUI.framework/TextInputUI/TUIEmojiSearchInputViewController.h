@class TUIEmojiVariantSelectorView, NSDate, UITapGestureRecognizer, UIViewController, TUIEmojiSearchView, TUIEmojiSearchResultsCollectionViewController, NSString, NSLayoutConstraint, TUIEmojiSearchAnalyticsSession, NSTimer, TUIEmojiSearchSource, NSArray, TouchExclusionView;
@protocol UIPredictiveViewController, TUIEmojiSearchInputViewControllerDelegate, Staging_UIKBFeedbackGenerating;

@interface TUIEmojiSearchInputViewController : UIInputViewController <TUIEmojiSearchTextFieldDelegate, TUIEmojiSearchSourceDelegate, TUIEmojiSearchResultsCollectionViewControllerDelegate, UIPredictiveViewController> {
    TUIEmojiSearchSource *_emojiSearchSource;
    TUIEmojiSearchResultsCollectionViewController *_resultsViewController;
    TUIEmojiVariantSelectorView *_variantSelectorView;
    UITapGestureRecognizer *_variantSelectorDismissGesture;
    TouchExclusionView *_variantSelectorDismissOverlayView;
    NSTimer *_resultsUpdateRateLimitTimer;
    NSArray *_rateLimitedResults;
    NSString *_rateLimitedSearchQuery;
    BOOL _canAutocorrectWithCurrentInputMode;
    NSTimer *_waitForAutocorrectionDelayTimer;
    NSString *_exactSearchQuery;
    NSString *_autocorrectedSearchQuery;
    NSDate *_lastActivationDate;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
    TUIEmojiSearchAnalyticsSession *_analyticsSession;
    id<Staging_UIKBFeedbackGenerating> _feedbackGenerator;
}

@property (weak, nonatomic) id<TUIEmojiSearchInputViewControllerDelegate> delegate;
@property (readonly, nonatomic) TUIEmojiSearchView *emojiSearchView;
@property (retain, nonatomic) UIViewController<UIPredictiveViewController> *childPredictionViewController;
@property (nonatomic) BOOL usesFloatingStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *displayedCandidates;

+ (BOOL)_preventsAppearanceProxyCustomization;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_keyboardInsets;
- (void)emojiSearchSource:(id)a0 didProduceResults:(id)a1 forExactQuery:(id)a2 autocorrectedQuery:(id)a3;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_didRecognizeVariantDismissGesture:(id)a0;
- (void)_keyboardInputModeDidChange:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_selectedEmojiString:(id)a0 completion:(id /* block */)a1;
- (void)_variantSelectorValueChanged:(id)a0;
- (void)autocorrectionListDidBecomeAvailable:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (double)preferredHeightForTraitCollection:(id)a0;
- (void)emojiSearchTextField:(id)a0 didChangeSearchString:(id)a1;
- (void).cxx_destruct;
- (BOOL)hidesExpandableButton;
- (void)emojiSearchTextFieldWillBecomeActive:(id)a0;
- (void)_dismissVariantSelector;
- (BOOL)_canShowWhileLocked;
- (BOOL)isVisibleForInputDelegate:(id)a0 inputViews:(id)a1;
- (void)_displayResults:(id)a0 forExactQuery:(id)a1 autocorrectedQuery:(id)a2;
- (void)emojiSearchResultsController:(id)a0 didSelectEmoji:(id)a1;
- (void)emojiSearchTextFieldWillClear:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)emojiSearchResultsController:(id)a0 didRequestVariantSelectorForEmojiToken:(id)a1 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)emojiSearchTextFieldDidBecomeActive:(id)a0;
- (void)emojiSearchTextFieldWillBecomeInactive:(id)a0;
- (void)emojiSearchTextFieldDidBecomeInactive:(id)a0;

@end
