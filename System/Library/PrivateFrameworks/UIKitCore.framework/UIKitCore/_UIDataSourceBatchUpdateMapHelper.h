@class NSArray, _UIDataSourceSnapshotter;

@interface _UIDataSourceBatchUpdateMapHelper : NSObject {
    _UIDataSourceSnapshotter *_initialSnapshot;
    _UIDataSourceSnapshotter *_finalSnapshot;
    NSArray *_updateItems;
    struct _UIDataSourceUpdateMaps { unsigned int oldSectionCount; unsigned int newSectionCount; unsigned int oldGlobalItemCount; unsigned int newGlobalItemCount; unsigned int *oldSectionMap; unsigned int *newSectionMap; unsigned int *oldGlobalItemMap; unsigned int *newGlobalItemMap; BOOL updatesAreInvalid; } _updateMaps;
}

- (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end
