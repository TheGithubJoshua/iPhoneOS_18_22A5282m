@class NSXPCConnection;

@interface ATXHeroDataClient : NSObject <ATXHeroDataXPCInterface> {
    NSXPCConnection *_xpcConnection;
}

- (id)init;
- (void)openAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
- (void)getCurrentHeroPoiCategoryWithCompletion:(id /* block */)a0;
- (void)addHardRejectForAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)addSoftRejectForAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)feedbackScoreForAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
- (void)donateHeroAppPredictions:(id)a0 completion:(id /* block */)a1;
- (void)addConfirmForAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;

@end
