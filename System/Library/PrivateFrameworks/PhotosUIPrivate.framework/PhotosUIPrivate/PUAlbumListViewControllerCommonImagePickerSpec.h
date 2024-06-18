@interface PUAlbumListViewControllerCommonImagePickerSpec : PUAlbumListViewControllerCommonPhoneSpec

- (void)configureStackViewWithGridStyle:(id)a0;
- (unsigned long long)stackViewStyle;
- (struct CGSize { double x0; double x1; })imageSize;
- (unsigned long long)folderStackViewStyle;
- (double)sectionHeaderHeight;
- (BOOL)showsDeleteButtonOnCellContentView;
- (double)sectionFooterHeight;
- (BOOL)shouldUseTableView;
- (struct CGSize { double x0; double x1; })stackSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsetsForLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (long long)cellContentViewLayout;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldUseCollageForCloudFeedPlaceholder;

@end
