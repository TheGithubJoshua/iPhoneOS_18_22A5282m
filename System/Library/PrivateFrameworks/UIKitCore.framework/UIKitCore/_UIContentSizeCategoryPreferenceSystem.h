@class UIContentSizeCategoryPreference;

@interface _UIContentSizeCategoryPreferenceSystem : UIContentSizeCategoryPreference {
    BOOL _observingNotification;
    BOOL _didCheckForPreferredContentSizeCategoryOverride;
    BOOL _applicationOverridesPreferredContentSizeCategory;
}

@property (retain, nonatomic) UIContentSizeCategoryPreference *overridePreferences;

- (id)initAsSystem;
- (void)_updateContentSizeCategory:(id)a0 carPlay:(id)a1 postingNotification:(BOOL)a2;
- (void)checkForChanges;
- (void)_readAndObservePreferences;
- (void)_beginObservingPreferredContentSizeChangedNotification;
- (void).cxx_destruct;
- (id)description;
- (void)_updateContentSizeCategoriesFromUserDefaultsPostingNotification:(BOOL)a0;
- (void)_postContentSizeCategoryDidChangeNotification;
- (void)setPreferredContentSizeCategory:(id)a0;
- (void)_endObservingPreferredContentSizeChangedNotification;
- (void)dealloc;

@end
