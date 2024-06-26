@class NSDictionary, NSString;

@interface AMSNotificationSettingsItem : NSObject

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSString *desc;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *title;
@property (nonatomic) BOOL userChanged;

- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTitle:(id)a0 description:(id)a1 identifier:(id)a2 enabled:(BOOL)a3;

@end
