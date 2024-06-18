@class NSString, NSXPCConnection;

@interface CAXContextualActionsClient : NSObject <CAXContextualActionsXPCInterface> {
    NSString *_clientModelId;
    NSXPCConnection *_xpcConnection;
}

- (void)processShortcutsActionSelectionGivenFeedbackEvent:(id)a0;
- (void)processShortcutsSessionGivenSummary:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)processShortcutsSessionGivenSummary:(id)a0;
- (void)processShortcutsActionSelectionGivenFeedbackEvent:(id)a0 completion:(id /* block */)a1;
- (id)initWithClientModelId:(id)a0;

@end
