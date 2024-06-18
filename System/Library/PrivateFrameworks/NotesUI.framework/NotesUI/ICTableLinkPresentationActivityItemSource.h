@class ICAttachment;

@interface ICTableLinkPresentationActivityItemSource : ICLinkPresentationActivityItemSource

@property (retain) ICAttachment *attachment;

- (id)init;
- (void).cxx_destruct;
- (id)title;
- (id)detail;
- (id)initWithAttachment:(id)a0;

@end
