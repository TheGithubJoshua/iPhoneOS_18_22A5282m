@class NSMutableDictionary;

@interface PXFileBackedAssetActionManager : PXAssetActionManager

@property (readonly, nonatomic) NSMutableDictionary *performerClassByType;

- (id)initWithSelectionManager:(id)a0;
- (id)actionPerformerForActionType:(id)a0;
- (BOOL)canPerformActionType:(id)a0;
- (BOOL)supportsActionType:(id)a0;
- (void).cxx_destruct;
- (id)_selectionSnapshotForPerformerClass:(Class)a0;

@end
