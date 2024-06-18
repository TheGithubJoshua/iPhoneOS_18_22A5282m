@class PXRequestedEDRHeadroomFactorFilter, NSString, PXImageModulationSettings, NSHashTable, CAContext, UIViewController;

@interface PXImageModulationManager : PXObservable <PXChangeObserver, PXSettingsKeyObserver, PXPreferencesObserver> {
    struct { BOOL enabled; BOOL lowPowerModeEnabled; BOOL active; BOOL HDRFocus; BOOL imageModulationIntensity; BOOL requestedEDRHeadroomFactor; BOOL finalRequestedEDRHeadroomFactor; BOOL desiredDynamicRange; BOOL imageLayerModulators; BOOL currentScreenSupportsHDR; } _needsUpdateFlags;
    double _lastRequestedEDRHeadroomChangeTime;
}

@property (readonly, nonatomic) PXImageModulationSettings *settings;
@property (readonly, nonatomic) NSHashTable *imageLayerModulators;
@property (readonly, nonatomic) PXRequestedEDRHeadroomFactorFilter *requestedEDRHeadroomFactorFilter;
@property (nonatomic) long long requestedEDRHeadroomSignpost;
@property (retain, nonatomic) CAContext *coreAnimationContext;
@property (nonatomic, getter=isLowPowerModeEnabled) BOOL lowPowerModeEnabled;
@property (nonatomic, getter=isApplicationActive) BOOL applicationActive;
@property (readonly, weak, nonatomic) UIViewController *rootViewController;
@property (readonly, nonatomic, getter=isMainScreen) BOOL mainScreen;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) BOOL currentScreenSupportsHDR;
@property (readonly, nonatomic) double HDRFocus;
@property (readonly, nonatomic) double imageModulationIntensity;
@property (readonly, nonatomic) double requestedEDRHeadroomFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)HDRValueForAsset:(id)a0;
+ (long long)_contentFormatForAsset:(id)a0;
+ (double)_hdrGainForAsset:(id)a0;
+ (struct { long long x0; float x1; })optionsForAsset:(id)a0;

- (void)_updateIfNeeded;
- (id)init;
- (void)_didEndRequestingEDRHeadroomFactor:(double)a0;
- (BOOL)_needsUpdate;
- (void)_invalidateLowPowerModeEnabled;
- (void)_updateCoreAnimationContext;
- (void)checkInLivePhotoViewModulator:(id)a0;
- (void)preferencesDidChange;
- (void)didPerformChanges;
- (void)checkInImageLayerModulator:(id)a0;
- (id)mutableChangeObject;
- (void)_setNeedsUpdate;
- (void)_applicationDidBecomeActive:(id)a0;
- (void)_invalidateDesiredDynamicRange;
- (void)_invalidateCurrentScreenSupportsHDR;
- (void)_invalidateRequestedEDRHeadroomFactor;
- (void)_updateEnabledIfNeeded;
- (id)checkoutLivePhotoViewModulatorWithOptions:(struct { long long x0; float x1; })a0;
- (void)_applicationDidResignActive:(id)a0;
- (void)_didStartRequestingEDRHeadroomFactor:(double)a0;
- (void)_updateImageLayerModulator:(id)a0;
- (void)_updateImageModulationIntensityIfNeeded;
- (void)setNeedsImageModulationIntensityUpdate;
- (void)_updateCurrentScreenSupportsHDRIfNeeded;
- (id)_checkoutImageLayerModulatorWithOptions:(struct { long long x0; float x1; })a0 contentType:(long long)a1;
- (void)_updateFinalRequestedEDRHeadroomFactorIfNeeded;
- (void)_updateHDRFocusIfNeeded;
- (void)_invalidateEnabled;
- (void).cxx_destruct;
- (void)_updateRequestedEDRHeadroomFactorIfNeeded;
- (void)_invalidateActive;
- (void)setNeedsHDRFocusUpdate;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithRootViewController:(id)a0 mainScreen:(BOOL)a1;
- (void)_invalidateImageLayerModulators;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)_updateDesiredDynamicRangeIfNeeded;
- (void)setImageModulationIntensity:(double)a0;
- (void)setEnabled:(BOOL)a0;
- (void)setRequestedEDRHeadroomFactor:(double)a0;
- (void)dealloc;
- (void)_invalidateFinalRequestedEDRHeadroomFactor;
- (void)_updateActiveIfNeeded;
- (void)_updateImageLayerModulatorsIfNeeded;
- (void)_updateLowPowerModeEnabledIfNeeded;
- (id)checkoutImageLayerModulatorWithOptions:(struct { long long x0; float x1; })a0;
- (void)setHDRFocus:(double)a0;
- (void)setActive:(BOOL)a0;
- (void)_invalidateHDRFocus;
- (void)_processInfoPowerStateDidChange:(id)a0;
- (void)_invalidateImageModulationIntensity;
- (void)setCurrentScreenSupportsHDR:(BOOL)a0;

@end
