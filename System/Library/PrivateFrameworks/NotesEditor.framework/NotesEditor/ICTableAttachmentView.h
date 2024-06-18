@class NSMutableArray;

@interface ICTableAttachmentView : ICAttachmentView

@property (retain, nonatomic) NSMutableArray *outsideViews;

- (void).cxx_destruct;
- (void)updateHighlights;
- (void)setupEventHandling;
- (void)sharedInit:(BOOL)a0;

@end
