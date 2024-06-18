@interface MapsSuggestionsSiri : NSObject

+ (id)isAllowedOnHomeScreenCondition;
+ (BOOL)isEnabled;
+ (BOOL)isAllowedOnLockScreen;
+ (BOOL)isAllowedOnHomeScreen;
+ (id)isEnabledCondition;
+ (id)isAllowedOnLockScreenCondition;

@end
