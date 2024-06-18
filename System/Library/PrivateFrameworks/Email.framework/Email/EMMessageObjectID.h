@class EMMessageCollectionItemID, EMMailboxScope;

@interface EMMessageObjectID : EMObjectID

@property (readonly, nonatomic) EMMessageCollectionItemID *collectionItemID;
@property (readonly, nonatomic) long long globalMessageID;
@property (readonly, nonatomic) EMMailboxScope *mailboxScope;

+ (BOOL)supportsSecureCoding;
+ (id)new;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCollectionItemID:(id)a0 predicate:(id)a1 mailboxTypeResolver:(id)a2;
- (id)initWithCollectionItemID:(id)a0 mailboxScope:(id)a1;
- (id)initWithGlobalMessageID:(long long)a0 mailboxScope:(id)a1;

@end
