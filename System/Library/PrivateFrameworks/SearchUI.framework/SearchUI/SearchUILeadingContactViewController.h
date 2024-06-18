@class SearchUIImageView, NUIContainerBoxView, NSString, SearchUIContactsThumbnailView;

@interface SearchUILeadingContactViewController : SearchUILeadingViewController <CNAvatarViewDelegate>

@property (retain, nonatomic) NUIContainerBoxView *view;
@property (retain, nonatomic) SearchUIContactsThumbnailView *avatarView;
@property (retain, nonatomic) SearchUIImageView *appIconBadgeView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRowModel:(id)a0;

- (void)hide;
- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (id)presentingViewControllerForAvatarView:(id)a0;
- (unsigned long long)type;
- (void)setUsesCompactWidth:(BOOL)a0;
- (id)setupView;
- (id)contactsForPreviewInteractionForAvatarView:(id)a0 suggestedKeysToFetch:(id)a1;
- (void)updateWithContacts:(id)a0;
- (void)willBeginPreviewInteractionForAvatarView:(id)a0;
- (BOOL)shouldVerticallyCenter;

@end
