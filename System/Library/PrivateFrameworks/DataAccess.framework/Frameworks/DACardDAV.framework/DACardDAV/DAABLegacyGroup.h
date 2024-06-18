@class NSString;

@interface DAABLegacyGroup : NSObject <DAGroup>

@property (readonly, nonatomic) void *group;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)legacyIdentifier;
- (BOOL)isContainer;
- (void)setETag:(id)a0;
- (id)eTag;
- (id)externalIdentifier;
- (BOOL)isGroup;
- (void)dealloc;
- (void)setExternalIdentifier:(id)a0;
- (id)initWithGroup:(void *)a0;
- (BOOL)isContact;
- (id)externalUUID;
- (void)setExternalUUID:(id)a0;
- (void)markForDeletion;
- (BOOL)isAccount;
- (void)updateSaveRequest:(id)a0;
- (id)asGroup;
- (void *)asABGroup;

@end
