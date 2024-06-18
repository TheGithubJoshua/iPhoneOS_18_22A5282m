@class NSString, CNMutableGroup;

@interface DAContactsGroup : NSObject <DAGroup>

@property (readonly, nonatomic) CNMutableGroup *group;
@property (nonatomic) BOOL markedForDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)legacyIdentifier;
- (BOOL)isContainer;
- (void)setETag:(id)a0;
- (id)eTag;
- (void).cxx_destruct;
- (id)externalIdentifier;
- (BOOL)isGroup;
- (void)setExternalIdentifier:(id)a0;
- (id)initWithGroup:(id)a0;
- (BOOL)isContact;
- (id)externalUUID;
- (void)setExternalUUID:(id)a0;
- (void)markForDeletion;
- (BOOL)isAccount;
- (void)updateSaveRequest:(id)a0;
- (id)asGroup;
- (void *)asABGroup;

@end
