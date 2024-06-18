@class UILabel;
@protocol SiriUISettingTemplateModel;

@interface SiriUISettingTemplateView : SiriUIBaseTemplateView {
    UILabel *_textLabel;
}

@property (weak, nonatomic) id<SiriUISettingTemplateModel> dataSource;

- (id)initWithDataSource:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)desiredHeight;

@end
