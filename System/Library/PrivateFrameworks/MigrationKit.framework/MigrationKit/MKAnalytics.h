@class MKPayload;

@interface MKAnalytics : NSObject

@property (retain, nonatomic) MKPayload *payload;

+ (id)sharedInstance;

- (id)init;
- (void)send;
- (void).cxx_destruct;
- (void)reset;
- (void)createPayload;
- (void)send:(id)a0 payload:(id)a1;

@end
