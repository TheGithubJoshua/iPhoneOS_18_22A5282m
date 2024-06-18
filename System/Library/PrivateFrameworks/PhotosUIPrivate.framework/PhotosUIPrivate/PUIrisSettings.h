@interface PUIrisSettings : PXSettings

@property (nonatomic, getter=showStatusBorder) BOOL showStatusBorder;
@property (nonatomic, getter=isVitalityAllowed) BOOL vitalityAllowed;
@property (nonatomic) BOOL shouldAlwaysBadge;

+ (id)sharedInstance;
+ (id)_photosPlayerRootSettings;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;
- (void)restoreDefaultValues;
- (void)performPostSaveActions;

@end
