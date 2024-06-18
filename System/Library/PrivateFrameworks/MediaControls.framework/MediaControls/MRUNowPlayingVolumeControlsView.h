@class MRUVolumeGroupCoordinator, NSString, MRUStepper, MRUVolumeController, UIWindowScene, UIImageView, MRUGroupSlider, MRUVisualStylingProvider;

@interface MRUNowPlayingVolumeControlsView : UIView <MRUVolumeControllerDelegate, MPVolumeDisplaying, MRUStepperDelegate, MRUVisualStylingProviderObserver, MRUGroupSliderDelegate>

@property (retain, nonatomic) UIImageView *minImageView;
@property (retain, nonatomic) UIImageView *maxImageView;
@property (retain, nonatomic) MRUGroupSlider *slider;
@property (retain, nonatomic) MRUStepper *stepper;
@property (retain, nonatomic) MRUVolumeController *volumeController;
@property (retain, nonatomic) MRUVolumeGroupCoordinator *volumeGroupCoordinator;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) long long layout;
@property (nonatomic, getter=isOnScreen) BOOL onScreen;
@property (nonatomic, getter=isDimmed) BOOL dimmed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIWindowScene *windowSceneForVolumeDisplay;
@property (readonly, nonatomic, getter=isOnScreenForVolumeDisplay) BOOL onScreenForVolumeDisplay;
@property (readonly, nonatomic) NSString *volumeAudioCategory;

- (void)volumeController:(id)a0 volumeControlCapabilitiesDidChange:(unsigned int)a1;
- (void)updateVisibility;
- (void)volumeController:(id)a0 volumeControlAvailableDidChange:(BOOL)a1;
- (void)updateVisualStyling;
- (void)sliderTounchUp:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sliderTounchDown:(id)a0;
- (void)stepperDecrementHoldEnded:(id)a0;
- (void)stepperIncrementHoldBegan:(id)a0;
- (void)stepperIncrementHoldEnded:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)sliderValueChanged:(id)a0;
- (void)sliderLongPressActionDidCancel:(id)a0;
- (void)volumeController:(id)a0 volumeValueDidChange:(float)a1;
- (void)stepperDecrementHoldBegan:(id)a0;
- (void).cxx_destruct;
- (void)visualStylingProviderDidChange:(id)a0;
- (void)sliderLongPressActionDidBegin:(id)a0;
- (void)dealloc;
- (void)sliderLongPressActionDidFinish:(id)a0;
- (void)layoutSubviews;
- (void)stepperDidIncrement:(id)a0;
- (void)updateVolumeAnimated:(BOOL)a0;
- (void)stepperDidDecrement:(id)a0;
- (BOOL)sliderShouldAllowLongPress:(id)a0;

@end
