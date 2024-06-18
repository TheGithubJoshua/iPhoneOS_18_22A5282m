@interface PUMedusaSettings : PXSettings

@property (nonatomic) double _desiredWidth;
@property (nonatomic) double _widthDelay;
@property (nonatomic) double _testStartDelay;
@property (nonatomic) double _testInterval;
@property (nonatomic) double _testIncrement;

+ (void)runSizeTest;
+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;

@end
