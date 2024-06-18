@class NSString;

@interface TSAlertArticleUnavailable : NSObject <TSAlertable> {
    void /* unknown type, empty encoding */ alert;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *message;

- (id)init;
- (id)initWithType:(long long)a0;
- (void).cxx_destruct;
- (id)initWithBlockedReason:(unsigned long long)a0;

@end
