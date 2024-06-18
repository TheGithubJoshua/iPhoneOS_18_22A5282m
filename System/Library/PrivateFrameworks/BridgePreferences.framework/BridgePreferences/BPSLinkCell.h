@interface BPSLinkCell : BPSBadgedTableCell

+ (id)_iconCache;
+ (double)scale;

- (void)forceSynchronousIconLoadOnNextIconLoad;
- (id)blankIcon;
- (id)getLazyIcon;

@end
