@class NSObject, ENTemporaryExposureKey, NSDate;
@protocol ENTemporaryExposureKeyManagerDelegate, OS_dispatch_queue;

@interface ENTemporaryExposureKeyManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) NSDate *nextPromptDate;
@property (readonly, nonatomic) ENTemporaryExposureKey *oldestTEK;
@property (readonly, nonatomic) unsigned int lastTEKRequestENIN;
@property (weak, nonatomic) id<ENTemporaryExposureKeyManagerDelegate> delegate;

+ (id)temporaryExposureKeyFromRawKey:(id)a0 error:(id *)a1;

- (id)_getTemporaryExposureKeysFromRollingStart:(unsigned int)a0 includingActive:(BOOL)a1 refresh:(BOOL)a2 error:(id *)a3;
- (id)getTemporaryExposureKeysFromRollingStart:(unsigned int)a0 includingActive:(BOOL)a1 refresh:(BOOL)a2 error:(id *)a3;
- (id)getTemporaryExposureKeysForClient:(id)a0 fromRollingStart:(unsigned int)a1 didPrompt:(BOOL)a2 forTesting:(BOOL)a3 forceRefresh:(BOOL)a4 error:(id *)a5;
- (void).cxx_destruct;
- (void)resetClientState;
- (id)initWithQueue:(id)a0;
- (BOOL)requireKeyReleasePromptForClient:(id)a0;

@end
