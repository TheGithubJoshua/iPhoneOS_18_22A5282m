@class UIColor;

@interface PKPaymentPreferenceAddListItem : PKPaymentPreferenceListItem

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) id /* block */ handler;
@property (retain, nonatomic) UIColor *buttonTextColor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)configuration;
- (id)_text;
- (id)initWithAddPreferenceType:(int)a0 forSectionPreference:(id)a1 handler:(id /* block */)a2;

@end
