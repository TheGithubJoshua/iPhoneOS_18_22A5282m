@class NSObject;
@protocol AFAudioPowerProviding, AFAudioPowerUpdaterDelegate, OS_dispatch_source, OS_dispatch_queue;

@interface AFAudioPowerUpdater : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    id<AFAudioPowerUpdaterDelegate> _delegate;
    void *_sharedMemory;
    float _averagePower;
    float _peakPower;
}

@property (readonly, nonatomic) id<AFAudioPowerProviding> provider;
@property (readonly, nonatomic) long long frequency;

- (void)_timerFired;
- (void)_endUpdate;
- (id)initWithProvider:(id)a0 queue:(id)a1 frequency:(long long)a2 delegate:(id)a3;
- (void)getPowerWithCompletion:(id /* block */)a0;
- (void)_writeSharedMemoryWithAveragePower:(float)a0 peakPower:(float)a1;
- (void)_getPowerWithCompletion:(id /* block */)a0;
- (void)endUpdate;
- (void)beginUpdate;
- (id)_createNewXPCWrapper;
- (void)_beginUpdate;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)_createSharedMemory;
- (void)_createNewXPCWrapperWithCompletion:(id /* block */)a0;
- (float)_unsafePeakPower;
- (void)_destroySharedMemory;
- (id)_createSharedMemoryXPCObject;
- (void)dealloc;
- (float)_unsafeAveragePower;
- (void)createNewXPCWrapperWithCompletion:(id /* block */)a0;
- (void)_invalidate;
- (void)_updatePowerWithAveragePower:(float)a0 andPeakPower:(float)a1;

@end
