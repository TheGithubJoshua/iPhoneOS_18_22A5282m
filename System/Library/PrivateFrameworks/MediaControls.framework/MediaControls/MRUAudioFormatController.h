@class FBSDisplayLayoutMonitor, NSString, NSTimer, MRNowPlayingAudioFormatController;
@protocol MRUAudioFormatControllerDelegate;

@interface MRUAudioFormatController : NSObject <MRNowPlayingAudioFormatControllerDelegate, MRExpanseManagerObserver>

@property (retain, nonatomic) MRNowPlayingAudioFormatController *audioFormatController;
@property (retain, nonatomic) FBSDisplayLayoutMonitor *layoutMonitor;
@property (retain, nonatomic) NSTimer *optimisticTimer;
@property (nonatomic) BOOL isFaceTimePreferencesVisible;
@property (nonatomic) BOOL optimisticSpatialAudioActive;
@property (weak, nonatomic) id<MRUAudioFormatControllerDelegate> delegate;
@property (readonly, nonatomic) NSString *displayBundleID;
@property (readonly, nonatomic) NSString *preferencesBundleID;
@property (readonly, nonatomic) BOOL isSpatialAudioEnabled;
@property (readonly, nonatomic) BOOL isSpatialAudioNotAvailable;
@property (readonly, nonatomic) BOOL isSpatialAudioActive;
@property (readonly, nonatomic) BOOL isMultichannelPreferencesVisible;
@property (readonly, nonatomic) BOOL isMultichannelAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)stopMonitoring;
- (void)startMonitoring;
- (void)updateFacetime;
- (void)expanseManagerDidLeaveExpanseSession:(id)a0;
- (void).cxx_destruct;
- (void)nowPlayingAudioFormatController:(id)a0 didChangeAudioFormatContentInfo:(id)a1;
- (void)nowPlayingAudioFormatController:(id)a0 didChangeBundleID:(id)a1 displayName:(id)a2;
- (void)stopOptimisticSpatialAudioActive;
- (void)startOptimisticSpatialAudioActive;
- (void)dealloc;
- (void)expanseManagerDidJoinExpanseSession:(id)a0;
- (id)audioFormatDescriptionForPreferences:(id)a0;
- (void)resetOptimisticSpatialAudioActive;

@end
