@class NSMutableArray;

@interface BCSShareActionPickerItem : BCSActionPickerItem {
    NSMutableArray *_itemsToShare;
}

- (id)icon;
- (id)initWithAction:(id)a0;
- (void).cxx_destruct;
- (id)label;
- (BOOL)canGroupInSubmenu;
- (void)performActionWithFBOptions:(id)a0;

@end
