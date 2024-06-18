@interface ATXDemoStackAndWidgetProvider : NSObject

+ (id)demoStackAndWidgets;
+ (BOOL)_shouldShowStackInGallery;
+ (id)_widgetArrayForPrefixKey:(id)a0 countKey:(id)a1 defaults:(id)a2 descriptors:(id)a3;
+ (BOOL)isDemoModeEnabled;
+ (void)startYourEngines;
+ (id)_widgetFromDictionary:(id)a0 descriptors:(id)a1;

@end
