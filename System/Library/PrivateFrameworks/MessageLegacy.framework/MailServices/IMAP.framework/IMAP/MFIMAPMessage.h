@class NSArray;

@interface MFIMAPMessage : MFMailMessage {
    unsigned long long _size;
    NSArray *_customFlags;
    unsigned int _uid;
    unsigned long long _uniqueRemoteId;
}

- (void)setUid:(unsigned int)a0;
- (unsigned int)uid;
- (unsigned long long)messageSize;
- (id)messageID;
- (void)dealloc;
- (id)mailboxName;
- (BOOL)hasTemporaryUid;
- (id)_privacySafeDescription;
- (long long)compareByNumberWithMessage:(id)a0;
- (BOOL)isMessageContentsLocallyAvailable;
- (BOOL)isPartial;
- (id)originalMailboxURL;
- (id)remoteID;
- (id)remoteMailboxURL;
- (void)setHasTemporaryUid:(BOOL)a0;
- (void)setIsPartial:(BOOL)a0;
- (void)setPreferredEncoding:(unsigned int)a0;
- (void)setUniqueRemoteId:(unsigned long long)a0;
- (unsigned long long)uniqueRemoteId;
- (id)customFlags;
- (id)initWithFlags:(unsigned long long)a0 customFlags:(id)a1 size:(unsigned long long)a2 uid:(unsigned int)a3;

@end
