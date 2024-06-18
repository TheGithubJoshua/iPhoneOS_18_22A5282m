@class NSString, UIImageView, PLRoundProgressView, UILabel, NSArray;

@interface PUActivityProgressViewController : UIViewController {
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    PLRoundProgressView *_progressView;
    UIImageView *_checkmarkView;
    NSArray *_labelConstraints;
    NSArray *_contentConstraints;
}

@property (retain, nonatomic) NSString *primaryText;
@property (retain, nonatomic) NSString *secondaryText;
@property (nonatomic) BOOL showCheckmarkOnCompletion;
@property (nonatomic) double fractionCompleted;

- (void).cxx_destruct;
- (void)updateViewConstraints;
- (id)_progressView;
- (BOOL)_canShowWhileLocked;
- (void)reset;
- (id)_secondaryLabel;
- (id)_primaryLabel;
- (id)_checkmarkView;
- (void)_updatePrimaryLabel;
- (void)_updateSecondaryLabel;
- (void)_updateViewVisibility;

@end
