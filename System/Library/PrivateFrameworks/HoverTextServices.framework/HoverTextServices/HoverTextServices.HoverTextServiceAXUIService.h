@interface HoverTextServices.HoverTextServiceAXUIService : NSObject <AXUIClientDelegate> {
    void /* unknown type, empty encoding */ hoverTextEnabled;
    void /* unknown type, empty encoding */ _client;
}

- (id)userInterfaceClient:(id)a0 accessQueueForProcessingMessageWithIdentifier:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)a0;

@end
