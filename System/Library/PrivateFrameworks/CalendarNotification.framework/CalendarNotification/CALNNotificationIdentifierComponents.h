@class NSString;

@interface CALNNotificationIdentifierComponents : NSObject

@property (readonly, copy, nonatomic) NSString *sourceIdentifier;
@property (readonly, copy, nonatomic) NSString *sourceClientIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSourceIdentifier:(id)a0 sourceClientIdentifier:(id)a1;

@end
