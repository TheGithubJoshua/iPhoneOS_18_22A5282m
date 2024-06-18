@interface SBHShortcutsSingleElement : SBHCustomIconElement

+ (id)elementKind;
+ (id)elementIdentifier;

- (id)icon:(id)a0 imageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a1;
- (unsigned long long)supportedGridSizeClassesForIcon:(id)a0;
- (id)containerBundleIdentifier;
- (id)displayName;
- (BOOL)iconSupportsConfiguration:(id)a0;
- (id)configurationStorageIdentifier;

@end
