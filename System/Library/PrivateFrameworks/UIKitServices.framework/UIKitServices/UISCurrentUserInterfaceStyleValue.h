@interface UISCurrentUserInterfaceStyleValue : NSObject {
    int _notificationToken;
}

@property (readonly, nonatomic) long long userInterfaceStyle;

- (id)init;
- (id)initWithChangesDeliveredOnQueue:(id)a0 toBlock:(id /* block */)a1;
- (void)dealloc;

@end
