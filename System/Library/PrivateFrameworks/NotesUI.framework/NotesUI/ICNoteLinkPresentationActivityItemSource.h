@class UIImage;
@protocol ICSearchIndexableNote;

@interface ICNoteLinkPresentationActivityItemSource : ICLinkPresentationActivityItemSource

@property (retain) id<ICSearchIndexableNote> note;
@property (copy, nonatomic) UIImage *thumbnailImage;

- (id)init;
- (id)iconImage;
- (void).cxx_destruct;
- (id)title;
- (id)detail;
- (id)initWithNote:(id)a0;
- (id)initWithNote:(id)a0 thumbnailImage:(id)a1;

@end
