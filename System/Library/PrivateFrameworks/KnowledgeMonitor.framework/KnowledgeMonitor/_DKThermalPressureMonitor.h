@interface _DKThermalPressureMonitor : _DKMonitor

@property (nonatomic) BOOL initialized;
@property (nonatomic) int thermalPressureToken;
@property (nonatomic) int lastThermalPressureLevel;
@property (nonatomic) int peakPowerPressureToken;
@property (nonatomic) BOOL peakPowerPressureLevel;

+ (id)eventStream;
+ (id)entitlements;

- (id)loadState;
- (void)stop;
- (void)setCurrentThermalLevel:(int)a0;
- (void)start;
- (void)saveState;
- (void)deactivate;
- (void)setCurrentPeakPowerPressureLevel:(unsigned int)a0;
- (void)dealloc;
- (void)getPeakPowerPressureLevelWithToken:(int)a0;
- (void)getThermalPressureLevelWithToken:(int)a0;
- (void)synchronouslyReflectCurrentValue;

@end
