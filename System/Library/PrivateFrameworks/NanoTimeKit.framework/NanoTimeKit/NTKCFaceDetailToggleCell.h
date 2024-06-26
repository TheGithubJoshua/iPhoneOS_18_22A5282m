@class UISwitch;
@protocol NTKCFaceDetailToggleCellDelegate;

@interface NTKCFaceDetailToggleCell : NTKCDetailTableViewCell

@property (retain, nonatomic) UISwitch *toggle;
@property (nonatomic) BOOL on;
@property (weak, nonatomic) id<NTKCFaceDetailToggleCellDelegate> delegate;

+ (id)reuseIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)rowHeight;
- (void)_switchToggled;

@end
