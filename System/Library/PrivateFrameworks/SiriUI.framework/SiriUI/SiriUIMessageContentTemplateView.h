@protocol SiriUIMessageContentTemplateModel;

@interface SiriUIMessageContentTemplateView : SiriUIBaseTemplateView {
    id _textBalloonView;
}

@property (weak, nonatomic) id<SiriUIMessageContentTemplateModel> dataSource;

- (void)setSemanticContentAttribute:(long long)a0;
- (id)initWithDataSource:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)desiredHeight;
- (struct CGSize { double x0; double x1; })_textBalloonViewBoundingSize;

@end
