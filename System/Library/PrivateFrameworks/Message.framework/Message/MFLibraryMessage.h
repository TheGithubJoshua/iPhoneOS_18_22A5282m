@class MFMailboxUid, NSURL, ECSubject, NSDate, NSDictionary, MFMessageHeaders, ECMessageFlags, NSString, MailAccount, EMFollowUp, ECAngleBracketIDHash, NSSet, NSArray, NSData, MFLibraryStore, EMReadLater, NSUUID;
@protocol EDAccount, ECMimeBody;

@interface MFLibraryMessage : MFMailMessage <EDPersistedMessage, MFIMAPMessage> {
    long long _libraryID;
    NSString *_remoteID;
    unsigned int _uid;
    unsigned long long _uniqueRemoteId;
    unsigned long long _size;
    long long _mailboxID;
    long long _originalMailboxID;
    NSString *_messageID;
    _Atomic unsigned long long _conversationFlags;
    _Atomic long long _senderBucket;
    _Atomic long long _unsubscribeType;
}

@property (readonly, nonatomic) MFMailboxUid *mailbox;
@property (readonly, nonatomic) MailAccount *account;
@property (readonly, nonatomic) MFMessageHeaders *headers;
@property (copy, nonatomic) NSArray *references;
@property (retain, nonatomic) MFLibraryStore *messageStore;
@property (copy, nonatomic) NSString *remoteID;
@property (copy) NSArray *remoteContentLinks;
@property (nonatomic) long long senderBucket;
@property (retain, nonatomic) NSURL *brandIndicatorLocation;
@property (readonly, nonatomic) long long libraryID;
@property (nonatomic) long long mailboxID;
@property (nonatomic) long long originalMailboxID;
@property (nonatomic) unsigned int uid;
@property (nonatomic) unsigned long long uniqueRemoteId;
@property (nonatomic) BOOL isPartial;
@property (readonly, copy, nonatomic) NSString *persistentID;
@property (readonly, copy, nonatomic) NSString *summary;
@property (readonly, nonatomic) long long persistedMessageID;
@property (readonly) unsigned long long conversationFlags;
@property (retain) NSDate *displayDate;
@property (retain) EMReadLater *readLater;
@property (retain) NSDate *sendLaterDate;
@property (readonly, nonatomic) id<EDAccount> accountForSender;
@property (retain, nonatomic) EMFollowUp *followUp;
@property (readonly, nonatomic) long long unsubscribeType;
@property (readonly, nonatomic) NSURL *basePath;
@property (readonly, nonatomic) long long globalMessageID;
@property (readonly, copy, nonatomic) ECSubject *subjectIfAvailable;
@property (readonly, nonatomic) unsigned long long fileSize;
@property (readonly) NSDate *date;
@property (readonly, nonatomic) NSData *brandIndicator;
@property (readonly, copy, nonatomic) NSDictionary *dataDetectionAttributes;
@property (readonly, copy) NSArray *bccIfAvailable;
@property (readonly, copy, nonatomic) ECSubject *subject;
@property (readonly, copy, nonatomic) NSArray *from;
@property (readonly, copy, nonatomic) NSArray *to;
@property (readonly, copy, nonatomic) NSArray *cc;
@property (readonly, copy, nonatomic) NSArray *bcc;
@property (readonly, copy, nonatomic) NSArray *senders;
@property (readonly, nonatomic) NSDate *dateReceived;
@property (readonly, nonatomic) NSDate *dateSent;
@property (readonly, copy, nonatomic) NSArray *listUnsubscribe;
@property (readonly, nonatomic) long long conversationID;
@property (readonly, nonatomic) BOOL isServerSearchResult;
@property (readonly, nonatomic) ECMessageFlags *flags;
@property (readonly, nonatomic, getter=isPartOfExistingThread) BOOL partOfExistingThread;
@property (readonly, nonatomic) id<ECMimeBody> mimeBody;
@property (readonly, copy, nonatomic) NSDictionary *headersDictionary;
@property (readonly, copy, nonatomic) NSString *messageIDHeader;
@property (readonly, nonatomic) ECAngleBracketIDHash *messageIDHeaderHash;
@property (readonly) NSSet *labels;
@property (readonly, copy, nonatomic) NSUUID *documentID;
@property (readonly, nonatomic) unsigned long long numberOfAttachments;
@property (readonly, nonatomic) ECAngleBracketIDHash *listIDHash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (id)messageWithLibraryID:(long long)a0;

- (void)commit;
- (id)library;
- (void)setSummary:(id)a0;
- (id)path;
- (void)setFlags:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)messageSize;
- (id)messageID;
- (void)setMessageSize:(unsigned long long)a0;
- (id)messageStore;
- (id)mailbox;
- (id)mailboxName;
- (id)account;
- (void)markAsForwarded;
- (BOOL)hasTemporaryUid;
- (void)markAsNotViewed;
- (void)_forceLoadOfMessageSummaryFromProtectedStore;
- (id)_privacySafeDescription;
- (void)_updateUID;
- (long long)compareByUidWithMessage:(id)a0;
- (id)dataConsumerForMimePart:(id)a0;
- (id)dataPathForMimePart:(id)a0;
- (id)downloadedMessageData;
- (id)initWithLibraryID:(long long)a0;
- (BOOL)isLibraryMessage;
- (BOOL)isMessageContentsLocallyAvailable;
- (void)loadCachedHeaderValuesFromHeaders:(id)a0;
- (void)markAsFlagged;
- (void)markAsNotFlagged;
- (void)markAsReplied;
- (void)markAsViewed;
- (id)originalMailboxURL;
- (id)preferredAccountToUseForReplying;
- (void)setBrandIndicatorLocation:(id)a0 andData:(id)a1;
- (void)setConversationFlags:(unsigned long long)a0;
- (void)setDataDetectionAttributes;
- (void)setHasTemporaryUid:(BOOL)a0;
- (void)setMessageData:(id)a0 isPartial:(BOOL)a1;
- (void)setMessageFlags:(unsigned long long)a0;
- (void)setMessageFlagsWithoutCommitting:(unsigned long long)a0;
- (void)setMutableInfoFromMessage:(id)a0;
- (void)setPreferredEncoding:(unsigned int)a0;
- (void)setReadLaterDate:(id)a0;
- (void)setRemoteID:(id)a0 flags:(unsigned long long)a1 size:(unsigned int)a2 mailboxID:(long long)a3 originalMailboxID:(long long)a4;
- (void)setUnsubscribeType:(long long)a0;
- (id)storageLocationForAttachment:(id)a0;

@end
