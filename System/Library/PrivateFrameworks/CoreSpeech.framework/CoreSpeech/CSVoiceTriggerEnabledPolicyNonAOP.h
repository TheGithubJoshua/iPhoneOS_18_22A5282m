@interface CSVoiceTriggerEnabledPolicyNonAOP : CSPolicy

- (id)init;
- (void)_subscribeEventMonitors;
- (void)_addVoiceTriggerEnabledConditions;

@end