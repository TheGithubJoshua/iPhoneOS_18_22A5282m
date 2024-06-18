@class NSDictionary, PUSlideshowMediaItem, OKProducerPreset;

@interface PUSlideshowSettingsViewModel : PUViewModel

@property (readonly, nonatomic) NSDictionary *propertyDictionary;
@property (retain, nonatomic) OKProducerPreset *preset;
@property (retain, nonatomic) PUSlideshowMediaItem *mediaItem;
@property (nonatomic) BOOL shouldRepeat;
@property (nonatomic) double stepDuration;
@property (nonatomic, getter=isMusicOn) BOOL musicOn;

- (void)unregisterChangeObserver:(id)a0;
- (void)registerChangeObserver:(id)a0;
- (id)currentChange;
- (unsigned long long)hash;
- (id)initWithPropertyDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newViewModelChange;

@end
