@class NSDictionary, NSArray;

@interface UIDraggingSystemTouchRoutingPolicy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *contextIDsToAlwaysSendTouchesByDisplayIdentifier;
@property (copy, nonatomic) NSArray *contextIDsToExcludeFromHitTesting;
@property (nonatomic, getter=isHitTestingDisabled) BOOL hitTestingDisabled;
@property (copy, nonatomic) NSArray *contextIDsToAlwaysSendTouches;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
