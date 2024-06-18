@class NSArray;

@interface TUPrivacyManager : NSObject

@property (class, readonly, nonatomic) TUPrivacyManager *sharedPrivacyManager;

@property (readonly, copy, nonatomic) NSArray *privacyRules;

- (void)setBlockIncomingCommunication:(BOOL)a0 forBusinessID:(id)a1;
- (id)init;
- (void)removeRule:(id)a0;
- (BOOL)isIncomingCommunicationBlockedForHandle:(id)a0;
- (BOOL)isIncomingCommunicationBlockedForBusinessID:(id)a0;
- (void)_handleBlockListChanged:(id)a0;
- (void)setBlockIncomingCommunication:(BOOL)a0 forEmailAddress:(id)a1;
- (BOOL)isIncomingCommunicationBlockedForEmailAddress:(id)a0;
- (id)allBlacklistRules;
- (BOOL)isIncomingCommunicationBlockedForPhoneNumber:(id)a0;
- (void)dealloc;
- (void)addRule:(id)a0;
- (void)setBlockIncomingCommunication:(BOOL)a0 forPhoneNumber:(id)a1;

@end
