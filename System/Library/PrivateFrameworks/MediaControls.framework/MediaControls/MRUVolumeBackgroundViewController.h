@class MRUVolumeBackgroundView, MRUSystemOutputDeviceRouteController, MRUSpatialAudioPreferencesController, MRUAudioFormatController, NSString, MRUListeningModeController;
@protocol MRUVolumeBackgroundViewControllerDelegate;

@interface MRUVolumeBackgroundViewController : UIViewController <MRUSystemOutputDeviceRouteControllerObserver, MRUListeningModeControllerDelegate, MRUSpatialAudioPreferencesControllerDelegate, MRUAudioFormatControllerDelegate, UIGestureRecognizerDelegate, CCUIContentModuleBackgroundViewController>

@property (retain, nonatomic) MRUVolumeBackgroundView *view;
@property (retain, nonatomic) MRUVolumeBackgroundView *viewIfLoaded;
@property (retain, nonatomic) MRUSystemOutputDeviceRouteController *outputDeviceRouteController;
@property (retain, nonatomic) MRUListeningModeController *listeningModeController;
@property (retain, nonatomic) MRUSpatialAudioPreferencesController *spatialAudioPreferencesController;
@property (retain, nonatomic) MRUAudioFormatController *audioFormatController;
@property (weak, nonatomic) id<MRUVolumeBackgroundViewControllerDelegate> delegate;
@property (nonatomic) float systemVolumeValue;
@property (readonly, nonatomic) BOOL hasExpandedButtons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateNowPlayingIcon;
- (void)collapseExpandableButtons;
- (void)spatialAudioPreferencesController:(id)a0 didChangeAccessoryStereoHFPStatus:(int)a1;
- (void)didEndEditingSecondartListeningModeButton:(id)a0;
- (void)performLayoutWithAnimation:(id /* block */)a0;
- (void)updateVisibility;
- (void)audioFormatControllerDidChangeBundleID:(id)a0;
- (void)spatialAudioPreferencesController:(id)a0 didChangeHeadTrackingSupported:(BOOL)a1;
- (void)loadView;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)didTapPrimaryListeningModeButton:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)listeningModeController:(id)a0 didChangePrimaryListeningMode:(id)a1;
- (id)initWithOutputDeviceRouteController:(id)a0;
- (void)updateSpatialAudioModeButton;
- (void)updateSecondaryListeningModeButton;
- (void)spatialAudioPreferencesController:(id)a0 didSpatialAudioSupported:(BOOL)a1;
- (void)spatialAudioPreferencesController:(id)a0 didChangeMonoAudioEnabled:(BOOL)a1;
- (void)updateSecondaryRouteView;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDevices:(id)a0;
- (void)viewDidLoad;
- (void)listeningModeController:(id)a0 didChangeSecondaryListeningMode:(id)a1;
- (void)audioFormatControllerDidChangeAudioFormat:(id)a0;
- (void)didTapSecondaryListeningModeButton:(id)a0;
- (void).cxx_destruct;
- (void)updateNowPlayingAudioFormat;
- (void)didEndEditingPrimaryListeningModeButton:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)spatialAudioPreferencesControllerDidChangePreferences:(id)a0;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDeviceProperties:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)secondaryListeningModeButtonDidChangeValue:(id)a0;
- (void)primaryListeningModeButtonDidChangeValue:(id)a0;
- (void)updatePrimaryRouteView;
- (void)spatialAudioModeButtonDidChangeValue:(id)a0;
- (void)updatePrimaryListeningModeButton;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })effectiveContentFrameForContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didTapSpatialAudioModeButton:(id)a0;

@end
