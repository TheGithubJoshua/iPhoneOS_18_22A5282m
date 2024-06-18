@class UIButton;

@interface CKTranscriptGroupHeaderViewController : CKTranscriptHeaderViewController

@property (readonly, nonatomic) UIButton *headerButton;

- (void)loadView;
- (void)dealloc;
- (id)_groupHeaderComposeRecipients;
- (void)_handleConversationRecipientsChanged:(id)a0;
- (BOOL)shouldInvalidateOnAddressBookChange;

@end
