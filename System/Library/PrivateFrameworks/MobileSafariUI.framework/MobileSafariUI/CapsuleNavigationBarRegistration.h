@class _SFBarManager, NSString, NSArray, SFMoreMenuButton, SFCapsuleNavigationBar, NSMutableDictionary, UIButton, SFNavigationBarToggleButton, _SWCollaborationButtonView;

@interface CapsuleNavigationBarRegistration : NSObject <_SFBarRegistrationToken> {
    _SFBarManager *_manager;
    NSArray *_leadingBarItems;
    NSArray *_trailingBarItems;
    NSMutableDictionary *_buttonsByBarItem;
    NSMutableDictionary *_menuByBarItem;
    BOOL _hiddenBarItems[17];
    BOOL _disabledBarItems[17];
    SFNavigationBarToggleButton *_formatMenuButton;
    SFMoreMenuButton *_progressView;
}

@property (readonly, weak) SFCapsuleNavigationBar *bar;
@property (nonatomic) long long contentMode;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long pageFormatItemState;
@property (readonly, nonatomic) UIButton *microphoneButton;
@property (retain, nonatomic) _SWCollaborationButtonView *collaborationButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewForBarItem:(long long)a0;
- (void)_updateDownloadState;
- (void)_voiceSearchAvailabilityDidChange:(id)a0;
- (void)setProgress:(double)a0 forBarItem:(long long)a1;
- (id)_longPressActionForBarItem:(long long)a0;
- (id)popoverSourceInfoForItem:(long long)a0;
- (void).cxx_destruct;
- (void)setBarItem:(long long)a0 hidden:(BOOL)a1;
- (id)_touchDownActionForBarItem:(long long)a0;
- (id)_progressView;
- (id)_actionForBarItem:(long long)a0;
- (id)initWithBar:(id)a0 barManager:(id)a1;
- (void)setBarItem:(long long)a0 enabled:(BOOL)a1;
- (void)dealloc;
- (BOOL)containsBarItem:(long long)a0;
- (void)_updateFormatMenuButton;
- (void)setBarItem:(long long)a0 menu:(id)a1;
- (void)setBarItem:(long long)a0 selected:(BOOL)a1;
- (void)updateBarAnimated:(BOOL)a0;
- (BOOL)_isBarItemHidden:(long long)a0;

@end
