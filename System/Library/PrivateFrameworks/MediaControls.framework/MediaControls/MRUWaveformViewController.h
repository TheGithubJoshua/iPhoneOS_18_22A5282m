@class MRUWaveformSettings, NSString, MRUWaveformView, MRUWaveformData, MRUWaveformController;

@interface MRUWaveformViewController : UIViewController <MRUWaveformControllerDelegate>

@property (retain, nonatomic) MRUWaveformController *controller;
@property (retain, nonatomic) MRUWaveformSettings *settings;
@property (retain, nonatomic) MRUWaveformData *waveformData;
@property (nonatomic) BOOL hasAppeared;
@property (nonatomic) BOOL delayArtworkChange;
@property (nonatomic) unsigned long long context;
@property (retain, nonatomic) MRUWaveformView *view;
@property (nonatomic, getter=isOnScreen) BOOL onScreen;
@property (nonatomic, getter=isDimmed) BOOL dimmed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateVisibility;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)updateState;
- (void)viewWillAppear:(BOOL)a0;
- (struct CAFrameRateRange { float x0; float x1; float x2; })framerateRangeForData:(id)a0;
- (id)initWithContext:(unsigned long long)a0 waveformController:(id)a1;
- (void)updateWaveformWithData:(id)a0;
- (void)waveformController:(id)a0 artworkImageDidChange:(id)a1;
- (void)waveformController:(id)a0 remoteRouteSymbolNameDidChange:(id)a1;
- (void)waveformController:(id)a0 waveformDidChange:(id)a1;
- (void)waveformControllerTrackDidChange:(id)a0;

@end
