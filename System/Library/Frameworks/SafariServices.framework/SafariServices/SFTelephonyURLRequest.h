@class NSString;

@interface SFTelephonyURLRequest : NSObject

@property (retain, nonatomic) NSString *successNotificationName;
@property (retain, nonatomic) NSString *failureNotificationName;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)initWithCompletionHandler:(id /* block */)a0;

@end
