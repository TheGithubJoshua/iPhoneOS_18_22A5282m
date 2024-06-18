@class UIImageView, UITextView, OBPrivacyLinkButton;

@interface OBPrivacyLinkController_iOS : OBPrivacyLinkController {
    OBPrivacyLinkButton *_linkButton;
    BOOL bundleTitlesMatch;
    BOOL bundlesIncludePII;
}

@property (readonly) UIImageView *iconView;
@property (readonly) UITextView *textView;

- (void)setLinkEnabled:(BOOL)a0;
- (void)loadView;
- (void)setCustomTintColor:(id)a0;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)processBundlesForTitleInformation;
- (void)setUnderlineLinks:(BOOL)a0;
- (id)initWithPrivacyBundle:(id)a0;
- (id)initWithBundleIdentifiers:(id)a0;

@end
