@class NSXPCListener, BMInferredModeStream, NSString;

@interface ATXSleepSuggestionServer : NSObject <NSXPCListenerDelegate, ATXSleepSuggestionInterface>

@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) BMInferredModeStream *stream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)predictedSleepSuggestionWithCompletionHandler:(id /* block */)a0;
- (BOOL)isSleepScheduleBetweenTheBoundariesWithBedtime:(id)a0 wakeupTime:(id)a1;

@end
