@class SBHLibraryCategory;

@interface SBHLibraryAdditionalItemsIndicatorIcon : SBFolderIcon

@property (readonly, weak, nonatomic) SBHLibraryCategory *category;

- (id)initWithCategory:(id)a0;
- (BOOL)isAdditionalItemsIndicatorIcon;
- (Class)iconImageViewClassForLocation:(id)a0;
- (void).cxx_destruct;

@end
