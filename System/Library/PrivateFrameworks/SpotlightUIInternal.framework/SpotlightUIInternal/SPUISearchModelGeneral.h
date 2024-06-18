@class NSObject, NSString, SPClientSession;
@protocol OS_dispatch_queue;

@interface SPUISearchModelGeneral : SPUISearchModel

@property (retain) SPClientSession *session;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSString *rankingDebugLog;

- (void)setInfinitePatience:(BOOL)a0;
- (long long)maxUISuggestions;
- (id)init;
- (BOOL)infinitePatience;
- (void)setForceStableResults:(BOOL)a0;
- (void)clear;
- (void)updatesDisabled;
- (void)activate;
- (BOOL)shouldEnableOCR;
- (BOOL)forceStableResults;
- (void)deactivate;
- (void).cxx_destruct;
- (void)updatesEnabled;
- (BOOL)queryInProgress;
- (void)updateWithQueryContext:(id)a0;
- (void)setMaxUISuggestions:(long long)a0;
- (void)_setInfinitePatience:(BOOL)a0;

@end
