@class PSSpecifier;

@interface LTUITranslateSettingsController : PSListController {
    PSSpecifier *onDeviceOnlyGroup;
}

- (id)specifiers;
- (void).cxx_destruct;
- (BOOL)isOnDeviceOnlyTranslationForced;
- (id)appGroupUserDefaultForSpecifier:(id)a0;
- (id)onDeviceOnlyFooterString;
- (void)openAppToLanguages:(id)a0;
- (void)setAppGroupUserDefaultsEnabled:(id)a0 specifier:(id)a1;
- (void)showTranslatePrivacy;

@end
