@class UILabel;

@interface SiriUIDetailLabelComponentView : SiriUILabelComponentView

@property (retain, nonatomic) UILabel *mainLabel;
@property (retain, nonatomic) UILabel *detailLabel;

+ (id)viewForComponent:(id)a0;

- (id)viewForLastBaselineLayout;
- (void).cxx_destruct;
- (id)viewForFirstBaselineLayout;
- (void)addSubviewsForComponentModel:(id)a0;

@end
