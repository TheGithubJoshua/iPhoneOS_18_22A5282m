@class EMMailboxScope;

@interface EMSmartMailbox : EMMailbox {
    id /* block */ _predicateGenerator;
}

@property (readonly, nonatomic) EMMailboxScope *mailboxScope;
@property (readonly, nonatomic) long long smartMailboxType;

+ (id)flaggedMailboxWithMailboxScope:(id)a0;
+ (id)blueMailboxWithMailboxScope:(id)a0;
+ (id)followUpMailboxWithMailboxScope:(id)a0;
+ (id)grayMailboxWithMailboxScope:(id)a0;
+ (id)greenMailboxWithMailboxScope:(id)a0;
+ (id)hasAttachmentsMailboxWithMailboxScope:(id)a0;
+ (id)includesMeMailboxWithMailboxScope:(id)a0;
+ (id)muteThreadsMailboxWithMailboxScope:(id)a0;
+ (id)notifyThreadsMailboxWithMailboxScope:(id)a0;
+ (id)orangeMailboxWithMailboxScope:(id)a0;
+ (id)purpleMailboxWithMailboxScope:(id)a0;
+ (id)readLaterMailboxWithMailboxScope:(id)a0;
+ (id)redMailboxWithMailboxScope:(id)a0;
+ (id)sendLaterMailboxWithMailboxScope:(id)a0;
+ (id)todayMailboxWithMailboxScope:(id)a0;
+ (id)unifiedMailboxOfType:(long long)a0 name:(id)a1;
+ (id)unifiedMailboxOfType:(long long)a0 name:(id)a1 additionalPredicate:(id)a2;
+ (id)unreadMailboxWithMailboxScope:(id)a0;
+ (id)unsubscribeMailboxWithMailboxScope:(id)a0;
+ (id)vipMailboxWithMailboxScope:(id)a0;
+ (id)vipMailboxWithName:(id)a0 additionalPredicate:(id)a1;
+ (id)yellowMailboxWithMailboxScope:(id)a0;

- (id)ef_publicDescription;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)makePredicate;
- (BOOL)isSendLaterMailbox;
- (BOOL)_shouldArchiveByDefault;
- (id)initWithType:(long long)a0 mailboxType:(long long)a1 name:(id)a2 mailboxScope:(id)a3 predicateGenerator:(id /* block */)a4;
- (BOOL)isSmartMailbox;
- (BOOL)supportsSelectAll;

@end
