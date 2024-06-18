@interface PreviewsOSSupport.UVServiceHubPreviewService : NSObject <UVServiceHubService> {
    void /* unknown type, empty encoding */ invalidationHandle;
    void /* unknown type, empty encoding */ shellConnection;
}

+ (id)createAndReturnError:(id *)a0;

- (id)init;
- (void)cancel;
- (void)activateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)observeCancelation:(id /* block */)a0;

@end
