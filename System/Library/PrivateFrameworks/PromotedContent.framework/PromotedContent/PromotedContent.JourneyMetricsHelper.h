@class NSString;

@interface PromotedContent.JourneyMetricsHelper : NSObject <APPCCarouselMetricsHelping, APPCJourneyMetricsHelping, APPCMetricRegister> {
    void /* unknown type, empty encoding */ promotedContentIdentifier;
    void /* unknown type, empty encoding */ journeyIdentifier;
    void /* unknown type, empty encoding */ contextIdentifier;
    void /* unknown type, empty encoding */ notificationOwner;
    void /* unknown type, empty encoding */ clientSource;
    void /* unknown type, empty encoding */ interactionThreshold;
    void /* unknown type, empty encoding */ interactionThresholdVOEnabled;
    void /* unknown type, empty encoding */ interactionTime;
    void /* unknown type, empty encoding */ viewReady;
    void /* unknown type, empty encoding */ wasCreated;
    void /* unknown type, empty encoding */ hasBeenPlaced;
    void /* unknown type, empty encoding */ stop;
    void /* unknown type, empty encoding */ unfilledReasons;
    void /* unknown type, empty encoding */ placedProperties;
    void /* unknown type, empty encoding */ eventCount;
    void /* unknown type, empty encoding */ quickReturnVoiceOverDisabledDurationInMilliseconds;
    void /* unknown type, empty encoding */ quickReturnVoiceOverEnabledDurationInMilliseconds;
    void /* unknown type, empty encoding */ quickReturnConfigVersion;
    void /* unknown type, empty encoding */ unfairLock;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shownSet;
    void /* unknown type, empty encoding */ $__lazy_storage_$_partiallyShownSet;
    void /* unknown type, empty encoding */ leftAdDestinationWasReported;
    void /* unknown type, empty encoding */ percentVisible;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ promotedContent;
@property (nonatomic, copy) NSString *promotedContentIdentifier;
@property (nonatomic, copy) NSString *journeyIdentifier;
@property (nonatomic, retain) void /* unknown type, empty encoding */ primitiveCreator;
@property (nonatomic) void /* unknown type, empty encoding */ hasBeenOnScreen;
@property (nonatomic) void /* unknown type, empty encoding */ isCurrentlyOnScreen;
@property (nonatomic) void /* unknown type, empty encoding */ didUnload;
@property (nonatomic) void /* unknown type, empty encoding */ didImpress;
@property (nonatomic, retain) void /* unknown type, empty encoding */ diagnostics;
@property (nonatomic) void /* unknown type, empty encoding */ impressionThresholdDuration;

- (void)updateElementsShownWithShown:(id)a0 partiallyShown:(id)a1;
- (id)init;
- (void)contentLoadFailure;
- (void)ready;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loaded;
- (void)delivered;
- (void)adMarkerInteracted;
- (void)addUnfilledReason:(long long)a0;
- (void)createdWithAdType:(long long)a0;
- (void)createdWithAdType:(long long)a0 container:(long long)a1;
- (void)createdWithAdType:(long long)a0 container:(long long)a1 format:(long long)a2;
- (void)discardedWithCode:(long long)a0;
- (void)exceededContainer;
- (void)getAppWithButtonState:(long long)a0 timeToPreviousInstall:(long long)a1;
- (void)interacted;
- (void)interactedAtXPos:(float)a0 yPos:(float)a1;
- (void)interactedWithElementID:(unsigned char)a0 atXPos:(float)a1 yPos:(float)a2;
- (void)notConsumedWithCode:(long long)a0 placeholder:(BOOL)a1;
- (void)offScreenWithCollapsed:(BOOL)a0;
- (void)onScreenWithCollapsed:(BOOL)a0;
- (void)placedWithPlacementType:(long long)a0 placement:(long long)a1;
- (void)placedWithPlacementType:(long long)a0 placement:(long long)a1 position:(long long)a2;
- (void)placedWithPlacementType:(long long)a0 placement:(long long)a1 unfilledReason:(long long)a2;
- (void)placedWithPlacementType:(long long)a0 placement:(long long)a1 wasNativeSlot:(BOOL)a2;
- (void)registerHandlerForAllMetricsWithClosure:(id /* block */)a0;
- (void)removeHandler;
- (void)replacedWithHelper:(id)a0;
- (void)unloadedWithReason:(long long)a0;
- (void)userReturnedFromInteractionWithIsVoiceOverEnabled:(BOOL)a0;
- (void)userReturnedFromInteractionWithIsVoiceOverEnabled:(BOOL)a0 ignoreVisibilityState:(BOOL)a1;
- (void)visibleWithPercent:(long long)a0 starting:(id)a1 duration:(double)a2 collapsed:(BOOL)a3;
- (void)visibleWithPercent:(long long)a0 starting:(id)a1 duration:(double)a2 scrollVelocity:(float)a3 collapsed:(BOOL)a4;

@end
