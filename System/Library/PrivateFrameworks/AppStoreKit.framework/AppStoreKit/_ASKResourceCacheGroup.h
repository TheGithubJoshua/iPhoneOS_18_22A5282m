@class NSMutableArray;

@interface _ASKResourceCacheGroup : NSObject {
    NSMutableArray *_memberContents;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _guard;
}

@property BOOL hasMultipleMembers;

- (id)init;
- (id)makeMemberContents;
- (void).cxx_destruct;
- (void)discardMemberContents:(id)a0;
- (id)onlyMemberContents;
- (id)snapshotMemberContents;

@end
