@class NSString;

@interface BMSource : NSObject <BMSourceProtocol>

@property (readonly, nonatomic) NSString *identifier;

+ (id)new;

- (id)init;
- (id)initWithIdentifier:(id)a0;
- (void)sendEvent:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)sendEvent:(id)a0 timestamp:(double)a1;

@end
