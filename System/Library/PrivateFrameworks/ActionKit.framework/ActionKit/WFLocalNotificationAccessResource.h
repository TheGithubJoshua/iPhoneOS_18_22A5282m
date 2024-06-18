@interface WFLocalNotificationAccessResource : WFAccessResource

+ (BOOL)isSystemResource;
+ (void)requestLocalNotificationsAuthorizationWithCompletionHandler:(id /* block */)a0;

- (id)icon;
- (id)name;
- (unsigned long long)status;
- (void)makeAvailableWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)protectedResourceDescription;

@end
