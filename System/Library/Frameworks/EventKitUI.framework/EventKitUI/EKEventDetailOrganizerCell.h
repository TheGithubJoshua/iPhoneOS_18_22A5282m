@class NSString, EKUILabeledAvatarView, UILabel;
@protocol EKIdentityProtocol;

@interface EKEventDetailOrganizerCell : EKEventDetailCell {
    NSString *_organizerName;
    EKUILabeledAvatarView *_organizerView;
    UILabel *_organizerLabel;
    UILabel *_titleView;
    id<EKIdentityProtocol> _organizerOverride;
}

@property (nonatomic) BOOL hideDisclosureIndicator;

+ (id)_titleFont;
+ (id)_organizerFont;

- (id)_titleView;
- (void).cxx_destruct;
- (void)_updateDisclosureIndicator;
- (BOOL)update;
- (id)_organizerLabel;
- (id)_organizerView;
- (id)initWithEvent:(id)a0 editable:(BOOL)a1 organizerOverride:(id)a2;
- (BOOL)shouldDisplayForEvent;

@end
