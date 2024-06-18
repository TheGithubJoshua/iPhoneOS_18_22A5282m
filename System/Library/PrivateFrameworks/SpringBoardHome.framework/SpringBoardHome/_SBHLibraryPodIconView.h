@interface _SBHLibraryPodIconView : SBIconView

+ (BOOL)supportsPreviewInteraction;
+ (BOOL)supportsDragInteraction;
+ (BOOL)supportsCursorInteraction;
+ (BOOL)supportsTapGesture;

- (id)createNewIconLabelViewFactory;

@end
