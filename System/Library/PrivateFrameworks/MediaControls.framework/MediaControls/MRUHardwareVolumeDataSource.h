@class NSString;
@protocol MPVolumeControllerDataSource;

@interface MRUHardwareVolumeDataSource : NSObject <SBSHardwareButtonEventConsuming>

@property (nonatomic) double pendingVolumeChange;
@property (nonatomic) BOOL debounceVolumeRepeat;
@property (readonly, nonatomic) id<MPVolumeControllerDataSource> volumeDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)decreaseVolume;
- (void)consumeSinglePressUpForButtonKind:(long long)a0;
- (void).cxx_destruct;
- (void)increaseVolume;
- (void)cancelVolumeEvent;
- (void)consumeSinglePressDownForButtonKind:(long long)a0;
- (void)changeVolumeBy:(double)a0;
- (double)calculateButtonRepeatDelay;
- (void)handleDecreaseDown;
- (void)handleIncreaseDown;
- (id)initWithVolumeDataSource:(id)a0;

@end
