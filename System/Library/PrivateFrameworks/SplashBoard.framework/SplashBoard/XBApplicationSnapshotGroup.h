@class NSString, XBSnapshotContainerIdentity, NSMutableSet;

@interface XBApplicationSnapshotGroup : NSObject <NSSecureCoding, BSDescriptionProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) XBSnapshotContainerIdentity *containerIdentity;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *containerPath;
@property (readonly, copy, nonatomic) NSMutableSet *snapshots;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_validateWithContainerIdentity:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_manifestQueueDecode_setStore:(id)a0;
- (id)descriptionForStateCaptureWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)containerPath;
- (id)_initWithIdentifier:(id)a0 containerIdentity:(id)a1;
- (void)_commonInit;
- (id)succinctDescription;
- (BOOL)removeSnapshot:(id)a0;
- (void)addSnapshot:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_invalidate;

@end
