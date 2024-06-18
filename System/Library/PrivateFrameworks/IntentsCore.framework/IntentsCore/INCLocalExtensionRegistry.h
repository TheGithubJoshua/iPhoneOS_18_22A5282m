@class NSMutableDictionary;

@interface INCLocalExtensionRegistry : NSObject {
    NSMutableDictionary *_localExtensionsByIdentifier;
}

+ (id)sharedInstance;

- (id)init;
- (void)deregisterLocalExtension:(id)a0;
- (id)localExtensionForIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)registerLocalExtension:(id)a0;
- (id)localExtensions;

@end
