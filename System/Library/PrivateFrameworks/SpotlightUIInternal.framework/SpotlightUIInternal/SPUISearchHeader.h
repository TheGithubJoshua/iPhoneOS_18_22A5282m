@class SPSearchEntity, SPSearchSuggestionResult, NSString, _UILegibilitySettings, SPUITextField, UISearchToken, UIResponder, UIButton, NSLayoutConstraint;
@protocol SPUISearchHeaderDelegate, SBIconListLayout, SPUIHeaderInteractionDelegate;

@interface SPUISearchHeader : _UINavigationBarTitleView <SPUITextFieldDelegate, UITextPasteDelegate>

@property (retain) UIButton *cancelButton;
@property (retain) NSLayoutConstraint *searchFieldTrailingConstraint;
@property (retain) NSLayoutConstraint *cancelButtonTrailingConstraint;
@property (retain) NSLayoutConstraint *widthConstraint;
@property (retain) NSLayoutConstraint *topConstraint;
@property (retain) NSLayoutConstraint *bottomConstraint;
@property (retain) NSLayoutConstraint *leadingConstraint;
@property BOOL willClear;
@property BOOL isInDictationModeFromSearchBar;
@property BOOL searchTextScheduledForProcessing;
@property BOOL isReturnKeyPressedInGoMode;
@property (retain) SPSearchSuggestionResult *engagedSuggestion;
@property (retain) NSString *lastSearchText;
@property (retain) SPSearchEntity *lastSearchEntity;
@property unsigned long long lastSearchHeaderQueryKind;
@property unsigned long long queryId;
@property (retain) id<SBIconListLayout> iconListLayout;
@property (nonatomic) unsigned long long invokeReason;
@property (weak) id<SPUISearchHeaderDelegate> delegate;
@property (readonly, nonatomic) NSString *currentQuery;
@property (weak, nonatomic) UIResponder *responderForKeyboardInput;
@property unsigned long long suggestionID;
@property (retain, nonatomic) SPSearchEntity *searchEntity;
@property BOOL offersCompletions;
@property (readonly) BOOL optOutOfGoButton;
@property (readonly) BOOL completionResultIsPotentiallyPunchout;
@property (nonatomic) double blurProgress;
@property (nonatomic) BOOL useClearTokens;
@property (readonly, nonatomic) double topPadding;
@property (readonly, nonatomic) double bottomPadding;
@property (retain) SPUITextField *searchField;
@property (weak, nonatomic) id<SPUIHeaderInteractionDelegate> interactionDelegate;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) long long activeInterfaceOrientation;
@property (nonatomic) BOOL useChunkyMetrics;
@property (readonly) UISearchToken *lastSearchToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)logDismissalWithReason:(unsigned long long)a0;
+ (unsigned long long)asYouTypeSearchQueryKind;
+ (unsigned long long)committedSearchQueryKind;
+ (id)tokenFromSearchEntity:(id)a0;
+ (void)logInvokeWithReason:(unsigned long long)a0;

- (BOOL)isOnDarkBackground;
- (void)highlightResultAfterUnmarkingText;
- (id)init;
- (BOOL)textFieldShouldClear:(id)a0;
- (void)didMoveToSuperview;
- (void)performTestSearchWithQuery:(id)a0 event:(unsigned long long)a1 queryKind:(unsigned long long)a2;
- (BOOL)isFirstResponder;
- (void)triggerSearchForUnlock;
- (void)updateWithCommand:(id)a0;
- (id)backdropVisualEffectView;
- (void)tlk_updateForAppearance:(id)a0;
- (void)returnKeyPressed;
- (void)updateBlurProgress;
- (void)textFieldDidBeginEditing;
- (void)commitSearch;
- (void)setSearchEntity:(id)a0 fromSuggestion:(BOOL)a1;
- (void)switchToSuggestions;
- (void)showCancelButton:(BOOL)a0 animated:(BOOL)a1;
- (void)textPasteConfigurationSupporting:(id)a0 transformPasteItem:(id)a1;
- (BOOL)cancelButtonIsVisible;
- (void)_searchWithSearchEntity:(id)a0 fromSuggestion:(BOOL)a1;
- (double)horizontalSpacingForChunkyHeight;
- (void)textFieldDidReplaceTokensWithStringEquivalent:(id)a0;
- (void)escapeKeyPressed;
- (void).cxx_destruct;
- (BOOL)lastQueryKindSupportsOptionKey;
- (void)focusSearchFieldAndSelectAll:(BOOL)a0 withReason:(unsigned long long)a1;
- (void)updateSearchFieldModel;
- (void)didMoveToWindow;
- (void)dictationButtonPressed;
- (void)searchForSuggestion:(id)a0 isBuildingQuery:(BOOL)a1;
- (void)updateFocusResult:(id)a0 cardSection:(id)a1 focusIsOnFirstResult:(BOOL)a2;
- (void)beginDictation;
- (void)unfocusSearchFieldWithReason:(unsigned long long)a0;
- (void)focusSearchFieldAndBeginDictation:(BOOL)a0 selectAll:(BOOL)a1 withReason:(unsigned long long)a2;
- (void)resignKeyboardForProcessState;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)currentQueryContextWithString:(id)a0;
- (void)setSuggestionResult:(id)a0;
- (void)updateDictationButtonEnabledStatus;
- (BOOL)textFieldShouldReturn;
- (id)_searchTextField:(id)a0 itemProviderForCopyingToken:(id)a1;
- (void)unfocusSearchFieldWithReason:(unsigned long long)a0 afterCommit:(BOOL)a1;
- (BOOL)currentlyPresentingWebEntity;
- (void)cancelButtonClicked:(id)a0;
- (void)clearSearchFieldWhyQuery:(unsigned long long)a0 allowZKW:(BOOL)a1;
- (void)performAction:(id /* block */)a0 afterCommit:(BOOL)a1;
- (void)addInputMethodInformationToQueryContext:(id)a0;
- (void)clearLastSearchedText;
- (void)removeCompletionAndHighlightAsTyped:(BOOL)a0;
- (void)textDidChange:(id)a0 whyQuery:(unsigned long long)a1 allowZKW:(BOOL)a2 sourcePreference:(unsigned long long)a3 engagedSuggestion:(id)a4 searchEntities:(id)a5 queryKind:(unsigned long long)a6;
- (void)enableDictationIfRequired;
- (void)textDidChange:(id)a0;
- (void)textDidChange:(id)a0 whyQuery:(unsigned long long)a1 allowZKW:(BOOL)a2 queryKind:(unsigned long long)a3;

@end
