@class UIStackView, UILabel, UIDatePicker, NSDate;
@protocol AIAudiogramResultTimeCellDelegate;

@interface AIAudiogramResultTimeCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIStackView *labelStackView;
@property (retain, nonatomic) UIDatePicker *timePicker;
@property (weak, nonatomic) id<AIAudiogramResultTimeCellDelegate> delegate;
@property (retain, nonatomic) NSDate *date;

+ (id)reuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (void)_datePickerValueChanged:(id)a0;
- (void)configureLayout;

@end
