@class UIStackView, NSString, NSArray, NSLayoutConstraint, UILabel, NSDate, UIButton;
@protocol HKIDUpdatedAndEditCellDelegate;

@interface HKIDUpdatedAndEditCell : UITableViewCell {
    NSArray *_regularLayoutConstraints;
    NSArray *_largeTextLayoutConstraints;
    UIStackView *_stackView;
    NSLayoutConstraint *_editFirstBaseLineAnchorConstraint;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *dateLabel;
@property (retain, nonatomic) UIButton *editButton;
@property (weak, nonatomic) id<HKIDUpdatedAndEditCellDelegate> delegate;
@property (retain, nonatomic) NSDate *dateSaved;
@property (retain, nonatomic) NSString *titleText;
@property (nonatomic, getter=isEditButtonHidden) BOOL hideEditButton;
@property (nonatomic, getter=isEditButtonDisabled) BOOL disableEditButton;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_updateForCurrentSizeCategory;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateFont;
- (void)_editButtonTapped:(id)a0;

@end
