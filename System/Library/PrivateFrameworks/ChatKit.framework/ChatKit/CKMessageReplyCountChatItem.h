@interface CKMessageReplyCountChatItem : CKMessageStatusChatItem

@property (readonly, nonatomic) unsigned long long replyCount;

- (unsigned long long)layoutType;
- (Class)cellClass;
- (long long)buttonType;
- (id)_loadTranscriptButtonTextForReplyCountButtonType;
- (id)loadTranscriptButtonText;
- (BOOL)shouldHideDuringDarkFSM;
- (char)transcriptOrientation;

@end
