@class UIWebClip, NSURL, CPSWebClip, SBHBookmark;

@interface SBHBookmarkIcon : SBLeafIcon

@property (retain, nonatomic) SBHBookmark *bookmark;
@property (readonly, nonatomic) UIWebClip *webClip;
@property (readonly, nonatomic) CPSWebClip *appClip;
@property (readonly, nonatomic) NSURL *launchURL;

- (void).cxx_destruct;
- (id)initWithBookmark:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)canBeAddedToMultiItemDrag;
- (BOOL)canBeAddedToSubfolder;
- (id)_sbhIconLibraryOverrideCollationSectionTitle;
- (id)draggingUserActivity;
- (BOOL)isAppClipIcon;
- (BOOL)isBookmarkIcon;
- (id)uninstallAlertBody;
- (id)uninstallAlertTitle;

@end
