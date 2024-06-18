@interface CKMessageActionChatItem : CKMultilineStampLabelChatItem

- (id)handle;
- (long long)actionType;
- (id)sender;
- (id)loadTranscriptText;

@end
