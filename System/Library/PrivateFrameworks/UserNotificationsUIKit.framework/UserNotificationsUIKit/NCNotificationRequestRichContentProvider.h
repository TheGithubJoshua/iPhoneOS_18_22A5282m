@class UIImage;

@interface NCNotificationRequestRichContentProvider : NCNotificationRequestCoalescingContentProvider {
    UIImage *_cachedAttachmentImage;
}

@property (nonatomic, getter=isCachedAttachmentedImageFeatured) BOOL cachedAttachmentImageFeatured;
@property (nonatomic, getter=isIconVisible) BOOL iconVisible;
@property (readonly, nonatomic) BOOL hasAttachmentImage;
@property (readonly, nonatomic) BOOL hasLoadedRichAttachmentImage;

+ (id)featuredImageFetchQueue;

- (void)fetchRichAttachmentImageIsFeatured:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)thumbnail;
- (BOOL)_shouldShowContent;

@end
