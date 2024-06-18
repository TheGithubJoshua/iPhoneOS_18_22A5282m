@class MFSMTPConnection;

@interface MFSMTPDelivery : MFMailDelivery {
    MFSMTPConnection *_connection;
}

- (void)_openConnection;
- (void)setAccount:(id)a0;
- (void)dealloc;
- (id)deliverMessageData:(id)a0 toRecipients:(id)a1;
- (Class)deliveryClass;

@end
