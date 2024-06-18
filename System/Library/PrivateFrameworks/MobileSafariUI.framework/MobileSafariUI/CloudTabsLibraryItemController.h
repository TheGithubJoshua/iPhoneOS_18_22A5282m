@class UIViewController;

@interface CloudTabsLibraryItemController : LibraryItemController {
    UIViewController *_viewController;
}

- (BOOL)isSelected;
- (BOOL)isHidden;
- (void).cxx_destruct;
- (id)viewController;
- (void)updateListContentConfiguration:(id)a0;
- (void)didSelectItem;

@end
