@interface PhotosUIApps.PUXStoryColorGradeEditorContentLayout : PXGDecoratingLayout <PXGSelectionDecorationSource> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ overlayLayout;
}

- (unsigned long long)selectionDecorationAdditionsInLayout:(id)a0;
- (long long)selectionDecorationStyleInLayout:(id)a0;
- (id)selectedSpriteIndexesInLayout:(id)a0;
- (long long)overallSelectionOrderAtSpriteIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)init;
- (id)initWithDecoratedLayout:(id)a0;
- (void).cxx_destruct;

@end
