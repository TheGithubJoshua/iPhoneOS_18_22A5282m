@class NSString, TabBarItemLayoutInfo, TabBar, UIImage, NSUUID, NSArray;

@interface TabBarItem : NSObject <SFTabHoverPreviewItem, TabCollectionItem>

@property (weak, nonatomic) TabBar *tabBar;
@property (retain, nonatomic) TabBarItemLayoutInfo *layoutInfo;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) BOOL isPlaceholder;
@property (nonatomic) unsigned long long mediaStateIcon;
@property (retain, nonatomic) NSUUID *UUID;
@property (nonatomic) long long dragState;
@property (nonatomic, getter=isPinned) BOOL pinned;
@property (nonatomic, getter=isUnread) BOOL unread;
@property (copy, nonatomic) NSArray *shareParticipants;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)menuElementRepresentationWithSelectionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
