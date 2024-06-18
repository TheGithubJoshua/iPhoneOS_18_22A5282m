@class NSHashTable, CSAudioRecordContext, NSObject;
@protocol OS_dispatch_queue;

@interface CSSiriClientBehaviorMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) BOOL isStreaming;
@property (retain, nonatomic) CSAudioRecordContext *audioRecordContext;

+ (id)sharedInstance;

- (id)init;
- (void)notifyWillStartStreamWithContext:(id)a0 option:(id)a1;
- (void)unregisterObserver:(id)a0;
- (void)notifyPreparedSiriClientAudioStream:(id)a0 successfully:(BOOL)a1;
- (void)registerObserver:(id)a0;
- (void)notifyDidStopStream:(id)a0 withEventUUID:(id)a1;
- (void).cxx_destruct;
- (void)notifyFetchedSiriClientAudioStream:(id)a0 successfully:(BOOL)a1;
- (void)notifyDidStartStreamWithContext:(id)a0 successfully:(BOOL)a1 option:(id)a2 withEventUUID:(id)a3;
- (void)notifyReleaseAudioSession;
- (void)notifyWillStopStream:(id)a0 reason:(unsigned long long)a1;

@end
