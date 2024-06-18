@class NSHashTable;

@interface LPThemeParametersObserver : NSObject {
    NSHashTable *_clients;
}

+ (id)shared;

- (id)init;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didChangeDarkenColorsStatus:(id)a0;
- (void)didChangeThemeParameters;

@end
