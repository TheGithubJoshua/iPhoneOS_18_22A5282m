@class SBIconListModel;

@interface SBHPageManagementIcon : SBLeafIcon

@property (readonly, nonatomic) SBIconListModel *listModel;

- (BOOL)canBeReceivedByIcon;
- (void).cxx_destruct;
- (BOOL)canBeAddedToMultiItemDrag;
- (BOOL)canReceiveGrabbedIcon;
- (BOOL)canBeAddedToSubfolder;
- (id)initWithListModel:(id)a0;

@end
