@class NSString, NSArray, NSTimer, NSObject;
@protocol OS_nw_resolver;

@interface CoreDAVSRVLookupTask : CoreDAVTask {
    NSObject<OS_nw_resolver> *_resolver;
    NSTimer *_timeoutTimer;
}

@property (retain, nonatomic) NSString *serviceString;
@property (retain, nonatomic) NSArray *fetchedRecords;

- (void).cxx_destruct;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (void)_runOnCallbackThread:(id /* block */)a0;
- (void)handleResolvedEndPoints:(id)a0;
- (id)initWithServiceString:(id)a0;
- (void)performCoreDAVTask;

@end
