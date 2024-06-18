@class NSString, PKConnectedCircleView, UILabel, NSMutableArray;

@interface PKPayLaterScheduleHorizontalStack : NSObject {
    NSString *_leadingText;
    NSString *_trailingText;
    unsigned long long _stackIndex;
    NSMutableArray *_allViews;
}

@property (retain, nonatomic) UILabel *leadingLabel;
@property (retain, nonatomic) UILabel *trailingLabel;
@property (retain, nonatomic) PKConnectedCircleView *circleView;

- (void).cxx_destruct;
- (id)allViews;
- (void)_configureViews;
- (id)_greyGradientConnector;
- (id)initWithLeadingText:(id)a0 trailingText:(id)a1 stackIndex:(unsigned long long)a2;
- (double)minimumLeadingLabelWidth;

@end
