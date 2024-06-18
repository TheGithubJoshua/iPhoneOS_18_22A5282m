@interface CKLocationShareActionChatItem : CKMultilineStampLabelChatItem

- (id)handle;
- (long long)actionType;
- (long long)direction;
- (id)sender;
- (id)loadTranscriptText;

@end
