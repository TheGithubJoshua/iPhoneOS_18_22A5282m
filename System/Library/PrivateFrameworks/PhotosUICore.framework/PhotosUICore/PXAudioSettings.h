@interface PXAudioSettings : PXSettings

@property (nonatomic) BOOL workaround80278485;
@property (nonatomic) BOOL flexReturnOnlyLocalSongs;

+ (id)sharedInstance;
+ (void)purgeFlexDataFromModuleController:(id)a0;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
