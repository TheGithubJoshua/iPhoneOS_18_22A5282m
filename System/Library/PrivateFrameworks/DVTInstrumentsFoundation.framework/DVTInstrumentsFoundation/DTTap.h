@class DTTapMemoHandler, NSString, DTTapConfig, NSObject;
@protocol OS_dispatch_queue;

@interface DTTap : NSObject

@property (readonly, nonatomic) unsigned int tapID;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, retain, nonatomic) DTTapMemoHandler *memoHandler;
@property (readonly, retain, nonatomic) DTTapConfig *config;
@property (nonatomic) BOOL isRunning;
@property (readonly, retain, nonatomic) NSString *uuid;

- (void)_start;
- (id)init;
- (id)pause;
- (void)_stop;
- (void)_pause;
- (id)stop;
- (id)start;
- (void)_unpause;
- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)unpause;
- (BOOL)_canFetchWhileArchiving;
- (id)_fetchDataForReason:(unsigned long long)a0;
- (id)fetchDataNow;
- (id)initWithConfig:(id)a0 memoHandler:(id)a1;
- (void)resumeDataProcessing;
- (void)suspendDataProcessing;

@end
