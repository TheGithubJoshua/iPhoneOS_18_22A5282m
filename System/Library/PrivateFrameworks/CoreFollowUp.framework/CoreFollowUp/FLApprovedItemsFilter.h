@class NSSet;

@interface FLApprovedItemsFilter : NSObject {
    NSSet *_approvedItemIdentifiers;
    NSSet *_approvedClientIdentifiers;
}

+ (id)sharedFilter;

- (BOOL)overrideGroupRestrictionsForItem:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)approvalStatusForItem:(id)a0;

@end
