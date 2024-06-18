@class UILabel, NSNumber;

@interface HUSetupCodeFieldItem : UIView

@property (nonatomic, getter=isActive) BOOL active;
@property (retain, nonatomic) UILabel *digitLabel;
@property (nonatomic) unsigned long long itemNumber;
@property (retain, nonatomic) NSNumber *value;

- (id)init;
- (void)clear;
- (void)activate;
- (void)deactivate;
- (void).cxx_destruct;

@end
