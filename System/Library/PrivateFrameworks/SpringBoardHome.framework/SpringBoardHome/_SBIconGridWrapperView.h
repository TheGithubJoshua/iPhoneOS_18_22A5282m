@class _SBFolderPageElement, SBFolderIconImageView;

@interface _SBIconGridWrapperView : UIImageView

@property (retain, nonatomic) _SBFolderPageElement *element;
@property (weak, nonatomic) SBFolderIconImageView *folderIconImageView;

- (void)reposition;
- (void).cxx_destruct;
- (void)positionAtRow:(unsigned long long)a0;

@end
