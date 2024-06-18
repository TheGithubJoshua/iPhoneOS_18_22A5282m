@class NSArray;

@interface SGSuggestions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *contacts;
@property (readonly, nonatomic) NSArray *events;
@property (readonly, nonatomic) NSArray *reminders;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContacts:(id)a0 events:(id)a1 reminders:(id)a2;

@end
