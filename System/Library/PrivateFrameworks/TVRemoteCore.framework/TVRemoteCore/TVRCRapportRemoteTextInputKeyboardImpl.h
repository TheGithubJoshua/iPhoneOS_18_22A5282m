@class RTIInputSystemSourceSession, TVRCKeyboardAttributes, TVRCRPCompanionLinkClientWrapper, NSString, TVRXKeyboardController;

@interface TVRCRapportRemoteTextInputKeyboardImpl : NSObject <RTIInputSystemSessionDelegate, RTIInputSystemPayloadDelegate, TVRXKeyboardImpl>

@property (nonatomic) BOOL editing;
@property (retain, nonatomic) RTIInputSystemSourceSession *currentSession;
@property (retain, nonatomic) TVRCKeyboardAttributes *currentAttributes;
@property (weak, nonatomic) TVRXKeyboardController *keyboardController;
@property (retain, nonatomic) TVRCRPCompanionLinkClientWrapper *companionLinkWrapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attributes;
- (void)inputSessionDidDie:(id)a0;
- (id)text;
- (void).cxx_destruct;
- (BOOL)isEditing;
- (void)handleTextActionPayload:(id)a0;
- (void)setText:(id)a0;
- (void)inputSessionDidBegin:(id)a0;
- (void)inputSessionDidEnd:(id)a0;
- (void)_receivedInputSourceSession:(id)a0;
- (void)_stopObservingTelevisionEditingSession;
- (void)sendReturnKey;
- (void)setTextActionPayload:(id)a0;

@end
