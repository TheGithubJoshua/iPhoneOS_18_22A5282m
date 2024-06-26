@class TLSystemSound, NSString, TLAlertStoppingOptions, TLAlertPlaybackCompletionContext;
@protocol TLAlertPlaybackObserver;

@interface TLAlertSystemSoundContext : NSObject

@property (retain, nonatomic) TLSystemSound *sound;
@property (retain, nonatomic) TLAlertPlaybackCompletionContext *playbackCompletionContext;
@property (weak, nonatomic) id<TLAlertPlaybackObserver> playbackObserver;
@property (nonatomic, getter=isRequiringBacklightObservation) BOOL requiringBacklightObservation;
@property (nonatomic, getter=isLoadingSound) BOOL loadingSound;
@property (nonatomic) BOOL hasPlaybackStarted;
@property (nonatomic, getter=isBeingInterrupted) BOOL beingInterrupted;
@property (copy, nonatomic) NSString *toneIdentifierForDeemphasizingAlert;
@property (nonatomic, getter=isBeingDeemphasized) BOOL beingDeemphasized;
@property (nonatomic, getter=isDeemphasized) BOOL deemphasized;
@property (nonatomic) BOOL hasDeemphasizedPlaybackStarted;
@property (nonatomic) BOOL shouldBeInterruptedAfterDeemphasizedPlaybackStarts;
@property (copy, nonatomic) TLAlertStoppingOptions *stoppingOptionsForDeferredInterruption;

- (void).cxx_destruct;
- (id)description;

@end
