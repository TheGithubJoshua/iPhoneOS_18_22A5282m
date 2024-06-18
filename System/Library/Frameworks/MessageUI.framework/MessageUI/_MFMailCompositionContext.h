@class NSURL, CKContainerSetupInfo, NSDate, MFAttachmentComposeManager, MFMailMessage, MFComposeWebView, MFMessageLoadingContext, MFMailCompositionValues, NSString, EFFuture, MFAttachmentManager, MFAttachmentCompositionContext, NSMutableArray, EMMessageList, NSArray, NSData, CKShare, EMMessage;
@protocol EFScheduler, _MFMailCompositionContextDelegate;

@interface _MFMailCompositionContext : NSObject <EMCollectionChangeObserver, MFMailCompositionValuesProtocol, MFMailCompositionAdditionalDonating, MFMailCompositionShareSheetRecipients> {
    id _originalContent;
    MFAttachmentComposeManager *_attachmentManager;
    BOOL _registeredForDraw;
    EMMessageList *_messageList;
}

@property (retain, nonatomic) MFMailCompositionValues *compositionValues;
@property MFComposeWebView *composeWebView;
@property (retain, nonatomic) id<EFScheduler> observationScheduler;
@property (retain, nonatomic) EMMessage *originalMessage;
@property (readonly, nonatomic) NSString *draftSubject;
@property (retain, nonatomic) NSString *attachmentToMarkupContentID;
@property (nonatomic) BOOL loadRest;
@property (nonatomic) BOOL includeAttachmentsWhenAdding;
@property (readonly, nonatomic) BOOL isLoadingMessageData;
@property (retain, nonatomic) NSArray *originalContent;
@property (retain, nonatomic) MFMessageLoadingContext *loadingContext;
@property (nonatomic) BOOL originatingFromAttachmentMarkup;
@property (copy, nonatomic) NSString *contentVariationAttachmentCID;
@property (readonly, nonatomic) MFMailMessage *legacyMessage;
@property (copy, nonatomic) NSString *originatingBundleID;
@property (retain, nonatomic) EFFuture *rawContentRepresentation;
@property (readonly, nonatomic) MFAttachmentCompositionContext *attachmentContext;
@property (readonly, nonatomic) MFAttachmentManager *attachmentManager;
@property (readonly, nonatomic) NSString *contextID;
@property (weak, nonatomic) id<_MFMailCompositionContextDelegate> delegate;
@property (retain, nonatomic) NSString *remoteDelegateIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long composeType;
@property (retain, nonatomic) NSURL *mailtoURL;
@property (copy, nonatomic) NSString *autosaveIdentifier;
@property (copy, nonatomic) NSData *serializedMessageObjectID;
@property (copy, nonatomic) NSData *serializedMailboxObjectID;
@property (copy, nonatomic) NSString *preferredSendingEmailAddress;
@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSString *hideMyEmailFrom;
@property (copy, nonatomic) NSString *from;
@property (copy, nonatomic) NSArray *toRecipients;
@property (copy, nonatomic) NSArray *ccRecipients;
@property (copy, nonatomic) NSArray *bccRecipients;
@property (copy, nonatomic) NSString *messageBody;
@property (nonatomic) BOOL isHTML;
@property (nonatomic) BOOL includeAttachments;
@property (nonatomic) int sourceAccountManagement;
@property (nonatomic) BOOL isUsingDefaultAccount;
@property (nonatomic) BOOL showKeyboardImmediately;
@property (nonatomic) BOOL showContentImmediately;
@property (nonatomic) BOOL prefersFirstLineSelection;
@property (nonatomic) unsigned long long caretPosition;
@property (copy, nonatomic) NSMutableArray *contentVariations;
@property (nonatomic) long long defaultContentVariationIndex;
@property (retain, nonatomic) NSMutableArray *deferredAttachments;
@property (copy, nonatomic) NSDate *sendLaterDate;
@property (nonatomic) unsigned long long sendLaterContext;
@property (copy, nonatomic) CKShare *ckShare;
@property (copy, nonatomic) CKContainerSetupInfo *ckContainerSetupInfo;
@property (nonatomic) long long ckSharePermissionType;
@property (nonatomic) BOOL ckShareAllowOthersToInvite;
@property (copy, nonatomic) NSArray *UTITypes;
@property (copy, nonatomic) NSArray *photoIDs;
@property (copy, nonatomic) NSArray *cloudPhotoIDs;
@property (copy, nonatomic) NSArray *contentText;
@property (copy, nonatomic) NSArray *contentURLs;
@property (copy, nonatomic) NSString *shareSheetSessionID;

