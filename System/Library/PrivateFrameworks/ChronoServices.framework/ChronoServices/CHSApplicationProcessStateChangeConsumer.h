@class CHSChronoServicesConnection;

@interface CHSApplicationProcessStateChangeConsumer : NSObject {
    CHSChronoServicesConnection *_connection;
}

- (id)init;
- (id)initWithConnection:(id)a0;
- (void)applicationWithBundleIdentifierEnteredForeground:(id)a0;
- (void).cxx_destruct;

@end
