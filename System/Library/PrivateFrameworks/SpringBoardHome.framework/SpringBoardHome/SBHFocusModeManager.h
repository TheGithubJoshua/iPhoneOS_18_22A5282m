@class NSString, SBHFocusModeFeatureIntroductionItem, SBHFocusMode, SBHIconManager;

@interface SBHFocusModeManager : NSObject <SBFolderObserver>

@property (weak, nonatomic) SBHIconManager *iconManager;
@property (retain, nonatomic) SBHFocusMode *activeFocusMode;
@property (retain, nonatomic) SBHFocusModeFeatureIntroductionItem *focusModeFeatureIntroductionItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIconManager:(id)a0;
- (void)folder:(id)a0 didAddList:(id)a1;
- (void)dismissAllFocusModePopovers;
- (void)_iconModelDidChange:(id)a0;
- (id)_focusModesRequiringIntroduction;
- (void).cxx_destruct;
- (void)addFocusModeRequiringIntroduction:(id)a0;
- (void)dealloc;
- (void)removeFocusModeRequiringIntroduction:(id)a0;
- (void)updateFocusModePopoverVisibility;
- (void)_iconEditingDidChange:(id)a0;

@end
