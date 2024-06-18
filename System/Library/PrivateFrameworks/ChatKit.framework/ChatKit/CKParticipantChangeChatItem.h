@interface CKParticipantChangeChatItem : CKMultilineStampLabelChatItem

- (id)handle;
- (long long)changeType;
- (id)sender;
- (id)activeTelephonyConversationUUID;
- (id)loadTranscriptText;

@end
