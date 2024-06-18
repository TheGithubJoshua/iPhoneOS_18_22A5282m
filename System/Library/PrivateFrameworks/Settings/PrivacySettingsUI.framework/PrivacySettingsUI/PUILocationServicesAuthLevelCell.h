@class NSURL, PUILocationUsageMixin;

@interface PUILocationServicesAuthLevelCell : PSTableCell {
    NSURL *_bundleURL;
    BOOL _isWebApp;
}

@property (readonly, nonatomic) PUILocationUsageMixin *location;
@property (readonly, nonatomic) unsigned long long authLevel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (BOOL)canReload;
- (id)getLazyIcon;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)getLazyIconID;

@end
