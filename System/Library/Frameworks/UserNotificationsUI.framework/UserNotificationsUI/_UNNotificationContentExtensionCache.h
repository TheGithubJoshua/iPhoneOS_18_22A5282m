@class NSMutableDictionary;

@interface _UNNotificationContentExtensionCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *extensions;

- (id)init;
- (void)_removeAllExtensions;
- (id)extensionForNotificationSourceIdentifier:(id)a0 categoryIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)_addExtension:(id)a0;
- (void)registerExtensions:(id)a0;
- (id)_sourceDictForSource:(id)a0;

@end
