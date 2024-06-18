@interface CSAssetManagerEnablePolicy : CSPolicy

- (id)init;
- (void)_subscribeEventMonitors;
- (BOOL)_shouldCheckNetworkAvailability;
- (void)_addAssetManagerEnabledConditions;

@end
