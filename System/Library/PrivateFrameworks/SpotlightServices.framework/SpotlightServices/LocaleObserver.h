@class NSArray, NSObject, NSLocale;
@protocol OS_dispatch_queue;

@interface LocaleObserver : NSObject {
    NSLocale *_currentLocale;
    NSArray *_preferredLanguages;
    BOOL _isCJK;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)update;
- (void)currentLocaleWithPreferredLanguagesBlock:(id /* block */)a0;

@end
