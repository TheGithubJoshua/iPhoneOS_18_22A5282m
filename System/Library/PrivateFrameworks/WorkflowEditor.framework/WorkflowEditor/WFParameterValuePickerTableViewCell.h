@class UIViewController, WFCodableAttributeBackedSubstitutableState, WFParameter;
@protocol WFParameterValuePickable, WFParameterValuePickerTableViewCellDelegate;

@interface WFParameterValuePickerTableViewCell : UITableViewCell

@property (retain, nonatomic) WFParameter<WFParameterValuePickable> *parameter;
@property (retain, nonatomic) WFCodableAttributeBackedSubstitutableState *state;
@property (nonatomic, getter=isContainedInState) BOOL containedInState;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (weak, nonatomic) id<WFParameterValuePickerTableViewCellDelegate> delegate;
@property (nonatomic) BOOL disablesSeparatorIconInset;

- (void).cxx_destruct;
- (void)updateConfigurationUsingState:(id)a0;
- (void)tintColorDidChange;
- (id)configurationState;
- (id)defaultContentConfiguration;

@end
