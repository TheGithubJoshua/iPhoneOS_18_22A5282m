@interface PUAlbumListViewControllerPadSpec : PUAlbumListViewControllerSpec

- (struct CGSize { double x0; double x1; })imageSizeForLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)configureStackViewWithGridStyle:(id)a0;
- (unsigned long long)stackViewStyle;
- (struct UIOffset { double x0; double x1; })stackOffset;
- (struct CGSize { double x0; double x1; })imageSize;
- (unsigned long long)folderStackViewStyle;
- (struct CGSize { double x0; double x1; })stackSizeForLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (BOOL)shouldShowSectionHeaders;
- (double)sectionHeaderHeight;
- (BOOL)showsDeleteButtonOnCellContentView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })stackPerspectiveInsets;
- (double)posterSquareCornerRadius;
- (double)sectionFooterHeight;
- (struct CGSize { double x0; double x1; })cellSizeForStackSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })stackSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsetsForLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (struct UIOffset { double x0; double x1; })stackPerspectiveOffset;
- (double)posterSubitemCornerRadius;
- (void)configureGridLayout:(id)a0 forLayoutReferenceSize:(struct CGSize { double x0; double x1; })a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (long long)cellContentViewLayout;
- (long long)albumDeletionWarningStyle;
- (id)albumViewControllerSpec;
- (BOOL)canShowVirtualCollections;
- (long long)collageImageContentMode;
- (struct CGSize { double x0; double x1; })collageImageSize;
- (double)collageSpacing;
- (id)emptyStackPhotoDecoration;
- (id)feedViewControllerSpec;
- (id)gridViewControllerSpec;
- (id)panoramaViewControllerSpec;
- (BOOL)shouldUseCollageForCloudFeedPlaceholder;
- (id)stackPhotoDecoration;
- (BOOL)usesStackTransitionToGrid;

@end
