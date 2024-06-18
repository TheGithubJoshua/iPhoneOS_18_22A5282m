@interface TIAssistantSettings : NSObject

+ (void)promptReminderDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)dismissEnableDictationPrompt;
+ (void)promptToEnableDictationWithCompletionHandler:(id /* block */)a0;
+ (void)dismissDialog;
+ (void)presentDialogForType:(long long)a0 withCompletionHandler:(id /* block */)a1;
+ (void)promptToEnableDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)dismissEnableDataSharingPrompt;
+ (void)launchKeyboardSettings;
+ (void)launchDictationSettings;
+ (void)connectForOperations:(id /* block */)a0 withErrorHandler:(id /* block */)a1;
+ (void)launchPencilSettings;
+ (void)dismissedDataSharingWithResponse:(long long)a0;
+ (void)promptToRemindDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)setTestBlock:(id /* block */)a0;

@end
