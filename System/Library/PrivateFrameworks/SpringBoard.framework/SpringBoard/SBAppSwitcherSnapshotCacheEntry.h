@class SBDisplayItem, SBAppLayout, UIImage, XBApplicationSnapshot;

@interface SBAppSwitcherSnapshotCacheEntry : NSObject

@property (retain, nonatomic) SBAppLayout *appLayout;
@property (retain, nonatomic) SBDisplayItem *displayItem;
@property (retain, nonatomic) XBApplicationSnapshot *snapshot;
@property (retain, nonatomic) UIImage *snapshotImage;
@property (readonly, nonatomic) long long role;
@property (nonatomic) BOOL fromFullSizeSnapshotRequest;
@property (nonatomic) BOOL needsUpdate;

- (BOOL)_matchesAppLayout:(id)a0 displayItem:(id)a1;
- (void).cxx_destruct;
- (id)description;

@end