+ (id)log;
+ (id)processMessageBody:(id)a0 asHTML:(BOOL)a1;

- (id)init;
- (id)attachments;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)addAttachmentData:(id)a0 mimeType:(id)a1 fileName:(id)a2;
- (void)setMessageBody:(id)a0 isHTML:(BOOL)a1;
- (void)removeAttachment:(id)a0;
- (void)collection:(id)a0 addedItemIDs:(id)a1 before:(id)a2;
- (id)initWithComposeType:(long long)a0 RFC822Data:(id)a1;
- (id)initWithHandoffActivityPayload:(id)a0;
- (void)collection:(id)a0 movedItemIDs:(id)a1 before:(id)a2;
- (id)initWithOpenMailComposeContext:(id)a0;
- (void)_loadMessageWithAutosaveIdentifier:(id)a0;
- (void)_loadMessageWithObjectID:(id)a0 mailboxObjectID:(id)a1 messageRepository:(id)a2 mailboxProvider:(id)a3;
- (id)addAttachmentData:(id)a0 mimeType:(id)a1 fileName:(id)a2 contentID:(id)a3;
- (id)addAttachmentDataItemProvider:(id)a0 mimeType:(id)a1 filename:(id)a2 contentID:(id)a3;
- (void)collection:(id)a0 addedItemIDs:(id)a1 after:(id)a2;
- (void)collection:(id)a0 changedItemIDs:(id)a1;
- (void)collection:(id)a0 deletedItemIDs:(id)a1;
- (void)collection:(id)a0 movedItemIDs:(id)a1 after:(id)a2;
- (void)collection:(id)a0 replacedExistingItemID:(id)a1 withNewItemID:(id)a2;
- (BOOL)hasDuetDonationContext;
- (id)initDraftRestoreOfMessage:(id)a0 legacyMessage:(id)a1;
- (id)initForwardOfMessage:(id)a0 legacyMessage:(id)a1;
- (id)initForwardOfMessage:(id)a0 legacyMessage:(id)a1 isEML:(BOOL)a2;
- (id)initOutboxRestoreOfMessage:(id)a0 legacyMessage:(id)a1;
- (id)initRecoveredAutosavedMessageWithIdentifier:(id)a0 draftSubject:(id)a1;
- (id)initRecoveredAutosavedMessageWithIdentifier:(id)a0 draftSubject:(id)a1 composeType:(long long)a2;
- (id)initReplyAllToMessage:(id)a0 legacyMessage:(id)a1;
- (id)initReplyAllToMessage:(id)a0 legacyMessage:(id)a1 isEML:(BOOL)a2;
- (id)initReplyToMessage:(id)a0 legacyMessage:(id)a1;
- (id)initReplyToMessage:(id)a0 legacyMessage:(id)a1 isEML:(BOOL)a2;
- (id)initSendAgainDraftOfMessage:(id)a0 legacyMessage:(id)a1;
- (id)initWithComposeType:(long long)a0;
- (id)initWithComposeType:(long long)a0 objectID:(id)a1 mailboxID:(id)a2 subject:(id)a3 autosaveID:(id)a4 messageRepository:(id)a5 mailboxProvider:(id)a6;
- (id)initWithComposeType:(long long)a0 originalMessage:(id)a1 legacyMessage:(id)a2;
- (id)initWithComposeType:(long long)a0 originalMessage:(id)a1 legacyMessage:(id)a2 isEML:(BOOL)a3;
- (id)initWithCompositionValueRepresentation:(id)a0 hostApplicationBundleIdentifier:(id)a1;
- (id)initWithCompositionValues:(id)a0 hostApplicationBundleIdentifier:(id)a1;
- (id)initWithCompositionValues:(id)a0 hostApplicationBundleIdentifier:(id)a1 messageRepository:(id)a2 mailboxProvider:(id)a3;
- (id)initWithURL:(id)a0 composeType:(long long)a1 originalMessage:(id)a2 legacyMessage:(id)a3;
- (id)initWithURL:(id)a0 composeType:(long long)a1 originalMessage:(id)a2 legacyMessage:(id)a3 isEML:(BOOL)a4;
- (void)insertAttachmentWithData:(id)a0 fileName:(id)a1 mimeType:(id)a2 contentID:(id)a3;
- (void)insertAttachmentWithURL:(id)a0;
- (void)insertDeferredAttachmentsIntoComposeWebView:(id)a0;
- (void)recordPasteboardAttachmentsForURLs:(id)a0;
- (void)recordUndoAttachmentsForURLs:(id)a0;
- (void)switchToReplyAllWithDelegate:(id)a0;
- (void)switchToReplyWithDelegate:(id)a0;

@end