@protocol PKTextInputLanguageSelectionTokenStore;

@interface PKTextInputLanguageSelectionToken : NSObject <NSCopying> {
    id<PKTextInputLanguageSelectionTokenStore> _store;
}

+ (id)tokenWithStore:(id)a0;

- (void)invalidate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
