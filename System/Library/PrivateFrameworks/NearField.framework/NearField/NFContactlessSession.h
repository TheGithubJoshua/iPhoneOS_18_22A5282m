@class NFApplet, NSString, NSDictionary;
@protocol NFContactlessSessionDelegate;

@interface NFContactlessSession : NFSession <NFContactlessSessionCallbacks> {
    NSDictionary *_appletsById;
    id<NFContactlessSessionDelegate> _delegate;
    BOOL _fieldNotificationSent;
}

@property id<NFContactlessSessionDelegate> delegate;
@property (readonly, retain) NFApplet *activeApplet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endSession;
- (id)allApplets;
- (void).cxx_destruct;
- (id)appletWithIdentifier:(id)a0;
- (void)didEndUnexpectedly;
- (void)endSessionWithCompletion:(id /* block */)a0;
- (BOOL)stopCardEmulation;
- (BOOL)stopCardEmulation:(id *)a0;
- (void)didDetectField:(BOOL)a0;
- (void)didDetectFieldNotification:(id)a0;
- (void)didFelicaStateChange:(id)a0;
- (void)didSelectApplet:(id)a0;
- (void)didStartSession:(id)a0;
- (BOOL)setActiveApplet:(id)a0;
- (BOOL)setActiveApplet:(id)a0 error:(id *)a1;
- (BOOL)startCardEmulation;
- (BOOL)startCardEmulation:(id *)a0;

@end
