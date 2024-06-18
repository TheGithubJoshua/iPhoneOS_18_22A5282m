@interface PUAlbumListViewControllerCommonPhoneSpec : PUAlbumListViewControllerSpec

- (struct UIOffset { double x0; double x1; })stackOffset;
- (double)sectionHeaderHeight;
- (BOOL)showsDeleteButtonOnCellContentView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })stackPerspectiveInsets;
- (double)posterSquareCornerRadius;
- (double)sectionFooterHeight;
- (struct UIOffset { double x0; double x1; })stackPerspectiveOffset;
- (double)posterSubitemCornerRadius;
- (long long)albumDeletionWarningStyle;
- (id)albumViewControllerSpec;
- (id)emptyStackPhotoDecoration;
- (id)feedViewControllerSpec;
- (id)gridViewControllerSpec;
- (id)panoramaViewControllerSpec;
- (BOOL)shouldUseCollageForCloudFeedPlaceholder;
- (id)stackPhotoDecoration;

@end
