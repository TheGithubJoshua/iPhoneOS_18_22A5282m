@class IMBalloonPluginDataSource, LPLinkMetadata, LPLinkView;

@interface CKRichLinkReplyPreviewBalloonView : CKColoredBalloonView

@property (retain, nonatomic) LPLinkView *linkView;
@property (retain, nonatomic) LPLinkMetadata *linkMetadata;
@property (retain, nonatomic) IMBalloonPluginDataSource *dataSource;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (id)description;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configureForTranscriptPlugin:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;

@end
