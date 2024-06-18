@class NSTimer;
@protocol SASHeaterDelegate;

@interface SASHeater : NSObject

@property (nonatomic, getter=_preparationStartTime, setter=_setPreparationStartTime:) double preparationStartTime;
@property (nonatomic) BOOL predictedRecordRouteIsZLL;
@property (retain, nonatomic) NSTimer *preheatTimer;
@property (nonatomic) double preheatTimeInterval;
@property (weak, nonatomic) id<SASHeaterDelegate> delegate;

- (void)_cancelPreparation;
- (void)_suggestPreheat;
- (void)updatePredictedRouteIsZLL;
- (void).cxx_destruct;
- (void)cancelPreparationForButtonIdentifier:(long long)a0;
- (void)prepareForUseAfterTimeInterval:(double)a0;
- (id)_convertVirtualAudioSubTypeToString:(unsigned int)a0;

@end
